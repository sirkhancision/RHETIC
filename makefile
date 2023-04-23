CC = gcc
CFLAGS = -O2 -pedantic -pipe -Wall -Werror

INCLUDES = -I/include

SRCS = src/main.c\
	src/quicksort.c\
	src/results.c\
	lang/en/RHETIC_en.c\
	lang/en/statements_en.c\
	lang/pt/RHETIC_pt.c\
	lang/pt/statements_pt.c

OBJS = $(SRCS:.c=.o)

MAIN = RHETIC

.PHONY: depend clean

all:    $(MAIN)
	@echo  RHETIC has been compiled

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

