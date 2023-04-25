CC := gcc
CFLAGS := -O2 -pedantic -pipe -Wall -Werror
LDFLAGS :=
LDLIBS :=

INCLUDES := -I/include

SRCDIR := src

BUILDDIR := build
OBJDIR := $(BUILDDIR)/obj

SOURCES := $(wildcard $(SRCDIR)/*.c)
OBJECTS := $(patsubst %.c, $(OBJDIR)/%.o, $(notdir $(SOURCES)))

EXECUTABLE := $(BUILDDIR)/RHETIC

.PHONY: all clean depend

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) -r $(BUILDDIR)

depend:
	$(CC) -MM $(CFLAGS) $(INCLUDES) $(SOURCES) > dependencies.mk

-include dependencies.mk
