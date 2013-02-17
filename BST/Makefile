CC=g++
TARGET=output

all: main.o
	$(CC) main.o -o $(TARGET)
main.o:main.cc BST.hh
	$(CC) -g -c main.cc

clean:
	rm -rf *.o
	rm $(TARGET)

