

/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include <string.h>

int numLineas = 1;
int numCaracteres = 1;
%}

digito_no_zero [1-9]
digito 0|{digito_no_zero}
entero 0|{digito_no_zero}{digito}*
identificador [a-zA-Z\_]+[a-zA-Z0-9\_]*

/*numeros que comienzan en 0, excepto el 0*/
flotanteEmpiezaCero -?0{digito}+\.{digito}{1,7}
dobleEmpiezaCero -?0{digito}+\.{digito}{1,15}
enteroEmpiezaCero -?0{entero}

/*numero con varios puntos o fallas en la coma*/
errorNumeroFlotanteConComa -?{digito}+\,{digito}{1,7}
errorNumeroDobleConComa -?{digito}+\,{digito}{1,15}

/*mas de una coma o punto*/
errorMasDeUnPuntoOComa -?{digito}+[\.|\,]{digito}*[\.|\,]

/*identificar identificador no valido*/
errorIdentificador [0-9][a-zA-Z_@#,%&]|[@#][a-zA-Z_@#,%&0-9]|[a-zA-Z_]+[@#,%&]

tipo_dato "doble"|"flotante"|"entero"|"booleano"|"Cadena"|"corto"|"largo"|"byte"|"caracter"

error_declaracion {tipo_dato}[ ]+{identificador}[ ]+{identificador}

saltoLinea \n

/* Sección REGLAS */ 

%%

{error_declaracion} { printf("Error en la linea %i, columna %i, declaracion de varible incorrecta: %s\n", numLineas, numCaracteres, yytext); }

{enteroEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero  entero empieza con 0 y no es 0: %s\n", numLineas, numCaracteres, yytext); }

{errorNumeroFlotanteConComa}	 { printf("Error en la linea %i, columna %i, flotante con coma : %s\n", numLineas,numCaracteres,yytext); }

{errorNumeroDobleConComa}	 { printf("Error en la linea %i, columna %i, doble con coma : %s\n", numLineas,numCaracteres,yytext); }

{errorMasDeUnPuntoOComa} { printf("Error en la linea %i, columna %i, numero com mas de una coma o punto : %s\n", numLineas, numCaracteres,yytext); }

{flotanteEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero flotante empieza con 0 y no es 0. : %s\n", numLineas,numCaracteres,yytext); }

{dobleEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero doble empieza con 0 y no es 0. : %s\n", numLineas,numCaracteres,yytext); }

{errorIdentificador}	 { printf("Error en la linea %i, columna %i, la escritura numero o variable no es valido : %s\n", numLineas,numCaracteres,yytext); }

{saltoLinea}				{numLineas++; numCaracteres = 1;}		/* No mostrar entrada */
\t 					{numCaracteres = numCaracteres + 8;}
. 					{numCaracteres++;}	/* No mostrar entrada */
%%

int yywrap() {}
int main(int argc, char **argv)
{
 	yylex();
	return 0;
}

