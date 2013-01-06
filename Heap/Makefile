CC=g++
TARGET=output


all: main.o
	$(CC) -o $(TARGET) main.o

main.o: main.cc
	$(CC) -g -c main.cc

clean:
	rm -rf *.o
	rm $(TARGET)



