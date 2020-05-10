#Fichero: makefile
#Construye: crucigrama.x a partir de libMemoria.a y los ficheros objeto (.o) de main.c, ficheros.c y crucigrama.c
#Construye: libMemoria.a a partir de los ficheros objeto (.o) de reservaMemoria.c y liberaMemoria.c
#Borra: los ficheros objeto generados mediante un destino phony llamado clean

all: crucigrama.x clean Doxygen

crucigrama.x: main.o ficheros.o crucigrama.o libMemoria.a
	gcc -o $@ $^

main.o: main.c
	gcc -c $^

ficheros.o: ficheros.c
	gcc -c $^

crucigrama.o: crucigrama.c
	gcc -c $^

libMemoria.a: reservaMemoria.o liberaMemoria.o
	ar -rsv $@ $^

reservaMemoria.o: reservaMemoria.c
	gcc -c $^

liberaMemoria.o: liberaMemoria.c
	gcc -c $^

.PHONY: clean
clean:
	rm *o

.PHONY: Doxygen
Doxygen:
	doxygen Doxyfile main.c reservaMemoria.c liberaMemoria.c memoria.h ficheros.c ficheros.h crucigrama.c crucigrama.h