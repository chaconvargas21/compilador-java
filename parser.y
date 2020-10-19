  

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
      PUBLICO ESTATICO VACIO PRINCIPAL PARENTESIS_INI CADENA CORCHETE_INI CORCHETE_FIN ARGS PARENTESIS_FIN
      bloque {printf("la unidad de compilacion se ejecuto correctamente\n");}
      
      | bloqueIncorrecto;

/*BLOQUES Y SENTENCIAS*/

bloque: 
      LLAVE_INI sentenciasBloque LLAVE_FIN 
      | LLAVE_INI LLAVE_FIN;
      
sentenciasBloque: 
      sentenciasBloque sentenciaBloque 
      | sentenciaBloque;
sentenciaBloque:
      | sentenciaDeclaracionVariableLocal 
      | sentencia

      | sentenciaDeclaracionVariableLocalIncorrecto;
sentenciaDeclaracionVariableLocal: 
      declaracionVariableLocal PUNTO_COMA {printf("la declaracion de variable local es valida\n");};
sentencia:
	sentenciaSinSeguimientoSubsentencia
	| sentenciaSiLuego 
	| sentenciaSiLuegoSino 
	| sentenciaMientras
      	| sentenciaPara
	
	| sentenciaSiLuegoIncorrecto
	| sentenciaSiLuegoSinoIncorrecto
	| sentenciaMientrasIncorrecto;
sentenciaNoCorto:
	sentenciaSinSeguimientoSubsentencia 
	| sentenciaSiLuegoSinoNoCorto 
	| sentenciaMientrasNoCorto
        | sentenciaParaNoCorto

	| sentenciaSiLuegoSinoNoCortoIncorrecto
	| sentenciaMientrasNoCortoIncorrecto;
sentenciaSinSeguimientoSubsentencia:
      bloque 
      | sentenciaVacia 
      | sentenciaExpresion

      | sentenciaExpresionIncorrecto
      | sentenciaVaciaIncorrecto;
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
      | inicializadorArreglo

      | inicializadorArregloIncorrecto;

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
      
/*SENTENCIA PARA*/

sentenciaPara:
	PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA actualizarPara PARENTESIS_FIN sentencia 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentencia {printf("la sentencia para es valida\n");};
sentenciaParaNoCorto:
	PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI iniciarPara PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA expresion PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA actualizarPara PARENTESIS_FIN sentenciaNoCorto 
      | PARA PARENTESIS_INI PUNTO_COMA PUNTO_COMA PARENTESIS_FIN sentenciaNoCorto {printf("la sentencia para no corto es valida\n");};
iniciarPara: listaExpresionesDeclaracion | declaracionVariableLocal;
actualizarPara: listaExpresionesDeclaracion;
listaExpresionesDeclaracion: 
      listaExpresionesDeclaracion COMA expresionDeclaracion 
      | expresionDeclaracion;

/*SENTENCIA VACIA*/

sentenciaVacia: PUNTO_COMA {printf("la sentencia vacia es valida\n");};

/*SENTENCIA EXPRESION*/

sentenciaExpresion: 
      expresionDeclaracion PUNTO_COMA {printf("la sentencia de expresion es valida\n");};

/*SENTENCIA DECLARACION */

expresionDeclaracion:
	asignacion 
      | expresionPreIncremento 
	| expresionPreDecremento 
	| expresionPostIncremento 
	| expresionPostDecremento;

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

/*EXPRESIONES ARITMETICAS */

expresionOperacional:
	expresionAditiva;

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
      | OP_LOG_NOT expresionUnaria;
expresionSufijo:
	primario 
      | nombre
      | expresionPostIncremento
      | expresionPostDecremento;

/*EXPRESIONES POST INCREMENTO DECREMENTO*/

expresionPostIncremento:
	expresionSufijo OP_INCREMENTO;
expresionPostDecremento:
	expresionSufijo OP_DECREMENTO;

/*PRIMARIO*/

primario: 
      primarioNoNuevoArreglo 
      | expresionCreacionArreglo
      
      | expresionCreacionArregloIncorrecto; 
primarioNoNuevoArreglo:
	literal 
	| ESTO 
	| PARENTESIS_INI expresion PARENTESIS_FIN 
	| accesoCampo 
	| accesoArreglo;

/*INICIALIZADOR ARREGLOS*/

inicializadorArreglo:
	LLAVE_INI inicializadoresVariable COMA LLAVE_FIN 
	| LLAVE_INI inicializadoresVariable LLAVE_FIN 
	| LLAVE_INI COMA LLAVE_FIN 
	| LLAVE_INI LLAVE_FIN;
inicializadoresVariable:
	inicializadoresVariable	 COMA inicializadorVariable
      | inicializadorVariable;

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
	SUPER PUNTO IDENTIFICADOR;

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

/*LLAVES FALTANTE*/
bloqueIncorrecto: 
      LLAVE_INI sentenciasBloque  {printf("error: se alcanzó el final del archivo durante el análisis \n");} 
      | LLAVE_INI  {printf("error: se alcanzó el final del archivo durante el análisis \n");};

/*PUNTO COMA FALTANTE*/

sentenciaDeclaracionVariableLocalIncorrecto: 
      declaracionVariableLocal  {printf("error: ';' esperado\n");};

sentenciaExpresionIncorrecto: 
	expresionDeclaracion   {printf("error: ';' esperado\n");};

sentenciaVaciaIncorrecto: 
	/*VACIO*/  	       {printf("error: ';' esperado\n");}; 
/*SENTENCIA SI-SINO INCORRECTAS*/

sentenciaSiLuegoIncorrecto: 
      SI  expresion PARENTESIS_FIN sentencia {printf("error: la sentencia si luego es incorrecta\n");} 
      | SI PARENTESIS_INI expresion  sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | SI  expresion  sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | SI sentencia {printf("error: la sentencia si luego es incorrecta\n");}

      | SI PARENTESIS_INI expresion PARENTESIS_FIN {printf("error: la sentencia si luego es incorrecta\n");} 
      | SI  expresion PARENTESIS_FIN   {printf("error: la sentencia si luego es incorrecta\n");}
      | SI PARENTESIS_INI expresion  {printf("error: la sentencia si luego es incorrecta\n");}  
      | SI  expresion  {printf("error: la sentencia si luego es incorrecta\n");}  
      | SI PARENTESIS_INI  PARENTESIS_FIN  {printf("error: la sentencia si luego es incorrecta\n");}
      | SI  {printf("error: la sentencia si luego es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | expresion PARENTESIS_FIN sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | PARENTESIS_INI expresion  sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | expresion  sentencia  {printf("error: la sentencia si luego es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentencia {printf("error: la sentencia si luego es incorrecta\n");} 

      | PARENTESIS_INI expresion PARENTESIS_FIN  {printf("error: la sentencia si luego es incorrecta\n");}
      | expresion PARENTESIS_FIN  {printf("error: la sentencia si luego es incorrecta\n");} 
      | PARENTESIS_INI expresion {printf("error: la sentencia si luego es incorrecta\n");}   
      | expresion {printf("error: la sentencia si luego es incorrecta\n");}   
      | PARENTESIS_INI  PARENTESIS_FIN {printf("error: la sentencia si luego es incorrecta\n");};

sentenciaSiLuegoSinoIncorrecto: 
   
      SI  expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      
      | SI PARENTESIS_INI expresion PARENTESIS_FIN SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN SINO sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI expresion SINO sentencia  {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}  
      | SI PARENTESIS_INI  PARENTESIS_FIN SINO sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion  sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN SINO sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI expresion SINO sentencia  {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}  
      | PARENTESIS_INI  PARENTESIS_FIN SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SINO sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}


      | SI  PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO{printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}


      | SI PARENTESIS_INI expresion PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI PARENTESIS_INI expresion SINO {printf("error: la sentencia si luego sino es incorrecta\n");}  
      | SI  expresion SINO  {printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI PARENTESIS_INI  PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion  sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");} 
      | PARENTESIS_INI expresion SINO   {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion SINO   {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino es incorrecta\n");}


      | SI  expresion PARENTESIS_FIN sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      
      | SI PARENTESIS_INI expresion PARENTESIS_FIN  sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN  sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}  
      | SI  expresion  sentencia {printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI PARENTESIS_INI  PARENTESIS_FIN  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");} 
      | SI sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion  sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}

          
      | PARENTESIS_INI expresion PARENTESIS_FIN  sentencia{printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion PARENTESIS_FIN  sentencia {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI expresion  sentencia  {printf("error: la sentencia si luego sino es incorrecta\n");}
      | expresion  sentencia  {printf("error: la sentencia si luego sino es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN  sentencia {printf("error: la sentencia si luego sino es incorrecta\n");};

sentenciaSiLuegoSinoNoCortoIncorrecto:

      SI  expresion PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      
      | SI PARENTESIS_INI expresion PARENTESIS_FIN SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | SI  expresion SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | SI PARENTESIS_INI  PARENTESIS_FIN SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion  sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI expresion SINO sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | expresion SINO sentenciaNoCorto   {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SINO sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}


      | SI  PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | SI  expresion PARENTESIS_FIN sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}


      | SI PARENTESIS_INI expresion PARENTESIS_FIN SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion PARENTESIS_FIN SINO   {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}  
      | SI  expresion SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}  
      | SI PARENTESIS_INI  PARENTESIS_FIN SINO {printf("error: la sentencia si luego sino no corta es incorrecta\n");}  
      | SI SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto SINO {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | PARENTESIS_INI expresion  sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion  sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | PARENTESIS_INI expresion SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}  
      | expresion SINO {printf("error: la sentencia si luego sino no corta es incorrecta\n");}   
      | PARENTESIS_INI  PARENTESIS_FIN SINO  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}


      | SI  expresion PARENTESIS_FIN sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      
      | SI PARENTESIS_INI expresion PARENTESIS_FIN  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | SI  expresion PARENTESIS_FIN  sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI PARENTESIS_INI expresion  sentenciaNoCorto   {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI  expresion  sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");} 
      | SI PARENTESIS_INI  PARENTESIS_FIN  sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | SI sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion  sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}

          
      | PARENTESIS_INI expresion PARENTESIS_FIN  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion PARENTESIS_FIN  sentenciaNoCorto  {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto   {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | expresion  sentenciaNoCorto   {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN  sentenciaNoCorto {printf("error: la sentencia si luego sino no corta es incorrecta\n");};
      
      

/*SENTENCIA MIENTRAS INCORRECTAS*/

sentenciaMientrasIncorrecto:
	MIENTRAS PARENTESIS_INI expresion sentencia {printf("error : la sentencia mientras es incorrecta\n");}
      | MIENTRAS expresion PARENTESIS_FIN sentencia {printf("error : la sentencia mientras es incorrecta\n");}
      | MIENTRAS expresion sentencia {printf("error : la sentencia mientras es incorrecta\n");} 
      | MIENTRAS PARENTESIS_INI PARENTESIS_FIN sentencia {printf("error : la sentencia mientras es incorrecta\n");}
      | MIENTRAS sentencia {printf("error : la sentencia mientras es incorrecta\n");} 

      | MIENTRAS PARENTESIS_INI expresion PARENTESIS_FIN {printf("error : la sentencia mientras es incorrecta\n");} 
      | MIENTRAS  expresion PARENTESIS_FIN {printf("error : la sentencia mientras es incorrecta\n");}  
      | MIENTRAS PARENTESIS_INI expresion {printf("error : la sentencia mientras es incorrecta\n");}   
      | MIENTRAS  expresion {printf("error : la sentencia mientras es incorrecta\n");}   
      | MIENTRAS PARENTESIS_INI  PARENTESIS_FIN {printf("error : la sentencia mientras es incorrecta\n");} 
      | MIENTRAS {printf("error : la sentencia mientras es incorrecta\n");} 
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentencia {printf("error : la sentencia mientras es incorrecta\n");} 
      | expresion PARENTESIS_FIN sentencia {printf("error : la sentencia mientras es incorrecta\n");} 
      | PARENTESIS_INI expresion  sentencia {printf("error : la sentencia mientras es incorrecta\n");} 
      | expresion  sentencia {printf("error : la sentencia mientras es incorrecta\n");} 
      | PARENTESIS_INI  PARENTESIS_FIN sentencia {printf("error : la sentencia mientras es incorrecta\n");} 

      | PARENTESIS_INI expresion PARENTESIS_FIN {printf("error : la sentencia mientras es incorrecta\n");} 
      | expresion PARENTESIS_FIN {printf("error : la sentencia mientras es incorrecta\n");}  
      | PARENTESIS_INI expresion {printf("error : la sentencia mientras es incorrecta\n");}   
      | expresion {printf("error : la sentencia mientras es incorrecta\n");}   
      | PARENTESIS_INI  PARENTESIS_FIN {printf("error 21: la sentencia mientras es incorrecta\n");};

sentenciaMientrasNoCortoIncorrecto:
      MIENTRAS PARENTESIS_INI expresion sentenciaNoCorto  {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | MIENTRAS expresion PARENTESIS_FIN sentenciaNoCorto  {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | MIENTRAS expresion sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | MIENTRAS PARENTESIS_INI PARENTESIS_FIN sentenciaNoCorto  {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | MIENTRAS sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}

      | MIENTRAS PARENTESIS_INI expresion PARENTESIS_FIN   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | MIENTRAS  expresion PARENTESIS_FIN   {printf("error: la sentencia mientras no corto es incorrecta\n");} 
      | MIENTRAS PARENTESIS_INI expresion   {printf("error: la sentencia mientras no corto es incorrecta\n");}  
      | MIENTRAS  expresion   {printf("error: la sentencia mientras no corto es incorrecta\n");}  
      | MIENTRAS PARENTESIS_INI  PARENTESIS_FIN  {printf("error: la sentencia mientras no corto es incorrecta\n");} 
      | MIENTRAS   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      
      | PARENTESIS_INI expresion PARENTESIS_FIN sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | expresion PARENTESIS_FIN sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | PARENTESIS_INI expresion  sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | expresion  sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | PARENTESIS_INI  PARENTESIS_FIN sentenciaNoCorto   {printf("error: la sentencia mientras no corto es incorrecta\n");}

      | PARENTESIS_INI expresion PARENTESIS_FIN   {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | expresion PARENTESIS_FIN    {printf("error: la sentencia mientras no corto es incorrecta\n");}
      | PARENTESIS_INI expresion   {printf("error: la sentencia mientras no corto es incorrecta\n");}  
      | expresion    {printf("error: la sentencia mientras no corto es incorrecta\n");}   
      | PARENTESIS_INI  PARENTESIS_FIN  {printf("error: la sentencia mientras no corto es incorrecta\n");};

/*SENTENCIA DE ARREGLOS INCORRECTAS*/

/*INICIALIZADOR ARREGLOS*/

inicializadorArregloIncorrecto:

      inicializadoresVariable COMA LLAVE_FIN {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | LLAVE_INI inicializadoresVariable COMA  {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | inicializadoresVariable COMA  {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}

      | inicializadoresVariable LLAVE_FIN {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | LLAVE_INI inicializadoresVariable  {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | inicializadoresVariable {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}

      | COMA LLAVE_FIN {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | LLAVE_INI COMA {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      | COMA  {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      
      |LLAVE_INI {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      |LLAVE_FIN {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
      |/*VACIO*/ {printf("error: la sentencia inicializador de arreglo es incorrecta\n");};

/*EXPRESIONES CREACION ARREGLO*/

expresionCreacionArregloIncorrecto:

      NUEVO expresionesDimension dimensiones {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | NUEVO expresionesDimension {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | NUEVO dimensiones  {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | NUEVO tipoPrimitivo  dimensiones  {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | NUEVO tipoPrimitivo {printf("error: la sentencia creacion de arreglo es incorrecta\n");} 
      | NUEVO {printf("error: la sentencia creacion de arreglo es incorrecta\n");}

      | tipoPrimitivo expresionesDimension dimensiones {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | tipoPrimitivo expresionesDimension {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | tipoPrimitivo  dimensiones {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | tipoPrimitivo {printf("error: la sentencia creacion de arreglo es incorrecta\n");}

      | expresionesDimension dimensiones {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | expresionesDimension {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      | dimensiones {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
      |/*VACIO*/ {printf("error: la sentencia creacion de arreglo es incorrecta\n");};

/**/
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
