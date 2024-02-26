CC=gcc
CFLAG=-I. -Wall

list_test: list.o list_test.o
	$(CC) -o list_test list.o list_test.o
