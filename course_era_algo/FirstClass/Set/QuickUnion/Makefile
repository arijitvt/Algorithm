CC=g++
TARGET=output

all:main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cc UF.hh
	$(CC) -g -c main.cc