EXE = ejercicio1 #nombre del ejecutable  
SRC = $(addsuffix .l,$(EXE)) #archivo fuente es ejecutable+".l"

all: 
	flex $(SRC)
	gcc -o $(EXE) lex.yy.c
 
