CC = gcc
CXX = g++
CFLAGS = -Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wno-unused-variable -g -Og

all: c cpp

c: c.o
	$(CC) $(CFLAGS) $^ -o $@

c.o: main.c
	$(CC) $(CFLAGS) -c $^ -o $@

cpp: cpp.o
	$(CXX) $(CFLAGS) -std=c++11 $^ -o $@

cpp.o: main.cpp
	$(CXX) $(CFLAGS) -std=c++11 -c $^ -o $@

clean:
	$(RM) *.o c cpp
