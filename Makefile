WARNINGS := -Wall -Wextra -pedantic -Wshadow -Wpointer-arith -Wcast-align \
            -Wwrite-char *s -Wmissing-prototypes -Wmissing-declarations \
            -Wredundant-decls -Wnested-externs -Winline -Wno-long-long \
            -Wuninitialized -Wconversion -Wstrict-prototypes
 
CFLAGS ?= -std=gnu99 -g $(WARNINGS)
 
OBJDIR := obj
SRCDIR := src
 
# (2 & 3) : silent by default
ifeq ($(VERBOSE), 1)
    SILENCER := 
else
    SILENCER := @
endif
 
#pass this environment variable to the C source
ifeq ($(DEBUG_BUILD), 1)
    CFLAGS +=-DDEBUG_BUILD
endif
 
# (12): typical way to list files and build full paths
# (4): list the sources, not the object files (nor includes)
_SRCS := check.c helper.c option.c my_printf.c main.c

SRCS := $(patsubst %, $(SRCDIR)/%, $(_SRCS))
OBJS := $(patsubst %, $(OBJDIR)/%, $(_SRCS:c=o))
 
# (5): generate phony deps during compilation
CFLAGS += -MMD -MP 
DEPS := $(patsubst %, $(OBJDIR)/%, $(_SRCS:c=d))
# (10): can't include the deps before the first, default target has appeared!
 
# (11): "all" is the classical default target
all: main
 
# (13): indent with TABs!!
createdir:
	$(SILENCER)mkdir -p $(OBJDIR)
 
main: $(OBJS) 
	$(SILENCER)$(CC) $(CFLAGS) -o $@ $^ 
 
# (6): put the object (and dependency!) files away from the sources
# (9): create the dir before building into it
$(OBJDIR)/%.o: $(SRCDIR)/%.c | createdir
	$(SILENCER)$(CC) $(CFLAGS) -c -o $@ $< 
 
clean:
	$(SILENCER)$(RM) -f *~ core main
	$(SILENCER)$(RM) -r $(OBJDIR)

fclean: clean
	$(SILENCER)$(RM) -r main
	$(SILENCER)$(RM) -r *.so
	$(SILENCER)$(RM) a.out

re: fclean main

.PHONY: clean all
 
# (10): dependencies won't turn into a default target here
-include $(DEPS)
