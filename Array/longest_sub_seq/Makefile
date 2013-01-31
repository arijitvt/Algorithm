CC=g++
TARGET=output

all: longest.o
	$(CC) -o $(TARGET) longest.o

longest.o: longest.cc 
	$(CC) -g -c longest.cc

clean:
	rm -rf *.o
	rm $(TARGET)
