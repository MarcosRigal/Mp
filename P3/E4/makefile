all: E4.exe Clear

E4.exe: E4main.o SumaDigitos.a
	gcc -o E4.exe E4main.o SumaDigitos.a

E4main.o: E4main.c
	gcc -c E4main.c

SumaDigitos.a: SumaDigitos.o
	ar -rsv SumaDigitos.a SumaDigitos.o

SumaDigitos.o: SumaDigitos.c
	gcc -c SumaDigitos.c

.PHONY: Clear
Clear:
	rm *.o