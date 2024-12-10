CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall

all: main

main: main.o log.o
	$(CC) $(LFLAGS) main.o log.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

log.o: log.cpp
	$(CC) $(CFLAGS) log.cpp

clean:
	rm *.o main
