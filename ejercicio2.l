

/* Sección DEFINICIONES */
%{
#include <stdio.h>

int numLineas = 1;
int numCaracteres = 1;

enum{
    VARIABLE_VALIDA,
    ENTERO,
    DOBLE,
	FLOTANTE,
    BOOLEANO,
    CARACTER,
    CADENA,
    NULO,
    PALABRA_CLAVE,
    FUNCION_PRIMITIVA,
    TIPO_DATO,
    DE_PUNTO_COMA,
    DE_COMA,
    DE_PUNTO,
    DE_PARENTESIS_INI,
    DE_PARENTESIS_FIN,
    DE_LLAVE_INI,
    DE_LLAVE_FIN,
    DE_CORCHETE_INI,
    DE_CORCHETE_FIN,
    OPERADOR,
    METODO,
    CAMPO,
    CLASE,
ERROR_DECLARACION,
ERROR_ENTERO_EMPIEZA_CERO,
ERROR_FLOTANTE_COMA	,
ERROR_DOBLE_COMA,
ERROR_MAS_DE_UN_PUNTO,
ERROR_FLOTANTE_EMPIEZA_CERO,
ERROR_DOBLE_EMPIEZA_CERO,
ERROR_IDENTIFICADOR_NO_VALIDO	
};


int estado;
int agregar_palabra(int tipo, char *palabra);
int buscar_palabra(char *palabra);
int mostrar_tabla();
%}

flotanteEmpiezaCero -?0{digito}+\.{digito}{1,7}
dobleEmpiezaCero -?0{digito}+\.{digito}{1,15}
enteroEmpiezaCero ^0{entero}
errorNumeroFlotanteConComa -?{digito}+\,{digito}{1,7}
errorNumeroDobleConComa -?{digito}+\,{digito}{1,15}
errorMasDeUnPuntoOComa -?{digito}+[\.|\,]{digito}*[\.|\,]
errorIdentificador [0-9][a-zA-Z_@#]|[@#][a-zA-Z_@#0-9]|[a-zA-Z_]+[@#]
error_declaracion {tipo_dato}[ ]+{variable_valida}[ ]+{variable_valida}

digito_no_zero [1-9]
digito 0|{digito_no_zero}
entero 0|{digito_no_zero}*{digito}*
numeroFlotante -?{digito}+\.{digito}{1,7}
numeroDoble -?{digito}+\.{digito}{1,15}

signo_exponente e|E	
parte_exponente {signo_exponente}(\+|\-){entero}

booleano "verdadero"|"falso"	

caracter \'.*\'

cadena \".*\"

nulo "nulo"

de_punto_coma \;

de_coma \,

de_punto \.

de_parentesis_ini \(

de_parentesis_fin \)

de_llave_ini \{

de_llave_fin \}

de_corchete_ini \[

de_corchete_fin \]

operador \=|\>|\<|\!|\~|\?|\:|\=\=|\<\=|\>\=|\!\=|\&\&|\|\||\+\+|\-\-|\+|\-|\*|\/|\&|\||\^|\%|\<\<|\>\>|\>\>\>|\+\=|\-\=|\*\=|\/\=|\&\=|\|\=|\^\=|\%\=|\<\<\=|\>\>\=|\>\>\=

metodo "absoluto"|"arcoseno"|"arcotangente"|"arcocoseno"|"tangente"|"tanghiperb"|"cbrt"|"ceil"|"raizcuadrada"|"cosenohiperb"|"senohiperb"|"exp"|"random"|"floor"|"maximo"|"minimo"|"redondear"|"seno"|"coseno"|"append"|"cerrar"|"flush"|"escribir"

clase "Matematica"|"Sistema"

variable_valida [a-zA-Z\_][a-zA-Z0-9]*

campo "E"|"PI"

funciones_primitivas "error"|"entrada"|"salida"|"imprimir"|"imprimirformato"|"imprimirlinea"

tipo_dato "booleano"|"byte"|"doble"|"flotante"|"entero"|"largo"|"corto"|"vacio"|"Cadena"

palabras_reservadas  "principal"|"abstracto"|"afirmar"|"interrupcion"|"caso"|"captura"|"caracter"|"clase"|"constante"|"continuar"|"defecto"|"hacer"|"sino"|"enumeracion"|"exportar"|"extender"|"final"|"finalmente"|"para"|"ir"|"si"|"implementar"|"importar"|"envezde"|"interface"|"modulo"|"nativo"|"nuevo"|"paquete"|"privado"|"protegido"|"publico"|"requerir"|"retornar"|"estatico"|"strictfp"|"super"|"interruptor"|"sincronizado"|"esto"|"lanzar"|"lanzarvarios"|"transitorio"|"intentar"|"variable"|"volatil"|"mientras"			



/* Sección REGLAS */ 
%%

{error_declaracion} {estado = ERROR_DECLARACION;	agregar_palabra(estado, yytext); }
{enteroEmpiezaCero}	 {estado = ERROR_ENTERO_EMPIEZA_CERO;	agregar_palabra(estado, yytext);}
{errorNumeroFlotanteConComa}	 {estado = ERROR_FLOTANTE_COMA;	agregar_palabra(estado, yytext);}
{errorNumeroDobleConComa}	 {estado = ERROR_DOBLE_COMA;	agregar_palabra(estado, yytext);}
{errorMasDeUnPuntoOComa} { estado = ERROR_MAS_DE_UN_PUNTO;	agregar_palabra(estado, yytext); }
{flotanteEmpiezaCero}	 { estado = ERROR_FLOTANTE_EMPIEZA_CERO;	agregar_palabra(estado, yytext); }
{dobleEmpiezaCero}	 { estado = ERROR_DOBLE_EMPIEZA_CERO;	agregar_palabra(estado, yytext); }
{errorIdentificador}	 { estado = ERROR_IDENTIFICADOR_NO_VALIDO;	agregar_palabra(estado, yytext); }

{numeroFlotante} 	 {estado = FLOTANTE;		agregar_palabra(estado, yytext);}
{numeroDoble} 	 {estado = DOBLE;		agregar_palabra(estado, yytext);}



{palabras_reservadas}  {estado = PALABRA_CLAVE;	agregar_palabra(estado, yytext);}
{tipo_dato}  {estado = TIPO_DATO;	agregar_palabra(estado, yytext);}
{funciones_primitivas}  {estado = FUNCION_PRIMITIVA;	agregar_palabra(estado, yytext);}
{booleano} 	 {estado = BOOLEANO;		agregar_palabra(estado, yytext);}
{nulo}		 {estado = NULO;		agregar_palabra(estado, yytext);}
{metodo}	 {estado = METODO;		agregar_palabra(estado, yytext);}
{campo}		 {estado = CAMPO;		agregar_palabra(estado, yytext);}
{clase}	 	 {estado = CLASE;		agregar_palabra(estado, yytext);}
{variable_valida}	 {estado = VARIABLE_VALIDA;	agregar_palabra(estado, yytext);}
{entero}	 {estado = ENTERO;		agregar_palabra(estado, yytext);}
{caracter}	 {estado = CARACTER;		agregar_palabra(estado, yytext);}
{cadena}  	 {estado = CADENA;		agregar_palabra(estado, yytext);}
{de_punto_coma}	 {estado = DE_PUNTO_COMA;	agregar_palabra(estado, yytext);}
{de_coma}	 {estado = DE_COMA;		agregar_palabra(estado, yytext);}
{de_punto}	 {estado = DE_PUNTO;	agregar_palabra(estado, yytext);}
{de_parentesis_ini}	 {estado = DE_PARENTESIS_INI;	agregar_palabra(estado, yytext);}
{de_parentesis_fin}	 {estado = DE_PARENTESIS_FIN;	agregar_palabra(estado, yytext);}
{de_llave_ini}	 	 {estado = DE_LLAVE_INI;	agregar_palabra(estado, yytext);}
{de_llave_fin}	 	 {estado = DE_LLAVE_FIN;	agregar_palabra(estado, yytext);}
{de_corchete_ini} 	 {estado = DE_CORCHETE_INI;	agregar_palabra(estado, yytext);}
{de_corchete_fin}	 {estado = DE_CORCHETE_FIN;	agregar_palabra(estado, yytext);}
{operador}	 {estado = OPERADOR;		agregar_palabra(estado, yytext);}


		/* No mostrar entrada, conteo columna caracteres a 1 
{saltoLinea}				{numLineas++; numCaracteres = 1;}
\t 					{numCaracteres = numCaracteres + 8;}
. 					{numCaracteres++;}
*/


%%

/* Sección CODIGO USUARIO */
int yywrap() {}
int main(int argc, char **argv)
{
    yylex();  
    mostrar_tabla();
    return 0;
}

struct palabra {
    char *nombre_palabra;
    int tipo_palabra;
    struct palabra *sgte;
};

struct palabra *lista = NULL; /*primer elemento de la lista*/

int agregar_palabra(int tipo, char *palabra) {
    struct palabra *p; /*entrada de la lista*/
    
    if ( buscar_palabra(palabra) == -1 ) {
	/* asignar espacio de memoria */
        p = malloc( sizeof( struct palabra ) );
        p->nombre_palabra = malloc( strlen(palabra) + 1 ); 
        /* copiar datos de palabra */
        strcpy( p->nombre_palabra, palabra );
        p->tipo_palabra = tipo;    
        /* enlazar nueva entrada a lista */
        p->sgte = lista;
        lista = p;
        return 0;
    }
}

int buscar_palabra(char *palabra){
    struct palabra *p = lista;
    
    /* buscar palabra en la lista */
    while (p != NULL) {
        if ( strcmp(p->nombre_palabra, palabra) == 0 )
            return p->tipo_palabra;
        p = p->sgte;
    }
    
    return -1; /*no encontrado*/
}

int mostrar_tabla(){
    
    struct palabra *p = lista;
    while (p != NULL) {
	switch(p->tipo_palabra){
	    case VARIABLE_VALIDA: 	printf("%s\t:\t VARIABLE_VALIDA\n", p->nombre_palabra);break;
	    case TIPO_DATO: 		printf("%s\t:\t TIPO_DATO\n", p->nombre_palabra);break;
	    case ENTERO: 		printf("%s\t:\t ENTERO\n", p->nombre_palabra);break;
	    case DOBLE: 		printf("%s\t:\t DOBLE\n", p->nombre_palabra);break;
	case FLOTANTE: 		printf("%s\t:\t FLOTANTE\n", p->nombre_palabra);break;
	    case BOOLEANO: 		printf("%s\t:\t BOOLEANO\n", p->nombre_palabra);break;
	    case CARACTER: 		printf("%s\t:\t CARACTER\n", p->nombre_palabra);break;
	    case CADENA: 		printf("%s\t:\t CADENA\n", p->nombre_palabra);break;
	    case NULO: 			printf("%s\t:\t NULO\n", p->nombre_palabra);break;
	    case PALABRA_CLAVE: 	printf("%s\t:\t PALABRA_CLAVE\n", p->nombre_palabra);break;
	    case DE_PUNTO_COMA: 	printf("%s\t:\t DE_PUNTO_COMA\n", p->nombre_palabra);break;
	    case DE_COMA: 		printf("%s\t:\t DE_COMA\n", p->nombre_palabra);break;
	    case DE_PUNTO: 		printf("%s\t:\t DE_PUNTO\n", p->nombre_palabra);break;
	    case DE_PARENTESIS_INI:     printf("%s\t:\t DE_PARENTESIS_INI\n", p->nombre_palabra);break;
	    case DE_PARENTESIS_FIN:     printf("%s\t:\t DE_PARENTESIS_FIN\n", p->nombre_palabra);break;
	    case DE_LLAVE_INI: 		printf("%s\t:\t DE_LLAVE_INI\n", p->nombre_palabra);break;
	    case DE_LLAVE_FIN: 		printf("%s\t:\t DE_LLAVE_FIN\n", p->nombre_palabra);break;
	    case DE_CORCHETE_INI: 	printf("%s\t:\t DE_CORCHETE_INI\n", p->nombre_palabra);break;
	    case DE_CORCHETE_FIN: 	printf("%s\t:\t DE_CORCHETE_FIN\n", p->nombre_palabra);break;
	    case OPERADOR: 		printf("%s\t:\t OPERADOR\n", p->nombre_palabra);break;
	    case METODO: 		printf("%s\t:\t METODO\n", p->nombre_palabra);break;
	    case CAMPO: 		printf("%s\t:\t CAMPO\n", p->nombre_palabra);break;
	    case CLASE:		        printf("%s\t:\t CLASE\n", p->nombre_palabra); break;

		
	case ERROR_DECLARACION:		        printf("%s\t:\t Error, declaracion variable incorrecta\n", p->nombre_palabra); break;
	case ERROR_ENTERO_EMPIEZA_CERO:		        printf("%s\t:\t Error, entero comienza en 0 y no es 0 \n", p->nombre_palabra); break;
	case ERROR_FLOTANTE_COMA:		        printf("%s\t:\t Error, flotante con coma\n", p->nombre_palabra); break;
	case ERROR_DOBLE_COMA:		        printf("%s\t:\t Error, doble con coma\n", p->nombre_palabra); break;
	case ERROR_MAS_DE_UN_PUNTO:		        printf("%s\t:\t Error, numero con mas de un punto o coma\n", p->nombre_palabra); break;
	case ERROR_FLOTANTE_EMPIEZA_CERO:		        printf("%s\t:\t Error, flotante comienza en 0\n", p->nombre_palabra); break;
	case ERROR_DOBLE_EMPIEZA_CERO:		        printf("%s\t:\t Error, doble empieza en 0\n", p->nombre_palabra); break;
	case ERROR_IDENTIFICADOR_NO_VALIDO:		        printf("%s\t:\t Error, identificador no valido\n", p->nombre_palabra); break;

	}        
	
        p = p->sgte;
    }
    return 1;
}
