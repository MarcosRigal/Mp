all: E3.exe Clear

E3.exe: E3main.o Contador.a
	gcc -o E3.exe E3main.o Contador.a

E3main.o: E3main.c 
	gcc -c E3main.c

Contador.a: Contador.o
	ar -rsv Contador.a Contador.o

Contador.o: Contador.c
	gcc -c Contador.c

.Phony: Clear
Clear:
	rm *.o