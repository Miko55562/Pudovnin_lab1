CC=g++
CFLAGS=-Wall -Werror
SRC=$(wildcard *.cpp)


all: clean format build 

build:
	$(CC) $(CFLAGS) $(SRC) -o truba
	./truba

clean:
	rm -rf truba.o

format:
	clang-format -i -style=Google main.cpp