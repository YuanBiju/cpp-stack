# -*- MAKEFILE -*-

#target:dependencies
#	action
all: main

main: main.o stack.o
	g++ stack.o main.o -o main

main.o: main.cpp
	g++ -c .\main.cpp

stack.o: stack.cpp
	g++ -c .\stack.cpp

clean:
	rm -r *.o