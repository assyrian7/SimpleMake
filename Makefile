CC=gcc
CFLAGS=-std=c99

Learning: Name.o main.o
	$(CC) -o Learning Name.o main.o

Name.o: Name.c Name.h
	$(CC) -c Name.c

main.o: main.c Name.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm Learning main.o Name.o