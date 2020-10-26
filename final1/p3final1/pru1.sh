#¡/bin/bash
echo "hola mundo"
	flex lexer.l
	bison -d parser.y
	gcc -c lex.yy.c parser.tab.c
	gcc -o lexpar lex.yy.o parser.tab.o -ll
read -p "Ingrese nombre archivo: " NOMBREARCH
MENSAJE=`./lexpar < $NOMBREARCH.txt`
VAR=''
if [[ -z $MENSAJE ]];then
	mono traductor.exe
	javac salida.java
	java ClaseTraducida
else
	echo $MENSAJE
fi
exit