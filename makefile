CC = gcc
CFLAGS = -ansi -Wall -pedantic -O2

INCLUDES = -I/include

SRCS = src/main.c src/res.c src/quick.c lang/en/stats.c lang/en/RHETIC_en.c

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
	
