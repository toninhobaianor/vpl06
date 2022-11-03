CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/


all:main

intruso:
	@mkdir build/intruso/
	$(CC) $(CFLAGS) -c src/intruso.cpp -o build/intruso.o

main: intruso
	$(CC) $(CFLAGS) build/intruso.o src/main.cpp -o main.out

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)