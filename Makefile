WARNINGS := -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align \
		-Wwrite-strings -Wmissing-prototypes -Wmissing-declarations \
		-Wredundant-decls -Wnested-externs -Winline -Wno-long-long \
		-Wuninitialized -Wconversion -Wstrict-prototypes

CFLAGS ?= -std=gnu99 -g $(WARNINGS) -fpic

OBJDIR := obj
SRCDIR := src

CC := gcc

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

all: $(NAME)

createdir:
	$(SILENCER)mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^

my_printf_static: $(OBJS)
	$(SILENCER)$(AR) -r $(NAME).a -o $^

my_printf_dynamic: $(OBJS)
	$(SILENCER)$(CC) -shared $(NAME).so -o $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(SILENCER)$(RM) -r $(OBJDIR)

fclean: clean
	$(SILENCER)$(RM) -f *~ $(NAME) $(NAME).so $(NAME).a

re: fclean $(NAME)

.PHONY: clean all

-include $(DEPS)
