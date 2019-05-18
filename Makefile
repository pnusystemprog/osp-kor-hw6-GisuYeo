CC = gcc
CFLAGS = -Wall -g
OBJS = print.o delete.o register.o search.o phoneBookMain.o
all : main
%.o: %.c
	$(CC) -c -o $@ $(CFLAGS) $<
main: $(OBJS)
	$(CC) -o phoneBook $(OBJS)
clean:
	rm -f phoneBook $(OBJS)
