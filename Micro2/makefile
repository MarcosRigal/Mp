all: saludo Micro2.exe clean

.PHONY: saludo
saludo:
	@echo Ejecutando el makefile de Marcos Rivera Gavilán

Micro2.exe: main.o funciones.a
	gcc -o $@ $^

main.o: main.c
	gcc -c $^

funciones.a: funciones.o
	ar -rsv $@ $^

funciones.o: funciones.c
	gcc -c $^

.PHONY: clean
clean:
	rm *o