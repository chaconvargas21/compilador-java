  

/* Sección DEFINICIONES */
%{
#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);
%}
/* Sección REGLAS */
%token ENTERO_LITERAL FLOTANTE_LITERAL DOBLE_LITERAL CARACTER_LITERAL CADENA_LITERAL BOOLEANO_LITERAL NULO_LITERAL 

%token ABSTRACTO AFIRMAR BOOLEANO INTERRUPCION BYTE CADENA CASO CAPTURA CARACTER CLASE CONSTANTE CONTINUAR DEFECTO HACER DOBLE SINO ENUMERACION EXPORTAR EXTIENDE FINAL FINALMENTE FLOTANTE PARA IR SI IMPLEMENTAR IMPORTAR ENTERO INTERFAZ LARGO MODULO NATIVO NUEVO PAQUETE PRIVADO PROTEGIDO PUBLICO REQUERIR RETORNAR CORTO ESTATICO STRICTFP SUPER INTERRUPTOR SINCRONIZADO ESTO LANZAR LANZA TRANSITORIO INTENTAR VARIABLE VACIO VOLATIL MIENTRAS PRINCIPAL ARGS

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

unidadCompilacion: 
     declaracionClase {printf("la unidad de compilacion se ejecuto correctamente\n");}; 

/*CLASE*/
declaracionClase:
	CLASE IDENTIFICADOR cuerpoClase;
cuerpoClase: 
	LLAVE_INI declaracionMetodo LLAVE_FIN;
declaracionMetodo:
	PUBLICO ESTATICO VACIO PRINCIPAL PARENTESIS_INI CADENA CORCHETE_INI CORCHETE_FIN ARGS PARENTESIS_FIN bloque;

/*BLOQUES Y SENTENCIAS*/
bloque: 
      LLAVE_INI sentenciasBloque LLAVE_FIN 
      | LLAVE_INI LLAVE_FIN;
      
sentenciasBloque: 
      sentenciasBloque sentenciaBloque 
      | sentenciaBloque;
sentenciaBloque:
       sentenciaDeclaracionVariableLocal {printf("la declaracion de variable local es valida\n");}
      | sentencia

      | sentenciaDeclaracionVariableLocalIncorrecto {printf("error: ';' esperado\n");};
sentenciaDeclaracionVariableLocal: 
      declaracionVariableLocal PUNTO_COMA;
sentencia:
	sentenciaSinSeguimientoSubsentencia
	| sentenciaSiLuego {printf("la sentencia si luego es valida\n");}
	| sentenciaSiLuegoSino {printf("la sentencia si luego sino es valida\n");}
	| sentenciaMientras {printf("la sentencia mientras es valida\n");}
      	| sentenciaPara  {printf("la sentencia para es valida\n");}

	| sentenciaSiLuegoSinoIncorrecto {printf("error: la sentencia si luego sino es incorrecta\n");}
	| sentenciaSiLuegoIncorrecto {printf("error: la sentencia si luego es incorrecta\n");}
	| sentenciaMientrasIncorrecto {printf("error : la sentencia mientras es incorrecta\n");};
	
sentenciaNoCorto:
	sentenciaSinSeguimientoSubsentencia 
	| sentenciaSiLuegoSinoNoCorto {printf("la sentencia si luego sino no corto es valida\n");} 
        | sentenciaParaNoCorto {printf("la sentencia para no corto es valida\n");};
sentenciaSinSeguimientoSubsentencia:
      bloque 
      | sentenciaVacia {printf("la sentencia vacia es valida\n");} 
      | sentenciaInterrupcion {printf("la sentencia interrupcion es valida\n");}
      | sentenciaContinuar {printf("la sentencia continuar es valida\n");}
      | sentenciaRetornar {printf("la sentencia retornar es valida\n");}
      | sentenciaExpresion {printf("la sentencia de expresion es valida\n");}

      | sentenciaExpresionIncorrecto {printf("error: ';' esperado\n");}
      | sentenciaVaciaIncorrecto {printf("error: ';' esperado\n");}
      | sentenciaInterrupcionIncorrecto {printf("error: ';' esperado\n");} 
      | sentenciaContinuarIncorrecto {printf("error: ';' esperado\n");} 
      | sentenciaRetornarIncorrecto {printf("error: ';' esperado\n");} ;

/*DECLARACION DE VARIABLE*/

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
      | inicializadorArreglo {printf("la sentencia inicializador de arreglo es valida\n");}
      | inicializadorArregloIncorrecto {printf("error: la sentencia inicializador de arreglo es incorrecta\n");};

/*SENTENCIA SI-SINO*/

sentenciaSiLuego:
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentencia ;
sentenciaSiLuegoSino:
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia ;
sentenciaSiLuegoSinoNoCorto:
      SI PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto;

/*SENTENCIA MIENTRAS*/

sentenciaMientras:
      MIENTRAS PARENTESIS_INI expresion PARENTESIS_FIN sentencia ;
  
/*SENTENCIA PARA*/

sentenciaPara:
	PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentencia ;
sentenciaParaNoCorto:
	PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto;
iniciarPara: listaExpresionesDeclaracion | declaracionVariableLocal;
actualizarPara: listaExpresionesDeclaracion;
listaExpresionesDeclaracion: 
      listaExpresionesDeclaracion COMA expresionDeclaracion 
      | expresionDeclaracion;

/*SENTENCIA VACIA*/

sentenciaVacia: PUNTO_COMA ;

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

/*SENTENCIA EXPRESION*/

sentenciaExpresion: 
      expresionDeclaracion PUNTO_COMA ;

/*SENTENCIA DECLARACION */

expresionDeclaracion:
	asignacion 
        | expresionPreIncremento 
	| expresionPreDecremento 
	| expresionPostIncremento
	| expresionPostDecremento
	| invocacionMetodo;

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

/*EXPRESIONES PRE INCREMENTO DECREMENTO*/

expresionPreIncremento:
	OP_INCREMENTO expresionUnaria;
expresionPreDecremento:
	OP_DECREMENTO expresionUnaria;

/*EXPRESIONES UNARIAS SIN MAS O MENOS*/

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

/*EXPRESIONES CAST*/

 expresionCast:
      PARENTESIS_INI tipoPrimitivo dimensiones PARENTESIS_FIN expresionUnaria
      | PARENTESIS_INI tipoPrimitivo PARENTESIS_FIN expresionUnaria
      | PARENTESIS_INI expresion PARENTESIS_FIN expresionUnariaNoMasMenos
	| PARENTESIS_INI nombre dimensiones PARENTESIS_FIN expresionUnariaNoMasMenos;

/*EXPRESIONES POST INCREMENTO DECREMENTO*/

expresionPostIncremento:
	expresionSufijo OP_INCREMENTO;
expresionPostDecremento:
	expresionSufijo OP_DECREMENTO;

/*PRIMARIO*/

primario: 
      primarioNoNuevoArreglo 
      | expresionCreacionArreglo {printf("la sentencia creacion de arreglo es valida\n");}

      | expresionCreacionArregloIncorrecto {printf("error: la sentencia creacion de arreglo es incorrecta\n");}; 
primarioNoNuevoArreglo:
	literal 
	| ESTO 
	| PARENTESIS_INI expresion PARENTESIS_FIN 
	| accesoCampo
	| invocacionMetodo 
	| accesoArreglo;

/*INICIALIZADOR ARREGLOS*/

inicializadorArreglo:
	LLAVE_INI inicializadoresVariable COMA LLAVE_FIN 
	| LLAVE_INI inicializadoresVariable LLAVE_FIN 
	| LLAVE_INI COMA LLAVE_FIN 
	| LLAVE_INI LLAVE_FIN;
inicializadoresVariable:
	inicializadoresVariable	 COMA inicializadorVariable
      | inicializadorVariable {printf("la sentencia inicializadoresVariable es valida\n");};


/*EXPRESIONES CREACION ARREGLO*/

expresionCreacionArreglo:
	NUEVO tipoPrimitivo expresionesDimension dimensiones 
      | NUEVO tipoPrimitivo expresionesDimension;
expresionesDimension:
	expresionesDimension expresionDimension
      | expresionDimension;
expresionDimension:
	CORCHETE_INI expresion CORCHETE_FIN;
dimensiones: 
	dimensiones CORCHETE_INI CORCHETE_FIN
      | CORCHETE_INI CORCHETE_FIN;

/*ACCESO CAMPO*/

accesoCampo: 
	primario PUNTO IDENTIFICADOR
	| SUPER PUNTO IDENTIFICADOR;

/*INVOCACION DE METODO*/

invocacionMetodo:
	nombres PARENTESIS_INI listaArgumentos PARENTESIS_FIN
	| nombres PARENTESIS_INI PARENTESIS_FIN;
listaArgumentos:
	listaArgumentos COMA expresion |
	expresion;
nombres:
	nombres PUNTO nombre
	| nombre;

/*ACCESO ARREGLO*/

accesoArreglo: 
	nombre CORCHETE_INI expresion CORCHETE_FIN
	| primarioNoNuevoArreglo CORCHETE_INI expresion CORCHETE_FIN;



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

/*ERRORES SINTACTICOS*/

/*PUNTO COMA FALTANTE*/

sentenciaDeclaracionVariableLocalIncorrecto: 
      declaracionVariableLocal;

sentenciaExpresionIncorrecto: 
	expresionDeclaracion;

sentenciaInterrupcionIncorrecto: 
      INTERRUPCION IDENTIFICADOR 
      | INTERRUPCION ;

sentenciaContinuarIncorrecto:
	CONTINUAR IDENTIFICADOR  
      | CONTINUAR ;

sentenciaRetornarIncorrecto:
	RETORNAR expresion 
      | RETORNAR ;

sentenciaVaciaIncorrecto: 
	/*VACIO*/; 

/*SENTENCIA SI-SINO INCORRECTAS*/

sentenciaSiLuegoIncorrecto: 
      SI expresion PARENTESIS_FIN sentencia 
      | SI PARENTESIS_INI expresion sentencia 
      | SI expresion sentencia 
      | SI PARENTESIS_INI PARENTESIS_FIN sentencia 
      | SI sentencia 

      | PARENTESIS_INI expresion PARENTESIS_FIN sentencia 
      | expresion PARENTESIS_FIN sentencia 
      | PARENTESIS_INI expresion sentencia 
      | expresion sentencia 
      | PARENTESIS_INI PARENTESIS_FIN sentencia;

sentenciaSiLuegoSinoIncorrecto: 
   
      SI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia
      | SI PARENTESIS_INI expresion sentenciaNoCorto SINO sentencia
      | SI expresion sentenciaNoCorto SINO sentencia
      | SI PARENTESIS_INI PARENTESIS_FIN sentenciaNoCorto SINO sentencia
      | SI sentenciaNoCorto SINO sentencia
      
      | SI PARENTESIS_INI expresion PARENTESIS_FIN SINO sentencia 
      | SI expresion PARENTESIS_FIN SINO sentencia 
      | SI PARENTESIS_INI expresion SINO sentencia 
      | SI expresion SINO sentencia
      | SI PARENTESIS_INI PARENTESIS_FIN SINO sentencia 
      | SI SINO sentencia
      	
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia
      | expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia
      | PARENTESIS_INI expresion sentenciaNoCorto SINO sentencia
      | expresion sentenciaNoCorto SINO sentencia
      | PARENTESIS_INI PARENTESIS_FIN sentenciaNoCorto SINO sentencia
	

      | PARENTESIS_INI expresion PARENTESIS_FIN SINO sentencia
      | expresion PARENTESIS_FIN SINO sentencia 
      | PARENTESIS_INI expresion SINO sentencia 
      | expresion SINO sentencia
      | PARENTESIS_INI PARENTESIS_FIN SINO sentencia;

/*SENTENCIA MIENTRAS INCORRECTAS*/

sentenciaMientrasIncorrecto:
    MIENTRAS sentencia;
    
/*SENTENCIA DE ARREGLOS INCORRECTAS*/

/*INICIALIZADOR ARREGLOS*/

inicializadorArregloIncorrecto:
      /*VACIO*/
      |LLAVE_INI inicializadoresVariable 
      | inicializadoresVariable
      | LLAVE_INI COMA;

/*EXPRESIONES CREACION ARREGLO*/

expresionCreacionArregloIncorrecto:
 
      NUEVO expresionesDimension dimensiones 
      | NUEVO expresionesDimension 
      | NUEVO dimensiones  
      | NUEVO tipoPrimitivo  dimensiones  
      | NUEVO tipoPrimitivo 
      | NUEVO 

      | tipoPrimitivo expresionesDimension dimensiones 
      | tipoPrimitivo expresionesDimension 
      | tipoPrimitivo  dimensiones 
      | tipoPrimitivo 

      | expresionesDimension dimensiones 
      | expresionesDimension 
      | dimensiones ;

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
