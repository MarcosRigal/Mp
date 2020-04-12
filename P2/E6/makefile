#Fichero: makefile
#Construye E6.exe a partir de E6main.c E6math.c E6inputoutput.c E6memory.c
all: E6.exe Clean Doxygen

E6.exe: E6main.o E6memory.a E6inputoutput.a E6math.a
	@echo Creando E6.exe...
	@gcc -o E6.exe E6main.o E6math.a E6inputoutput.a E6memory.a

E6main.o: E6main.c
	@echo Construyendo E6main.o...
	@gcc -c E6main.c

E6memory.a: E6memory.o
	@echo Creando la libreria: E6memory.a...
	@ar -rsv E6memory.a E6memory.o

E6memory.o: E6memory.c E6memory.h
	@echo Construyendo E6memory.o...
	@gcc -c E6memory.c E6memory.h

E6math.a: E6math.o
	@echo Creando la libreria E6math.a...
	@ar -rsv E6math.a E6math.o

E6math.o: E6math.c E6math.h
	@echo Construyendo E6math.o...
	@gcc -c E6math.c E6math.h

E6inputoutput.a: E6inputoutput.o
	@echo Creando la libreria E6inputoutput.a...
	@ar -rsv E6inputoutput.a E6inputoutput.o

E6inputoutput.o: E6inputoutput.c E6inputoutput.h
	@echo Construyendo E6math.o...
	@gcc -c E6inputoutput.c E6inputoutput.h

.PHONY: clean
Clean:
	@echo Limpiando ficheros temporales...
	@rm *.o
	@rm *.a
	@rm *.gch

.PHONY: Doxygen
Doxygen:
	doxygen config_file E6main.c E6math.c E6inputoutput.c E6memory.c E6math.h E6inputoutput.h E6memory.h