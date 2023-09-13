CC = g++
CFLAGS = -Wall -g

main.exe: main.o Calculator.o
	$(CC) $(CFLAGS) -o main.exe main.o Calculator.o

main.o: main.cpp Calculator.h
	$(CC) $(CFLAGS) -c main.cpp

Calculator.o: Calculator.h