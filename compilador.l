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
punto_flotante {digito}+{parte_exponente}|{digito}+\.{digito}*{parte_exponente}?|\.{digito}+{parte_exponente}?

booleano "verdadero"|"falso"	

caracter \'.\'

cadena \".*\"

nulo "nulo"

palabra_clave  "abstracto"|"afirmar"|"booleano"|"interrupcion"|"byte"|"caso"|"captura"|"caracter"|"clase"|"constante"|"continuar"|"defecto"|"hacer"|"doble"|"sino"|"enumeracion"|"exportar"|"extender"|"final"|"finalmente"|"flotante"|"para"|"ir"|"si"|"implementar"|"importar"|"envezde"|"entero"|"interface"|"largo"|"modulo"|"nativo"|"nuevo"|"paquete"|"privado"|"protegido"|"publico"|"requerir"|"retornar"|"corto"|"estatico"|"strictfp"|"super"|"interruptor"|"sincronizado"|"esto"|"lanzar"|"lanza"|"transitorio"|"intentar"|"variable"|"vacio"|"volatil"|"mientras"		

funcion_primitiva "absoluto"|"arcoseno"|"arcotangente"|"arcocoseno"|"tangente"|"tanghiperb"|"cbrt"|"ceil"|"raizcuadrada"|"cosenohiperb"|"senohiperb"|"exp"|"random"|"floor"|"maximo"|"minimo"|"redondear"|"seno"|"coseno"|"append"|"cerrar"|"flush"|"imprimir"|"imprimirformato"|"imprimirlinea"|"escribir"|"E"|"PI"|"error"|"entrada"|"salida"

/*termina en f es float*/
numeroFlotante [-]*{digito}+\.{digito}{1,7}f
/*termina en d o termina en numero es doble*/
numeroDoble [-]*{digito}+\.{digito}{1,15}d|[-]*{digito}+\.{digito}{1,15}

flotanteEmpiezaCero 0{digito}+\.{digito}{1,7}f|[-]0{digito}+\.{digito}{1,7}f 
dobleEmpiezaCero 0{digito}+\.{digito}{1,15}d|[-]0{digito}+\.{digito}{1,15}d|0{digito}+\.{digito}{1,15}|[-]0{digito}+\.{digito}{1,15}
/*doble {entero}{parte_exponente}|{digito}*\.{digito}*{parte_exponente}|\.{digito}*{parte_exponente}*/

/*numeros que comienzan en 0, excepto el 0*/
enteroEmpiezaCero 0{digito}+

/*numero con varios puntos o fallas en la coma*/
errorNumeroFlotanteConComa [-]*{digito}+\,{digito}{1,7}f
errorNumeroDobleConComa [-]*{digito}+\,{digito}{1,15}d|[-]*{digito}+\,{digito}{1,15}

/*mas de una coma o punto*/
errorFlotanteMasDeUnPuntoOComa [-]*{digito}+[\.|\,]{digito}*[\.|\,]f
errorDobleMasDeUnPuntoOComa [-]*{digito}+[\.|\,]{digito}*[\.|\,]d|[-]*{digito}+[\.|\,]{digito}*[\.|\,]

/*identificar identificador no valido *|[@|&|#]*[{identificador}|"@"|"&"|"#"]+   |[\@|\&|\#]*[{identificador}|\@|\&|\#]+*/
errorIdentificador [0-9@#][a-zA-Z\_@#][a-zA-Z0-9\_@#]*

/*errorEscritura*/
errorPalabraReservada ^["mientras"|"para"|"si"|"sino"|"caso"|"main"][ ]*[\(|\{|\:]
/* Sección REGLAS */ 
%%
{entero}	 {return ENTERO_LITERAL;}
{punto_flotante} 	 {return FLOTANTE_LITERAL;}
{caracter}	 {return CARACTER_LITERAL;}
{cadena}  	 {return CADENA_LITERAL;}
{booleano} 	 {return BOOLEANO_LITERAL;}
{nulo}		 {return NULO_LITERAL;}

{palabra_clave}  {return PALABRA_CLAVE;}

"+" {return OP_SUMA;}	
"-" {return OP_RESTA;}	
"*" {return OP_MULTIPLICACION;}	
"/" {return OP_DIVISION;}	
"%" {return OP_MODULO;}	

"++" {return OP_INCREMENTO;}
"--" {return OP_DECREMENTO;}

"==" {return OP_IGUAL;}
"!=" {return OP_DIFERENTE;}
">"  {return OP_MAYOR;}
"<"  {return OP_MENOR;}
">=" {return OP_MAYOR_IGUAL;}
"<=" {return OP_MENOR_IGUAL;}

"&&" {return OP_LOG_AND;}
"||" {return OP_LOG_OR;}
"!"  {return OP_LOG_NOT;}

"&"   {return OP_BIN_AND;} 
"|"   {return OP_BIN_OR;}
"^"   {return OP_BIN_XOR;}
"~"   {return OP_BIN_COMPLEMENTO;}
"<<"  {return OP_BIN_DESPLAZAMIENTO_IZQ;}
">>"  {return OP_BIN_DESPLAZAMIENTO_DER;}
">>>" {return OP_DESPLAZAMIENTO_DER_LLENADO_CERO;}

"=" {return OP_ASIGNACION;}
"+=" {return OP_ASIG_SUMA;}
"-=" {return OP_ASIG_RESTA;}
"*=" {return OP_ASIG_MULTIPLICACION;}
"/=" {return OP_ASIG_DIVISION;}
"%=" {return OP_ASIG_MODULO;}
"<<=" {return OP_ASIG_BIN_DESPLAZAMIENTO_IZQ;}
">>=" {return OP_ASIG_BIN_DESPLAZAMIENTO_DER;}
">>>=" {return OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO;}
"&=" {return OP_ASIG_BIN_AND;}
"^=" {return OP_ASIG_BIN_XOR;}
"|=" {return OP_ASIG_BIN_OR;}

"?" {return OP_INTERROGACION;}
":" {return OP_DOS_PUNTOS;}
"instanceof" {return OP_EN_VEZ_DE;}

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


{enteroEmpiezaCero}	 { printf("Error, numero entero empieza con 0 y no es 0: %s\n",yytext); }

{errorNumeroFlotanteConComa}	 { printf("Error, flotante con coma : %s\n",yytext); }

{errorNumeroDobleConComa}	 { printf(" Error, doble con coma : %s\n",yytext); }

{errorFlotanteMasDeUnPuntoOComa} { printf("Error, flotante mas de una coma o punto : %s\n",yytext); }

{errorDobleMasDeUnPuntoOComa} { printf("Error, doble mas de una coma o punto : %s\n",yytext); }

{flotanteEmpiezaCero}	 { printf("Error, numero flotante empieza con 0 y no es 0. : %s\n",yytext); }

{dobleEmpiezaCero}	 { printf("Error, numero doble empieza con 0 y no es 0. : %s\n",yytext); }

{errorPalabraReservada}	 { printf("Error, palabra reservada mal escrita : %s\n",yytext); }

{errorIdentificador}	 { printf("Error, la escritura numero o variable no es valido : %s\n",yytext); }

%%

