CC=g++
TARGET=output

all: QuickSort.o
	$(CC) -o $(TARGET) QuickSort.o

QuickSort.o: QuickSort.cc QuickSort.hh
	$(CC) -g -c QuickSort.cc

clean:
	rm -rf *.o
	rm $(TARGET)
