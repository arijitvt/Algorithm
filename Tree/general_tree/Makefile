CC=g++
TARGET=output

all: tree.o
	$(CC) -o $(TARGET) tree.o

tree.o : tree.cc
	$(CC) -g -c tree.cc

clean:
	rm -rf *.o