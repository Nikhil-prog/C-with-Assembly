#_*_Makefile_*_

all: run

run: addition.o prog-add.c
	gcc addition.o prog-add.c -o run.out
	./run.out
addition.o: addition.asm
	nasm -f elf64 addition.asm
clean: 
	rm run.out
	rm addition.o
