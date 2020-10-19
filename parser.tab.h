/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENTERO_LITERAL = 258,
    FLOTANTE_LITERAL = 259,
    DOBLE_LITERAL = 260,
    CARACTER_LITERAL = 261,
    CADENA_LITERAL = 262,
    BOOLEANO_LITERAL = 263,
    NULO_LITERAL = 264,
    ABSTRACTO = 265,
    AFIRMAR = 266,
    BOOLEANO = 267,
    INTERRUPCION = 268,
    BYTE = 269,
    CADENA = 270,
    CASO = 271,
    CAPTURA = 272,
    CARACTER = 273,
    CLASE = 274,
    CONSTANTE = 275,
    CONTINUAR = 276,
    DEFECTO = 277,
    HACER = 278,
    DOBLE = 279,
    SINO = 280,
    ENUMERACION = 281,
    EXPORTAR = 282,
    EXTIENDE = 283,
    FINAL = 284,
    FINALMENTE = 285,
    FLOTANTE = 286,
    PARA = 287,
    IR = 288,
    SI = 289,
    IMPLEMENTAR = 290,
    IMPORTAR = 291,
    ENTERO = 292,
    INTERFAZ = 293,
    LARGO = 294,
    MODULO = 295,
    NATIVO = 296,
    NUEVO = 297,
    PAQUETE = 298,
    PRIVADO = 299,
    PROTEGIDO = 300,
    PUBLICO = 301,
    REQUERIR = 302,
    RETORNAR = 303,
    CORTO = 304,
    ESTATICO = 305,
    STRICTFP = 306,
    SUPER = 307,
    INTERRUPTOR = 308,
    SINCRONIZADO = 309,
    ESTO = 310,
    LANZAR = 311,
    LANZA = 312,
    TRANSITORIO = 313,
    INTENTAR = 314,
    VARIABLE = 315,
    VACIO = 316,
    VOLATIL = 317,
    MIENTRAS = 318,
    PRINCIPAL = 319,
    ARGS = 320,
    OP_SUMA = 321,
    OP_RESTA = 322,
    OP_MULTIPLICACION = 323,
    OP_DIVISION = 324,
    OP_MODULO = 325,
    OP_INCREMENTO = 326,
    OP_DECREMENTO = 327,
    OP_IGUAL = 328,
    OP_DIFERENTE = 329,
    OP_MAYOR = 330,
    OP_MENOR = 331,
    OP_MAYOR_IGUAL = 332,
    OP_MENOR_IGUAL = 333,
    OP_LOG_AND = 334,
    OP_LOG_OR = 335,
    OP_LOG_NOT = 336,
    OP_BIN_AND = 337,
    OP_BIN_OR = 338,
    OP_BIN_XOR = 339,
    OP_BIN_COMPLEMENTO = 340,
    OP_BIN_DESPLAZAMIENTO_IZQ = 341,
    OP_BIN_DESPLAZAMIENTO_DER = 342,
    OP_DESPLAZAMIENTO_DER_LLENADO_CERO = 343,
    OP_ASIGNACION = 344,
    OP_ASIG_SUMA = 345,
    OP_ASIG_RESTA = 346,
    OP_ASIG_MULTIPLICACION = 347,
    OP_ASIG_DIVISION = 348,
    OP_ASIG_MODULO = 349,
    OP_ASIG_BIN_DESPLAZAMIENTO_IZQ = 350,
    OP_ASIG_BIN_DESPLAZAMIENTO_DER = 351,
    OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO = 352,
    OP_ASIG_BIN_AND = 353,
    OP_ASIG_BIN_XOR = 354,
    OP_ASIG_BIN_OR = 355,
    OP_ENVEZDE = 356,
    INTERROGACION = 357,
    DOS_PUNTOS = 358,
    PUNTO_COMA = 359,
    COMA = 360,
    PUNTO = 361,
    PARENTESIS_INI = 362,
    PARENTESIS_FIN = 363,
    LLAVE_INI = 364,
    LLAVE_FIN = 365,
    CORCHETE_INI = 366,
    CORCHETE_FIN = 367,
    FUNC_PRIMITIVA = 368,
    IDENTIFICADOR = 369
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
