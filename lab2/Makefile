GCC = gcc
CFLAGS = -g -Wall -Wshadow
OBJS = cmdlib.o menu.o
HDRS = cmdlib.h
VALGRIND = valgrind --tool=memcheck --leak-check=full
VALGRIND += --verbose --log-file=

menu: $(OBJS) $(HARS)
	$(GCC) $(CFLAGS) $(OBJS) -o $@

.c.0:
	$(GCC) $(FLAGS) -c $*.c

clean:
	/bin/rm -f menu
