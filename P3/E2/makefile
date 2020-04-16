all: E2.exe Clean

E2.exe: E2main.o RestasSucesivas.a
	gcc -o E2.exe E2main.o RestasSucesivas.a

E2main.o: E2main.c
	gcc -c E2main.c

RestasSucesivas.a: RestasSucesivas.o
	ar -rsv RestasSucesivas.a RestasSucesivas.o

RestasSucesivas.o: RestasSucesivas.c
	gcc -c RestasSucesivas.c

.Phony: Clean
Clean:
	rm *.o