WARNINGS := -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align \
			-Wwrite-strings -Wmissing-prototypes -Wmissing-declarations \
            -Wredundant-decls -Wnested-externs -Winline -Wno-long-long \
            -Wuninitialized -Wconversion -Wstrict-prototypes

CFLAGS ?= -std=gnu99 -g $(WARNINGS)

OBJDIR := obj
SRCDIR := src

ifeq ($(VERBOSE), 1)
    SILENCER := 
else
    SILENCER := @
endif

ifeq ($(DEBUG_BUILD), 1)
    CFLAGS +=-DDEBUG_BUILD
endif

SRCF := rules.process.c \
		rules.option.c \
		helper.c \
		my_printf.c \
		test.c

SRCS := $(patsubst %, $(SRCDIR)/%, $(SRCF))
OBJS := $(patsubst %, $(OBJDIR)/%, $(SRCF:c=o))

CFLAGS += -MMD -MP 
DEPS := $(patsubst %, $(OBJDIR)/%, $(SRCF:c=d))

all: main

createdir:
	$(SILENCER)mkdir -p $(OBJDIR)

main: $(OBJS) 
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^ 

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(CC) $(CFLAGS) -c -o $@ $<

my_printf_static: $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -static -L. -llibmy_printf_phetsi_w -o $@ $^ 

my_printf_dynamic: $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -shared -Wl,-soname,libmy_printf_phetsi_w.so -o $@ $^ 

clean:
	$(SILENCER)$(RM) -f *~ core main
	$(SILENCER)$(RM) -r $(OBJDIR)

fclean: clean
	$(SILENCER)$(RM) -r main
	$(SILENCER)$(RM) -r *.so
	$(SILENCER)$(RM) a.out

re: fclean main

.PHONY: clean all

-include $(DEPS)
