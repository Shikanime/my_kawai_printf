WARNINGS := -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align \
			-Wwrite-strings -Wmissing-prototypes -Wmissing-declarations \
            -Wredundant-decls -Wnested-externs -Winline -Wno-long-long \
            -Wuninitialized -Wconversion -Wstrict-prototypes

CFLAGS ?= -std=gnu99 -g $(WARNINGS)

OBJDIR := obj
SRCDIR := src

NAME := libmy_printf_$(shell uname -m)-$(shell uname -s)

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

all: $(NAME)

createdir:
	$(SILENCER)mkdir -p $(OBJDIR)

# Binary
$(NAME): $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(CC) $(CFLAGS) -c -o $@ $<

# Static lib
my_printf_static: $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(AR) -r $@ -o $^

# Dynamic lib
my_printf_dynamic: $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(GCC) -shared $@ -o $^

clean:
	$(SILENCER)$(RM) -r $(OBJDIR)

fclean: clean
	$(SILENCER)$(RM) -f *~ core main
	$(SILENCER)$(RM) -r *.so
	$(SILENCER)$(RM) -r *.a

re: fclean main

.PHONY: clean all

-include $(DEPS)