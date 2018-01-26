CC=gcc 
CFLAGS=-Wall
all: nparser

nparser: main.o buffer.o
				 g++17 -o src/main.o src/bufert.o

main.o: main.cpp
				g++17 -c main.o

buffer.o: buffer.cpp
				g++17 -c buffer.cpp

clean:
	rm -f nparser src/main.o src/buffer.o