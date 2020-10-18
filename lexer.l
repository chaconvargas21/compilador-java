/* Sección DEFINICIONES */
%{
#include <stdio.h>
#include "parser.tab.h" //para que lexer.l y parser.y usen las mismas constantes

#define BUSCAR 0
int estado;
int agregar_palabra(int tipo, char *palabra);
int buscar_palabra(char *palabra);
int numLineas = 1;
%}
identificador [a-zA-Z\_][a-zA-Z0-9\_]*

digito_no_zero [1-9]
digito 0|{digito_no_zero}
entero 0|{digito_no_zero}*{digito}*
numeroFlotante -?{digito}+\.{digito}{1,7}
numeroDoble -?{digito}+\.{digito}{1,15}

booleano "verdadero"|"falso"	
caracter \'.\'
cadena \".*\"
nulo "nulo"
palabra_clave  "abstracto"|"afirmar"|"booleano"|"interrupcion"|"byte"|"caso"|"captura"|"caracter"|"clase"|"constante"|"continuar"|"defecto"|"hacer"|"doble"|"sino"|"enumeracion"|"exportar"|"extiende"|"final"|"finalmente"|"flotante"|"para"|"ir"|"si"|"implementar"|"importar"|"envezde"|"entero"|"interfaz"|"largo"|"modulo"|"nativo"|"nuevo"|"paquete"|"privado"|"protegido"|"publico"|"requerir"|"retornar"|"corto"|"estatico"|"strictfp"|"super"|"interruptor"|"sincronizado"|"esto"|"lanzar"|"lanza"|"transitorio"|"intentar"|"variable"|"vacio"|"volatil"|"mientras"		
funcion_primitiva "absoluto"|"arcoseno"|"arcotangente"|"arcocoseno"|"tangente"|"tanghiperb"|"cbrt"|"ceil"|"raizcuadrada"|"cosenohiperb"|"senohiperb"|"exp"|"random"|"floor"|"maximo"|"minimo"|"redondear"|"seno"|"coseno"|"append"|"cerrar"|"flush"|"imprimir"|"imprimirformato"|"imprimirlinea"|"escribir"|"E"|"PI"|"error"|"entrada"|"salida"

flotanteEmpiezaCero -?0{digito}+\.{digito}{1,7}
dobleEmpiezaCero -?0{digito}+\.{digito}{1,15}
enteroEmpiezaCero ^0{entero}
errorNumeroFlotanteConComa -?{digito}+\,{digito}{1,7}
errorNumeroDobleConComa -?{digito}+\,{digito}{1,15}
errorMasDeUnPuntoOComa -?{digito}+[\.|\,]{digito}*[\.|\,]
errorIdentificador [0-9][a-zA-Z_@#]|[@#][a-zA-Z_@#0-9]|[a-zA-Z_]+[@#]
error_declaracion {tipo_dato}[ ]+{variable_valida}[ ]+{variable_valida}
tipo_dato "doble"|"flotante"|"entero"|"booleano"|"Cadena"|"corto"|"largo"|"byte"|"caracter"
variable_valida [a-zA-Z\_][a-zA-Z0-9]*

%%
{entero}	     {estado = ENTERO_LITERAL;	    agregar_palabra(estado, yytext);    return ENTERO_LITERAL;}
{numeroFlotante} {estado = FLOTANTE_LITERAL;	agregar_palabra(estado, yytext);    return FLOTANTE_LITERAL;}
{numeroDoble}    {estado = DOBLE_LITERAL;	    agregar_palabra(estado, yytext);    return DOBLE_LITERAL;}
{caracter}	     {estado = CARACTER_LITERAL;	agregar_palabra(estado, yytext);    return CARACTER_LITERAL;}
{cadena}  	     {estado = CADENA_LITERAL;	    agregar_palabra(estado, yytext);    return CADENA_LITERAL;}
{booleano} 	     {estado = BOOLEANO_LITERAL;	agregar_palabra(estado, yytext);    return BOOLEANO_LITERAL;}
{nulo}		     {estado = NULO_LITERAL;	    agregar_palabra(estado, yytext);    return NULO_LITERAL;}

"abstracto"    {estado = ABSTRACTO;	    agregar_palabra(estado, yytext);    return ABSTRACTO;}
"afirmar"      {estado = AFIRMAR;	    agregar_palabra(estado, yytext);    return AFIRMAR;}
"booleano"     {estado = BOOLEANO;	    agregar_palabra(estado, yytext);    return BOOLEANO;}
"interrupcion" {estado = INTERRUPCION;	agregar_palabra(estado, yytext);    return INTERRUPCION;}
"byte"         {estado = BYTE;	        agregar_palabra(estado, yytext);    return BYTE;}
"caso"         {estado = CASO;	        agregar_palabra(estado, yytext);    return CASO;}
"captura"      {estado = CAPTURA;	    agregar_palabra(estado, yytext);    return CAPTURA;}
"caracter"     {estado = CARACTER;	    agregar_palabra(estado, yytext);    return CARACTER;}
"clase"        {estado = CLASE;	        agregar_palabra(estado, yytext);    return CLASE;}
"constante"    {estado = CONSTANTE;	    agregar_palabra(estado, yytext);    return CONSTANTE;}
"continuar"    {estado = CONTINUAR;	    agregar_palabra(estado, yytext);    return CONTINUAR;}
"defecto"      {estado = DEFECTO;	    agregar_palabra(estado, yytext);    return DEFECTO;}
"hacer"        {estado = HACER;	        agregar_palabra(estado, yytext);    return HACER;}
"doble"        {estado = DOBLE;	        agregar_palabra(estado, yytext);    return DOBLE;}
"sino"         {estado = SINO;	        agregar_palabra(estado, yytext);    return SINO;}
"enumeracion"  {estado = ENUMERACION;	agregar_palabra(estado, yytext);    return ENUMERACION;}
"exportar"     {estado = EXPORTAR;	    agregar_palabra(estado, yytext);    return EXPORTAR;}
"extiende"     {estado = EXTIENDE;	    agregar_palabra(estado, yytext);    return EXTIENDE;}
"final"        {estado = FINAL;	        agregar_palabra(estado, yytext);    return FINAL;}
"finalmente"   {estado = FINALMENTE;	agregar_palabra(estado, yytext);    return FINALMENTE;}
"flotante"     {estado = FLOTANTE;	    agregar_palabra(estado, yytext);    return FLOTANTE;}
"para"         {estado = PARA;	        agregar_palabra(estado, yytext);    return PARA;}
"ir"           {estado = IR;	        agregar_palabra(estado, yytext);    return IR;}
"si"           {estado = SI;	        agregar_palabra(estado, yytext);    return SI;}
"implementar"  {estado = IMPLEMENTAR;	agregar_palabra(estado, yytext);    return IMPLEMENTAR;}
"importar"     {estado = IMPORTAR;	    agregar_palabra(estado, yytext);    return IMPORTAR;}
"entero"       {estado = ENTERO;	    agregar_palabra(estado, yytext);    return ENTERO;}
"interfaz"     {estado = INTERFAZ;	    agregar_palabra(estado, yytext);    return INTERFAZ;}
"largo"        {estado = LARGO;	        agregar_palabra(estado, yytext);    return LARGO;}
"modulo"       {estado = MODULO;	    agregar_palabra(estado, yytext);    return MODULO;}
"nativo"       {estado = NATIVO;	    agregar_palabra(estado, yytext);    return NATIVO;}
"nuevo"        {estado = NUEVO;	        agregar_palabra(estado, yytext);    return NUEVO;}
"paquete"      {estado = PAQUETE;	    agregar_palabra(estado, yytext);    return PAQUETE;}
"privado"      {estado = PRIVADO;	    agregar_palabra(estado, yytext);    return PRIVADO;}
"protegido"    {estado = PROTEGIDO;	    agregar_palabra(estado, yytext);    return PROTEGIDO;}
"publico"      {estado = PUBLICO;	    agregar_palabra(estado, yytext);    return PUBLICO;}
"requerir"     {estado = REQUERIR;	    agregar_palabra(estado, yytext);    return REQUERIR;}
"retornar"     {estado = RETORNAR;	    agregar_palabra(estado, yytext);    return RETORNAR;}
"corto"        {estado = CORTO;	        agregar_palabra(estado, yytext);    return CORTO;}
"estatico"     {estado = ESTATICO;	    agregar_palabra(estado, yytext);    return ESTATICO;}
"strictfp"     {estado = STRICTFP;	    agregar_palabra(estado, yytext);    return STRICTFP;}
"super"        {estado = SUPER;     	agregar_palabra(estado, yytext);    return SUPER;}
"interruptor"  {estado = INTERRUPTOR;	agregar_palabra(estado, yytext);    return INTERRUPTOR;}
"sincronizado" {estado = SINCRONIZADO;	agregar_palabra(estado, yytext);    return SINCRONIZADO;}
"esto"         {estado = ESTO;	        agregar_palabra(estado, yytext);    return ESTO;}
"lanzar"       {estado = LANZAR;      	agregar_palabra(estado, yytext);    return LANZAR;}
"lanza"        {estado = LANZA;	        agregar_palabra(estado, yytext);    return LANZA;}
"transitorio"  {estado = TRANSITORIO;	agregar_palabra(estado, yytext);    return TRANSITORIO;}
"intentar"     {estado = INTENTAR;	    agregar_palabra(estado, yytext);    return INTENTAR;}
"variable"     {estado = VARIABLE;	    agregar_palabra(estado, yytext);    return VARIABLE;}
"vacio"        {estado = VACIO;	        agregar_palabra(estado, yytext);    return VACIO;}
"volatil"      {estado = VOLATIL;	    agregar_palabra(estado, yytext);    return VOLATIL;}
"mientras"     {estado = MIENTRAS;	    agregar_palabra(estado, yytext);    return MIENTRAS;}

"principal"    {estado = PRINCIPAL;	    agregar_palabra(estado, yytext);    return PRINCIPAL;}
"args"         {estado = ARGS;	        agregar_palabra(estado, yytext);    return ARGS;}

"+" {estado = OP_SUMA;	        agregar_palabra(estado, yytext);    return OP_SUMA;}	
"-" {estado = OP_RESTA;	        agregar_palabra(estado, yytext);    return OP_RESTA;}	
"*" {estado = OP_MULTIPLICACION;	agregar_palabra(estado, yytext);    return OP_MULTIPLICACION;}	
"/" {estado = OP_DIVISION;	    agregar_palabra(estado, yytext);    return OP_DIVISION;}	
"%" {estado = OP_MODULO;	    agregar_palabra(estado, yytext);    return OP_MODULO;}	

"++" {estado = OP_INCREMENTO;	agregar_palabra(estado, yytext);    return OP_INCREMENTO;}
"--" {estado = OP_DECREMENTO;	agregar_palabra(estado, yytext);    return OP_DECREMENTO;}

"==" {estado = OP_IGUAL;	    agregar_palabra(estado, yytext);    return OP_IGUAL;}
"!=" {estado = OP_DIFERENTE;	agregar_palabra(estado, yytext);    return OP_DIFERENTE;}
">"  {estado = OP_MAYOR;	    agregar_palabra(estado, yytext);    return OP_MAYOR;}
"<"  {estado = OP_MENOR;	    agregar_palabra(estado, yytext);    return OP_MENOR;}
">=" {estado = OP_MAYOR_IGUAL;	agregar_palabra(estado, yytext);    return OP_MAYOR_IGUAL;}
"<=" {estado = OP_MENOR_IGUAL;	agregar_palabra(estado, yytext);    return OP_MENOR_IGUAL;}

"&&" {estado = OP_LOG_AND;	agregar_palabra(estado, yytext);    return OP_LOG_AND;}
"||" {estado = OP_LOG_OR;	agregar_palabra(estado, yytext);    return OP_LOG_OR;}
"!"  {estado = OP_LOG_NOT;	agregar_palabra(estado, yytext);    return OP_LOG_NOT;}

"&"   {estado = OP_BIN_AND;	        agregar_palabra(estado, yytext);    return OP_BIN_AND;} 
"|"   {estado = OP_BIN_OR;	        agregar_palabra(estado, yytext);    return OP_BIN_OR;}
"^"   {estado = OP_BIN_XOR;	        agregar_palabra(estado, yytext);    return OP_BIN_XOR;}
"~"   {estado = OP_BIN_COMPLEMENTO;	agregar_palabra(estado, yytext);    return OP_BIN_COMPLEMENTO;}
"<<"  {estado = OP_BIN_DESPLAZAMIENTO_IZQ;	agregar_palabra(estado, yytext);    return OP_BIN_DESPLAZAMIENTO_IZQ;}
">>"  {estado = OP_BIN_DESPLAZAMIENTO_DER;	agregar_palabra(estado, yytext);    return OP_BIN_DESPLAZAMIENTO_DER;}
">>>" {estado = OP_DESPLAZAMIENTO_DER_LLENADO_CERO;	agregar_palabra(estado, yytext);    return OP_DESPLAZAMIENTO_DER_LLENADO_CERO;}

"="    {estado = OP_ASIGNACION;	    agregar_palabra(estado, yytext);    return OP_ASIGNACION;}
"+="   {estado = OP_ASIG_SUMA;	    agregar_palabra(estado, yytext);    return OP_ASIG_SUMA;}
"-="   {estado = OP_ASIG_RESTA;	    agregar_palabra(estado, yytext);    return OP_ASIG_RESTA;}
"*="   {estado = OP_ASIG_MULTIPLICACION;	agregar_palabra(estado, yytext);    return OP_ASIG_MULTIPLICACION;}
"/="   {estado = OP_ASIG_DIVISION;	agregar_palabra(estado, yytext);    return OP_ASIG_DIVISION;}
"%="   {estado = OP_ASIG_MODULO;	agregar_palabra(estado, yytext);    return OP_ASIG_MODULO;}
"<<="  {estado = OP_ASIG_BIN_DESPLAZAMIENTO_IZQ;	        agregar_palabra(estado, yytext);    return OP_ASIG_BIN_DESPLAZAMIENTO_IZQ;}
">>="  {estado = OP_ASIG_BIN_DESPLAZAMIENTO_DER;	        agregar_palabra(estado, yytext);    return OP_ASIG_BIN_DESPLAZAMIENTO_DER;}
">>>=" {estado = OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO;	agregar_palabra(estado, yytext);    return OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO;}
"&="   {estado = OP_ASIG_BIN_AND;	agregar_palabra(estado, yytext);    return OP_ASIG_BIN_AND;}
"^="   {estado = OP_ASIG_BIN_XOR;	agregar_palabra(estado, yytext);    return OP_ASIG_BIN_XOR;}
"|="   {estado = OP_ASIG_BIN_OR;	agregar_palabra(estado, yytext);    return OP_ASIG_BIN_OR;}
"envezde" {estado = OP_ENVEZDE;	    agregar_palabra(estado, yytext);    return OP_ENVEZDE;}

"?" {estado = INTERROGACION;    agregar_palabra(estado, yytext);    return INTERROGACION;}
":" {estado = DOS_PUNTOS;	    agregar_palabra(estado, yytext);    return DOS_PUNTOS;}
";" {estado = PUNTO_COMA;	    agregar_palabra(estado, yytext);    return PUNTO_COMA;}
"," {estado = COMA;	            agregar_palabra(estado, yytext);    return COMA;}
"." {estado = PUNTO;	        agregar_palabra(estado, yytext);    return PUNTO;}
"(" {estado = PARENTESIS_INI;	agregar_palabra(estado, yytext);    return PARENTESIS_INI;}
")" {estado = PARENTESIS_FIN;	agregar_palabra(estado, yytext);    return PARENTESIS_FIN;}
"{" {estado = LLAVE_INI;	    agregar_palabra(estado, yytext);    return LLAVE_INI;}
"}" {estado = LLAVE_FIN;	    agregar_palabra(estado, yytext);    return LLAVE_FIN;}
"[" {estado = CORCHETE_INI;	    agregar_palabra(estado, yytext);    return CORCHETE_INI;}
"]" {estado = CORCHETE_FIN;	    agregar_palabra(estado, yytext);    return CORCHETE_FIN;}

{funcion_primitiva}	 {estado = FUNC_PRIMITIVA;	agregar_palabra(estado, yytext);    return FUNC_PRIMITIVA;}

{error_declaracion}         { printf("Error en la linea %i, declaracion de varible incorrecta: %s\n", numLineas, yytext); }
{enteroEmpiezaCero}	        { printf("Error en la linea %i,  numero  entero empieza con 0 y no es 0: %s\n", numLineas, yytext); }
{errorNumeroFlotanteConComa}	 { printf("Error en la linea %i,  flotante con coma : %s\n", numLineas, yytext); }
{errorNumeroDobleConComa}   { printf("Error en la linea %i,  doble con coma : %s\n", numLineas, yytext); }
{errorMasDeUnPuntoOComa}    { printf("Error en la linea %i,  numero com mas de una coma o punto : %s\n", numLineas,  yytext); }
{flotanteEmpiezaCero}	    { printf("Error en la linea %i,  numero flotante empieza con 0 y no es 0. : %s\n", numLineas, yytext); }
{dobleEmpiezaCero}	        { printf("Error en la linea %i,  numero doble empieza con 0 y no es 0. : %s\n", numLineas, yytext); }
{errorIdentificador}	    { printf("Error en la linea %i,  la escritura numero o variable no es valido : %s\n", numLineas, yytext); }

{identificador}	     {estado = IDENTIFICADOR;	agregar_palabra(estado, yytext);    return IDENTIFICADOR;}

\n { numLineas++; }
.           /*ignorar cualquier otro símbolo*/
%%

/* Sección CODIGO USUARIO */
/* definir una lista enlazada de palabras y tipos*/
struct palabra {
    char *nombre_palabra;
    int tipo_palabra;
    struct palabra *sgte;
};

struct palabra *lista = NULL; /*primer elemento de la lista*/

int agregar_palabra(int tipo, char *palabra) {
    struct palabra *p; /*entrada de la lista*/
    
    if ( buscar_palabra(palabra) != BUSCAR ) {
        //printf("La palabra %s ya fue definida!!!\n", palabra);
        return 0; //no funciono
    }
    
    /* asignar espacio de memoria */
    p = malloc( sizeof( struct palabra ) );
    p->nombre_palabra = malloc( strlen(palabra) + 1 ); 
    /* copiar datos de palabra */
    strcpy( p->nombre_palabra, palabra );
    p->tipo_palabra = tipo;    
    /* enlazar nueva entrada a lista */
    p->sgte = lista;
    lista = p;
    return 1; //funciono
}

int buscar_palabra(char *palabra){
    struct palabra *p = lista;
    
    /* buscar palabra en la lista */
    while (p != NULL) {
        if ( strcmp(p->nombre_palabra, palabra) == 0 )
            return p->tipo_palabra;
        p = p->sgte;
    }
    
    return BUSCAR; /*no encontrado*/
}



