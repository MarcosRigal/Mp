#Fichero: makefile
#Construye E6.exe a partir de E6main.c E6math.c E6inputoutput.c E6memory.c
all: E6.exe Clean Doxygen

E6.exe: E6main.o E6matrix.a
	@echo Creando E6.exe...
	@gcc -o E6.exe E6main.o E6matrix.a

E6main.o: E6main.c
	@echo Construyendo E6main.o...
	@gcc -c E6main.c

E6matrix.a: E6memory.o E6math.o E6inputoutput.o
	@echo Creando la libreria: E6matrix.a...
	@ar -rs E6matrix.a E6memory.o E6math.o E6inputoutput.o

E6memory.o: E6memory.c
	@echo Construyendo E6memory.o...
	@gcc -c E6memory.c

E6math.o: E6math.c
	@echo Construyendo E6math.o...
	@gcc -c E6math.c

E6inputoutput.o: E6inputoutput.c
	@echo Construyendo E6math.o...
	@gcc -c E6inputoutput.c

.PHONY: Clean
Clean:
	@echo Limpiando ficheros temporales...
	@rm *.o

.PHONY: Doxygen
Doxygen:
	doxygen config_file E6math.c E6main.c E6inputoutput.c E6memory.c E6.h