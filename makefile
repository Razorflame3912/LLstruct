all: LLstruct.o
	gcc -o linkedlist LLstruct.o

LLstruct.o: LLstruct.c
	gcc -c LLstruct.c

run: LLstruct LLstruct.o LLstruct.c
	./LLstruct

clean:
	rm linkedlist
	rm *.o
	rm *~
