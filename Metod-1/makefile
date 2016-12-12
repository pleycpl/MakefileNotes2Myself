
all: main.o library.o
	gcc -Wall main.o library.o -o result
main.o: main.c ./include/library.h
	gcc -Wall -c main.c -o main.o
library.o: ./lib/library.c ./include/library.h
	gcc -Wall -c ./lib/library.c -o library.o

clean:
	rm -rf *.o
	rm result
help:
	@echo "*******************"
	@echo compiler: "make all"
	@echo run: "./result"
	@echo delete: "make clean"
	@echo "*******************"
