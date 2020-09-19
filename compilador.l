/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include <string.h>
#include "compilador.tab.h"
%}

identificador [a-zA-Z\_][a-zA-Z0-9\_]*

digito_no_zero [1-9]
digito 0|{digito_no_zero}
entero 0|{digito_no_zero}{digito}*

indicador_exponente e|E	
parte_exponente {indicador_exponente}(\+|\-){digito}+
doble {digito}*{parte_exponente}|{digito}*\.{digito}*{parte_exponente}|\.{digito}*{parte_exponente}

booleano "verdadero"|"falso"	

caracter \'.\'

cadena \".*\"

nulo "nulo"

palabra_clave  "abstracto"|"afirmar"|"booleano"|"interrupcion"|"byte"|"caso"|"captura"|"caracter"|"clase"|"constante"|"continuar"|"defecto"|"hacer"|"doble"|"sino"|"enumeracion"|"exportar"|"extender"|"final"|"finalmente"|"flotante"|"para"|"ir"|"si"|"implementar"|"importar"|"envezde"|"entero"|"interface"|"largo"|"modulo"|"nativo"|"nuevo"|"paquete"|"privado"|"protegido"|"publico"|"requerir"|"retornar"|"corto"|"estatico"|"strictfp"|"super"|"interruptor"|"sincronizado"|"esto"|"lanzar"|"lanzarvarios"|"transitorio"|"intentar"|"variable"|"vacio"|"volatil"|"mientras"		

funcion_primitiva "absoluto"|"arcoseno"|"arcotangente"|"arcocoseno"|"tangente"|"tanghiperb"|"cbrt"|"ceil"|"raizcuadrada"|"cosenohiperb"|"senohiperb"|"exp"|"random"|"floor"|"maximo"|"minimo"|"redondear"|"seno"|"coseno"|"append"|"cerrar"|"flush"|"imprimir"|"imprimirformato"|"imprimirlinea"|"escribir"|"E"|"PI"|"error"|"entrada"|"salida"


/* Sección REGLAS */ 
%%
{entero}	 {return ENTERO;}
{doble} 	 {return DOBLE;}
{caracter}	 {return CARACTER;}
{cadena}  	 {return CADENA;}
{booleano} 	 {return BOOLEANO;}
{nulo}		 {return NULO;}

{palabra_clave}  {return PALABRA_CLAVE;}

"+" {return ADICION;}	
"-" {return SUSTRACCION;}	
"*" {return MULTIPLICACION;}	
"/" {return DIVISION;}	
"%" {return MODULO;}	

"++" {return INCREMENTA;}
"--" {return DECREMENTA;}

"==" {return IGUAL;}
"!=" {return DIFERENTE;}
">"  {return MAYOR;}
"<"  {return MENOR;}
">=" {return MAYOR_IGUAL;}
"<=" {return MENOR_IGUAL;}

"&&" {return LOG_AND;}
"||" {return LOG_OR;}
"!"  {return LOG_NOT;}

"&"   {return BIN_AND;} 
"|"   {return BIN_OR;}
"^"   {return BIN_XOR;}
"~"   {return BIN_COMPLEMENTO;}
"<<"  {return BIN_DESPLAZAMIENTO_IZQ;}
">>"  {return BIN_DESPLAZAMIENTO_DER;}
">>>" {return DESPLAZAMIENTO_DER_LLENADO_CERO;}

"=" {return ASIGNACION;}
"+=" {return ASIG_INCREMENTA;}
"-=" {return ASIG_DECREMENTA;}
"*=" {return ASIG_MULPTIPLICA;}
"/=" {return ASIG_DIVIDE;}
"%=" {return ASIG_MODULO;}
"<<=" {return ASIG_BIN_DESPLAZAMIENTO_IZQ;}
">>=" {return ASIG_BIN_DESPLAZAMIENTO_DER;}
">>>=" {return ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO;}
"&=" {return ASIG_BIN_AND;}
"^=" {return ASIG_BIN_XOR;}
"|=" {return ASIG_BIN_OR;}

"?" {return INTERROGACION;}
":" {return DOS_PUNTOS;}
"instanceof" {return EN_VEZ_DE;}

";" {return PUNTO_COMA;}
"," {return COMA;}
"." {return PUNTO;}
"(" {return PARENTESIS_INI;}
")" {return PARENTESIS_FIN;}
"{" {return LLAVE_INI;}
"}" {return LLAVE_FIN;}
"[" {return CORCHETE_INI;}
"]" {return CORCHETE_FIN;}


{funcion_primitiva}	 {return FUNC_PRIMITIVA;}

{identificador}	 {return IDENTIFICADOR;}
%%

