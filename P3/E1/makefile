all: E1.exe Clean

E1.exe: E1main.o Euclides.a
	gcc -o E1.exe E1main.o Euclides.a

E1main.o: E1main.c
	gcc -c E1main.c

Euclides.a: Euclides.o
	ar -rsv Euclides.a Euclides.o

Euclides.o: Euclides.c
	gcc -c Euclides.c

.PHONY: Clean
Clean:
	rm *.o