  

/* Sección DEFINICIONES */
%{
#include <stdio.h>
%}
%token ENTERO DOBLE CARACTER CADENA BOOLEANO NULO 
%token PALABRA_CLAVE 
%token ADICION SUSTRACCION MULTIPLICACION DIVISION MODULO
%token INCREMENTA DECREMENTA
%token IGUAL DIFERENTE MAYOR MENOR MAYOR_IGUAL MENOR_IGUAL
%token LOG_AND LOG_OR LOG_NOT
%token BIN_AND BIN_OR BIN_XOR BIN_COMPLEMENTO BIN_DESPLAZAMIENTO_IZQ BIN_DESPLAZAMIENTO_DER DESPLAZAMIENTO_DER_LLENADO_CERO
%token ASIGNACION ASIG_INCREMENTA ASIG_DECREMENTA ASIG_MULPTIPLICA ASIG_DIVIDE ASIG_MODULO ASIG_BIN_DESPLAZAMIENTO_IZQ ASIG_BIN_DESPLAZAMIENTO_DER ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO ASIG_BIN_AND ASIG_BIN_XOR ASIG_BIN_OR
%token OP_CONDICIONAL
%token EN_VEZ_DE
%token PUNTO_COMA COMA PUNTO PARENTESIS_INI PARENTESIS_FIN LLAVE_INI LLAVE_FIN CORCHETE_INI CORCHETE_FIN
%token FUNC_PRIMITIVA
%token IDENTIFICADOR

%union {
   double doble;
   int 	  entero;
   char   cadena[50];
   bool	  booleano;
   char   caracter;
}
/* Sección REGLAS */ 
%%
statements:	statements statement | statement ;

statement:	assignment | unary | methodinvocation | objectcreation | declaration | controlflow;

controlflow:	  


%%
main(int argc, char **argv)
{
  yyparse();
}

yyerror(char *s)
{
  fprintf(stderr, "error: %s\n", s);
}
