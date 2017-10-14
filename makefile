all: LLstruct.o
	gcc -o linkedlist LLstruct.o

LLstruct.o: LLstruct.c
	gcc -c LLstruct.c

run: LLstruct LLstruct.o LLstruct.c
	./LLstruct

clean:
	rm -f linkedlist
	rm -f *.o
	rm -f *~
