  

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);
%}
/* Sección REGLAS */
%token ENTERO_LITERAL FLOTANTE_LITERAL DOBLE_LITERAL CARACTER_LITERAL CADENA_LITERAL BOOLEANO_LITERAL NULO_LITERAL 

%token ABSTRACTO AFIRMAR BOOLEANO INTERRUPCION BYTE CASO CAPTURA CARACTER CLASE CONSTANTE CONTINUAR DEFECTO HACER DOBLE SINO ENUMERACION EXPORTAR EXTIENDE FINAL FINALMENTE FLOTANTE PARA IR SI IMPLEMENTAR IMPORTAR ENTERO INTERFAZ LARGO MODULO NATIVO NUEVO PAQUETE PRIVADO PROTEGIDO PUBLICO REQUERIR RETORNAR CORTO ESTATICO STRICTFP SUPER INTERRUPTOR SINCRONIZADO ESTO LANZAR LANZA TRANSITORIO INTENTAR VARIABLE VACIO VOLATIL MIENTRAS

%token OP_SUMA OP_RESTA OP_MULTIPLICACION OP_DIVISION OP_MODULO

%token OP_INCREMENTO OP_DECREMENTO

%token OP_IGUAL OP_DIFERENTE OP_MAYOR OP_MENOR OP_MAYOR_IGUAL OP_MENOR_IGUAL

%token OP_LOG_AND OP_LOG_OR OP_LOG_NOT

%token OP_BIN_AND OP_BIN_OR OP_BIN_XOR OP_BIN_COMPLEMENTO OP_BIN_DESPLAZAMIENTO_IZQ OP_BIN_DESPLAZAMIENTO_DER OP_DESPLAZAMIENTO_DER_LLENADO_CERO

%token OP_ASIGNACION OP_ASIG_SUMA OP_ASIG_RESTA OP_ASIG_MULTIPLICACION OP_ASIG_DIVISION OP_ASIG_MODULO OP_ASIG_BIN_DESPLAZAMIENTO_IZQ OP_ASIG_BIN_DESPLAZAMIENTO_DER OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO OP_ASIG_BIN_AND OP_ASIG_BIN_XOR OP_ASIG_BIN_OR OP_ENVEZDE

%token INTERROGACION DOS_PUNTOS PUNTO_COMA COMA PUNTO PARENTESIS_INI PARENTESIS_FIN LLAVE_INI LLAVE_FIN CORCHETE_INI CORCHETE_FIN

%token FUNC_PRIMITIVA

%token IDENTIFICADOR

/* Sección REGLAS */ 
%%

/*OBJETIVO*/

objetivo:	
      unidadCompilacion;

/*LITERAL*/

literal:	
      ENTERO_LITERAL  
      | FLOTANTE_LITERAL  
      | DOBLE_LITERAL 
      | BOOLEANO_LITERAL  
      | CARACTER_LITERAL  
      | CADENA_LITERAL 
      | NULO_LITERAL;

/*TIPO*/

tipo:
      tipoPrimitivo | tipoReferencia;
tipoPrimitivo:	
      tipoNumerico | BOOLEANO;
tipoNumerico:
      tipoIntegral | tipoPuntoFlotante;
tipoIntegral:	
      BYTE | CORTO | ENTERO | LARGO | CARACTER;
tipoPuntoFlotante:	
      FLOTANTE | DOBLE;
tipoReferencia: 
      tipoArreglo;
tipoArreglo:  
      tipoPrimitivo CORCHETE_INI CORCHETE_FIN 
      | tipoArreglo CORCHETE_INI CORCHETE_FIN
      | nombre CORCHETE_INI CORCHETE_FIN;
nombre: 
      IDENTIFICADOR;

/*DECLARACION DE CLASES*/

declaracionVariableLocal:
	tipo declaradoresVariable;
declaradoresVariable: 
      declaradoresVariable COMA declaradorVariable
      | declaradorVariable;	 
declaradorVariable: 
      declaradorVariableId 
      | declaradorVariableId OP_ASIGNACION inicializadorVariable;
declaradorVariableId: 
      IDENTIFICADOR 
      | declaradorVariableId CORCHETE_INI CORCHETE_FIN;
inicializadorVariable: 
      expresion 
      | inicializadorArreglo;


/*INICIALIZADOR ARREGLOS*/

inicializadorArreglo:
	PARENTESIS_INI inicializadoresVariable COMA PARENTESIS_FIN 
	| PARENTESIS_INI inicializadoresVariable PARENTESIS_FIN 
	| PARENTESIS_INI COMA PARENTESIS_FIN 
	| PARENTESIS_INI PARENTESIS_FIN;
inicializadoresVariable:
	inicializadoresVariable	 COMA inicializadorVariable
      | inicializadorVariable;

/*BLOQUES Y SENTENCIAS*/
unidadCompilacion: 
      bloque {printf("la unidad de compilacion se ejecuto correctamente\n");};
bloque: 
      LLAVE_INI sentenciasBloque LLAVE_FIN 
      | LLAVE_INI LLAVE_FIN;
sentenciasBloque: 
      sentenciasBloque sentenciaBloque 
      | sentenciaBloque;
sentenciaBloque:  
      sentenciaDeclaracionVariableLocal 
      | sentencia;
sentenciaDeclaracionVariableLocal: 
      declaracionVariableLocal PUNTO_COMA {printf("la declaracion de variable local es valida\n");};
sentencia:
	sentenciaSinSeguimientoSubsentencia
	| sentenciaSiLuego 
	| sentenciaSiLuegoSino 
	| sentenciaMientras;
sentenciaNoCorto:
	sentenciaSinSeguimientoSubsentencia 
	| sentenciaSiLuegoSinoNoCorto 
	| sentenciaMientrasNoCorto;
sentenciaSinSeguimientoSubsentencia:
      bloque 
      | sentenciaVacia 
      | sentenciaExpresion 
      | sentenciaInterrupcion 
      | sentenciaContinuar 
      | sentenciaRetornar;

/*SENTENCIA VACIA*/
sentenciaVacia: 
      PUNTO_COMA;


/*SENTENCIA EXPRESION*/

sentenciaExpresion: 
	expresionDeclaracion PUNTO_COMA {printf("la sentencia de expresion es valida\n");};

/*SENTENCIA DECLARACION */
expresionDeclaracion:
	asignacion 
      	| expresionPreIncremento 
	| expresionPreDecremento 
	| expresionPostIncremento 
	| expresionPostDecremento ;

/*SENTENCIA SI-SINO*/

sentenciaSiLuego: 
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentencia {printf("la sentencia si luego es valida\n");};
sentenciaSiLuegoSino: 
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia {printf("la sentencia si luego sino es valida\n");};
sentenciaSiLuegoSinoNoCorto:
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto{printf("la sentencia si luego sino no corto es valida\n");};

/*SENTENCIA MIENTRAS*/

sentenciaMientras:
	MIENTRAS PARENTESIS_INI expresion PARENTESIS_FIN sentencia {printf("la sentencia mientras es valida\n");};
sentenciaMientrasNoCorto:
      MIENTRAS PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto {printf("la sentencia mientras no corto es valida\n");};


/* SENTENCIA INTERRUPCION */

sentenciaInterrupcion: 
      INTERRUPCION IDENTIFICADOR PUNTO_COMA
      | INTERRUPCION PUNTO_COMA;

/* SENTENCIA CONTINUAR */

sentenciaContinuar:
	CONTINUAR IDENTIFICADOR PUNTO_COMA 
      | CONTINUAR PUNTO_COMA;

/* SENTENCIA RETORNAR */

sentenciaRetornar:
	RETORNAR expresion PUNTO_COMA 
      | RETORNAR PUNTO_COMA;

/*EXPRESIONES*/
expresion:
	asignacion
	| expresionCondicional;
asignacion:
      ladoIzq operadorAsignacion expresion;
ladoIzq:
	nombre
	| accesoCampo
	| accesoArreglo;
operadorAsignacion: 
      OP_ASIGNACION 
      | OP_ASIG_SUMA 
      | OP_ASIG_RESTA 
      | OP_ASIG_MULTIPLICACION 
      | OP_ASIG_DIVISION 
      | OP_ASIG_MODULO 
      | OP_ASIG_BIN_DESPLAZAMIENTO_IZQ 
      | OP_ASIG_BIN_DESPLAZAMIENTO_DER 
      | OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO 
      | OP_ASIG_BIN_AND 
      | OP_ASIG_BIN_XOR 
      | OP_ASIG_BIN_OR;

/*EXPRESIONES CONDICIONALES*/

expresionCondicional:
	expresionCondicionalOR
	| expresionCondicionalOR INTERROGACION expresion DOS_PUNTOS expresionCondicional;

/*EXPRESIONES LOGICAS*/

expresionCondicionalOR:
	expresionCondicionalAND
	| expresionCondicionalOR OP_LOG_OR expresionCondicionalAND;
expresionCondicionalAND:
	expresionOR
	| expresionCondicionalAND OP_LOG_AND expresionOR;
expresionOR:
	expresionXOR
	| expresionOR OP_BIN_OR expresionXOR;
expresionXOR:
	expresionAND 
      | expresionXOR OP_BIN_XOR expresionAND;
expresionAND:
	expresionIgualdad 
	| expresionAND OP_BIN_AND expresionIgualdad;

/*EXPRESIONES RELACIONALES*/

expresionIgualdad:
	expresionRelacional
      | expresionIgualdad OP_IGUAL expresionRelacional
      | expresionIgualdad OP_DIFERENTE expresionRelacional;
expresionRelacional:
	expresionOperacional
      | expresionRelacional OP_MAYOR expresionOperacional
      | expresionRelacional OP_MENOR expresionOperacional
      | expresionRelacional OP_MAYOR_IGUAL expresionOperacional
      | expresionRelacional OP_MENOR_IGUAL expresionOperacional
      | expresionRelacional OP_ENVEZDE tipoReferencia;

expresionOperacional:
	expresionAditiva;

/*EXPRESIONES ARITMETICAS */

expresionAditiva:
	expresionMultiplicativa  
	| expresionAditiva OP_SUMA expresionMultiplicativa  
	| expresionAditiva OP_RESTA expresionMultiplicativa;

expresionMultiplicativa:
	expresionUnaria  
	| expresionMultiplicativa OP_MULTIPLICACION expresionUnaria
	| expresionMultiplicativa OP_DIVISION expresionUnaria
      | expresionMultiplicativa OP_MODULO expresionUnaria;

/*EXPRESIONES UNARIAS*/

expresionUnaria:
	expresionPreIncremento
	| expresionPreDecremento
      | OP_SUMA expresionUnaria
      | OP_RESTA expresionUnaria
	| expresionUnariaNoMasMenos;

/*EXPRESIONES INCREMENTO DECREMENTO*/

expresionPreIncremento:
	OP_INCREMENTO expresionUnaria;
expresionPreDecremento:
	OP_DECREMENTO expresionUnaria;
expresionUnariaNoMasMenos:
	expresionSufijo
      | OP_BIN_COMPLEMENTO expresionUnaria
      | OP_LOG_NOT expresionUnaria
      | expresionCast;
expresionSufijo:
	primario 
      | nombre
      | expresionPostIncremento
      | expresionPostDecremento;
expresionPostIncremento:
	expresionSufijo OP_INCREMENTO;
expresionPostDecremento:
	expresionSufijo OP_DECREMENTO;

/*EXPRESIONES CAST*/

 expresionCast:
      PARENTESIS_INI tipoPrimitivo dimensiones PARENTESIS_FIN expresionUnaria
      | PARENTESIS_INI tipoPrimitivo PARENTESIS_FIN expresionUnaria
      | PARENTESIS_INI expresion PARENTESIS_FIN expresionUnariaNoMasMenos
	| PARENTESIS_INI nombre dimensiones PARENTESIS_FIN expresionUnariaNoMasMenos;

/*ACCESO CAMPO*/

accesoCampo: 
	primario PUNTO IDENTIFICADOR
	SUPER PUNTO IDENTIFICADOR;

/*ACCESO ARREGLO*/

accesoArreglo: 
	nombre CORCHETE_INI expresion CORCHETE_FIN
	| primarioNoNuevoArreglo CORCHETE_INI expresion CORCHETE_FIN;

/*PRIMARIO*/

primario: 
      primarioNoNuevoArreglo 
      | expresionCreacionArreglo; 
primarioNoNuevoArreglo:
	literal 
	| ESTO 
	| PARENTESIS_INI expresion PARENTESIS_FIN 
	| accesoCampo 
	| accesoArreglo;

/*EXPRESIONES CREACION ARREGLO*/

expresionCreacionArreglo:
	NUEVO tipoPrimitivo expresionesDimension dimensiones 
      | NUEVO tipoPrimitivo expresionesDimension 
      | NUEVO expresionesDimension dimensiones
      | NUEVO expresionesDimension;
expresionesDimension:
	expresionesDimension expresionDimension
      | expresionDimension;
expresionDimension:
	CORCHETE_INI expresion CORCHETE_FIN;
dimensiones: 
	dimensiones CORCHETE_INI CORCHETE_FIN
      | CORCHETE_INI CORCHETE_FIN;

%%
/* Sección CODIGO USUARIO */
FILE *yyin;
int main() {
    do {
        yyparse();
    }
    while ( !feof(yyin) );
    
    return 0;
}

int yyerror(char *s) {
    fprintf(stderr, "A.Sintactico: %s\n", s);
    return 0;
}
