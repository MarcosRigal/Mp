all: E7.exe Clean

E7.exe: E7main.o E7matrix.a
	gcc -o E7.exe E7main.o E7matrix.a

E7main.o: E7main.c
	gcc -c E7main.c

.PHONY: Clean
Clean:
	rm *.o