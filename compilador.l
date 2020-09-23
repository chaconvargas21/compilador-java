

/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include <string.h>

int numLineas = 1;
int numCaracteres = 1;
%}

flotanteEmpiezaCero 0{digito}+\.{digito}{1,7}f|[-]0{digito}+\.{digito}{1,7}f 
dobleEmpiezaCero 0{digito}+\.{digito}{1,15}d|[-]0{digito}+\.{digito}{1,15}d|0{digito}+\.{digito}{1,15}|[-]0{digito}+\.{digito}{1,15}
/*doble {entero}{parte_exponente}|{digito}*\.{digito}*{parte_exponente}|\.{digito}*{parte_exponente}*/

/*numeros que comienzan en 0, excepto el 0*/
enteroEmpiezaCero ^0{entero}

digito_no_zero [1-9]
digito 0|{digito_no_zero}
entero 0|{digito_no_zero}{digito}*

/*numero con varios puntos o fallas en la coma*/
errorNumeroFlotanteConComa [-]*{digito}+\,{digito}{1,7}
errorNumeroDobleConComa [-]*{digito}+\,{digito}{1,15}

/*mas de una coma o punto*/
errorMasDeUnPuntoOComa [-]*{digito}+[\.|\,]{digito}*[\.|\,]
/*errorDobleMasDeUnPuntoOComa [-]*{digito}+[\.|\,]{digito}*[\.|\,]*/

/*identificar identificador no valido *|[@|&|#]*[{identificador}|"@"|"&"|"#"]+   |[\@|\&|\#]*[{identificador}|\@|\&|\#]+*/
errorIdentificador [0-9][a-zA-Z_@#]|[@#][a-zA-Z_@#0-9]|[a-zA-Z_]+[@#]

/*errorEscritura*/
errorPalabraReservada ^["mientras"|"para"|"si"|"sino"|"caso"|"main"][ ]*[\(|\{|\:]

booleano "verdadero"|"falso"	

caracter \'.\'

cadena \".*\"

nulo "nulo"

palabra_clave  "abstracto"|"afirmar"|"interrupcion"|"caso"|"captura"|"clase"|"constante"|"continuar"|"defecto"|"hacer"|"sino"|"enumeracion"|"exportar"|"extender"|"final"|"finalmente"|"para"|"ir"|"si"|"implementar"|"importar"|"envezde"|"interface"|"largo"|"modulo"|"nativo"|"nuevo"|"paquete"|"privado"|"protegido"|"publico"|"requerir"|"retornar"|"estatico"|"strictfp"|"super"|"interruptor"|"sincronizado"|"esto"|"lanzar"|"lanzarvarios"|"transitorio"|"intentar"|"variable"|"vacio"|"volatil"|"mientras"		

funcion_primitiva "absoluto"|"arcoseno"|"arcotangente"|"arcocoseno"|"tangente"|"tanghiperb"|"cbrt"|"ceil"|"raizcuadrada"|"cosenohiperb"|"senohiperb"|"exp"|"random"|"floor"|"maximo"|"minimo"|"redondear"|"seno"|"coseno"|"append"|"cerrar"|"flush"|"imprimir"|"imprimirformato"|"imprimirlinea"|"escribir"|"E"|"PI"|"error"|"entrada"|"salida"

tipo_dato "doble"|"flotante"|"entero"|"booleano"|"Cadena"|"corto"|"largo"|"byte"|"caracter"

identificador [a-zA-Z\_][a-zA-Z0-9\_]*

indicador_exponente e|E	
parte_exponente {indicador_exponente}(\+|\-){digito}*

/*termina en f es float*/
numeroFlotante [-]*{digito}+\.{digito}{1,7}
/*termina en d o termina en numero es doble*/
numeroDoble [-]*{digito}+\.{digito}{1,15}

error_declaracion {tipo_dato}[ ]+{identificador}[ ]+{identificador}

saltoLinea \n



%s FUNCION

/*estructuraClaseMetodo [{tipo_dato}|"vacio"|"clase"][ ]*{identificador}[ ]*\(
metodo {palabra_clave}[ ]*\(

errorEstructura {identificador}[ ]*\(
*/

/*
WHILE "mientras"
errorNombreVariableSeparado [^{WHILE}]
*/

/* Sección REGLAS 

{entero}	 { printf("entero : %s\n",yytext); }
{numeroFlotante}	 { printf("numero flotante : %s\n",yytext); }
{numeroDoble}	 { printf("numero doble : %s\n",yytext); }
{caracter}	 { printf("caracter : %s\n",yytext); }
{cadena}  	 { printf("cadena : %s\n",yytext); }
{booleano} 	 { printf("booleano : %s\n",yytext); }
{nulo}		 { printf("nulo : %s\n",yytext); }

{tipo_dato}  { printf("tipo de dato : %s\n",yytext); }
{palabra_clave}  { printf("palabra clave : %s\n",yytext); }

"+" { printf("SUMA : %s\n",yytext); }
"-" { printf("Resta : %s\n",yytext); }
"*" { printf("SignoMultiplicacion : %s\n",yytext); }
"/" { printf("SignoDivision : %s\n",yytext); }
"%" { printf("SignoModulo : %s\n",yytext); }

"++" { printf("Incremento : %s\n",yytext); }
"--" { printf("Decremento : %s\n",yytext); }

"==" { printf("IGUALDAD : %s\n",yytext); }
"!=" { printf("Diferencia : %s\n",yytext); }
">"  { printf("Mayor : %s\n",yytext); }
"<"  { printf("Menor : %s\n",yytext); }
">=" { printf("Mayor_igual : %s\n",yytext); }
"<=" { printf("Menor_igual : %s\n",yytext); }

"&&" { printf("Y_Logico : %s\n",yytext); }
"||" { printf("O_Logico : %s\n",yytext); }
"!"  { printf("Negacion_logica : %s\n",yytext); }

"&"   { printf("BIN_AND: %s\n",yytext); } 
"|"   { printf("BIN_OR : %s\n",yytext); } 
"^"   { printf("BIN_XOR : %s\n",yytext); } 
"~"   { printf("BIN_COMPLEMENTO : %s\n",yytext); } 
"<<"  { printf("BIN_DESPLAZAMIENTO_IZQ : %s\n",yytext); } 
">>"  { printf("BIN_DESPLAZAMIENTO_DER : %s\n",yytext); } 
">>>" { printf("DESPLAZAMIENTO_DER_LLENADO_CERO: %s\n",yytext); } 

"=" { printf("ASIGNACION : %s\n",yytext); } 
"+=" { printf("ASIG_INCREMENTA : %s\n",yytext); } 
"-=" { printf("ASIG_DECREMENTA: %s\n",yytext); } 
"*=" { printf("ASIG_MULPTIPLICA: %s\n",yytext); } 
"/=" { printf("ASIG_DIVIDE : %s\n",yytext); } 
"%=" { printf("ASIG_MODULO : %s\n",yytext); } 
"<<=" { printf(" ASIG_BIN_DESPLAZAMIENTO_IZQ : %s\n",yytext); } 
">>=" { printf("ASIG_BIN_DESPLAZAMIENTO_DER : %s\n",yytext); }
">>>=" { printf("ASIG_BIN_DESPLAZAMIENTO_DER : %s\n",yytext); } 
"&=" { printf("ASIG_BIN_DESPLAZAMIENTO_DER : %s\n",yytext); } 
"^=" { printf("ASIG_BIN_XOR : %s\n",yytext); } 
"|=" { printf("ASIG_BIN_OR : %s\n",yytext); } 

"?:" { printf("OP_CONDICIONAL : %s\n",yytext); }

"instanceof" { printf("EN_VEZ_DE : %s\n",yytext); } 

";" { printf("PUNTO_COMA : %s\n",yytext); } 
"." { printf("PUNTO : %s\n",yytext); }
"," { printf("COMA : %s\n",yytext); }
"(" { printf("PARENT_INI : %s\n",yytext); }
")" { printf("PARENT_FIN : %s\n",yytext); }
"{" { printf("LLAVE_INI : %s\n",yytext); }
"}" { printf("LLAVE_FIN : %s\n",yytext); }
"[" { printf("CORCH_INI : %s\n",yytext); }
"]" { printf("CORCH_FIN : %s\n",yytext); }

{funcion_primitiva}	 { printf("FUNCION_PRIMITIVA : %s\n",yytext); }

{identificador}	 { printf("IDENTIFICADOR : %s\n",yytext); }

{errorNombreVariableSeparado} { printf("------------------------ Error, variable escrita con espacios en blanco : %s\n",yytext); }

{estructuraClaseMetodo} { printf("------------------------ estructura metodo o clase : %s\n",yytext); }




{errorDobleMasDeUnPuntoOComa} { printf("Error en la linea %i, columna %i, doble mas de una coma o punto : %s\n", numLineas,numCaracteres,yytext); }




{identificador}\( {BEGIN FUNCION;}
<FUNCION>[ \t\n]* 	
<FUNCION>{}[ \t\n]*{identificador}?[ \t\n]*(\,[ \t\n]*{tipo_dato}[ \t\n]*{identificador}?[ \t\n]*)*
<FUNCION>\)		{BEGIN 0;}

{errorEstructura}	 { printf("Error en la linea %i, columna %i, mal escrita : %s\n", numLineas, numCaracteres, yytext); }

{metodo}	 { printf("Error en la linea %i, columna %i, metodo : %s\n", numLineas, numCaracteres, yytext); }
*/ 

%%

{error_declaracion} { printf("Error en la linea %i, columna %i, declaracion de varible incorrecta: %s\n", numLineas, numCaracteres, yytext); }

{enteroEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero  entero empieza con 0 y no es 0: %s\n", numLineas, numCaracteres, yytext); }

{errorNumeroFlotanteConComa}	 { printf("Error en la linea %i, columna %i, flotante con coma : %s\n", numLineas,numCaracteres,yytext); }

{errorNumeroDobleConComa}	 { printf("Error en la linea %i, columna %i, doble con coma : %s\n", numLineas,numCaracteres,yytext); }

{errorMasDeUnPuntoOComa} { printf("Error en la linea %i, columna %i, numero com mas de una coma o punto : %s\n", numLineas, numCaracteres,yytext); }

{flotanteEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero flotante empieza con 0 y no es 0. : %s\n", numLineas,numCaracteres,yytext); }

{dobleEmpiezaCero}	 { printf("Error en la linea %i, columna %i, numero doble empieza con 0 y no es 0. : %s\n", numLineas,numCaracteres,yytext); }

{errorPalabraReservada}	 { printf("Error en la linea %i, columna %i, palabra reservada mal escrita : %s\n", numLineas,numCaracteres,yytext); }

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

