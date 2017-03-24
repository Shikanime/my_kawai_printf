WARNINGS := -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align \
		-Wwrite-strings -Wmissing-prototypes -Wmissing-declarations \
		-Wredundant-decls -Wnested-externs -Winline -Wno-long-long \
		-Wuninitialized -Wconversion -Wstrict-prototypes

CFLAGS ?= -std=gnu99 -g $(WARNINGS) -fpic

OBJDIR := obj
SRCDIR := src

CC := gcc

EXEC := my_printf
LIBS := my_printf_static
LIBD := my_printf_dynamic

NAME := libmy_printf_$(shell uname -m)-$(shell uname -s)


ifeq ($(VERBOSE), 1)
    SILENCER :=
else
    SILENCER := @
endif

ifeq ($(DEBUG_BUILD), 1)
    CFLAGS +=-DDEBUG_BUILD
endif

SRCF := rules.process.c rules.option.c \
		helper.c my_printf.c \
		main.c

SRCS := $(patsubst %, $(SRCDIR)/%, $(SRCF))
OBJS := $(patsubst %, $(OBJDIR)/%, $(SRCF:c=o))

CFLAGS += -MMD -MP
DEPS := $(patsubst %, $(OBJDIR)/%, $(SRCF:c=d))

all: $(EXEC)

createdir:
	$(SILENCER)mkdir -p $(OBJDIR)

$(EXEC): $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -o $(NAME) $^

$(LIBS): $(OBJS)
	$(SILENCER)$(AR) -r $(NAME).a -o $^

$(LIBD): $(OBJS)
	$(SILENCER)$(CC) -shared -o $(NAME).so  $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(SILENCER)$(RM) -r $(OBJDIR)

fclean: clean
	$(SILENCER)$(RM) -f *~ $(NAME) $(NAME).so $(NAME).a

re: fclean $(LIBS) $(LIBD)

.PHONY: clean all

-include $(DEPS)
