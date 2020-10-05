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
    CASO = 270,
    CAPTURA = 271,
    CARACTER = 272,
    CLASE = 273,
    CONSTANTE = 274,
    CONTINUAR = 275,
    DEFECTO = 276,
    HACER = 277,
    DOBLE = 278,
    SINO = 279,
    ENUMERACION = 280,
    EXPORTAR = 281,
    EXTIENDE = 282,
    FINAL = 283,
    FINALMENTE = 284,
    FLOTANTE = 285,
    PARA = 286,
    IR = 287,
    SI = 288,
    IMPLEMENTAR = 289,
    IMPORTAR = 290,
    ENTERO = 291,
    INTERFAZ = 292,
    LARGO = 293,
    MODULO = 294,
    NATIVO = 295,
    NUEVO = 296,
    PAQUETE = 297,
    PRIVADO = 298,
    PROTEGIDO = 299,
    PUBLICO = 300,
    REQUERIR = 301,
    RETORNAR = 302,
    CORTO = 303,
    ESTATICO = 304,
    STRICTFP = 305,
    SUPER = 306,
    INTERRUPTOR = 307,
    SINCRONIZADO = 308,
    ESTO = 309,
    LANZAR = 310,
    LANZA = 311,
    TRANSITORIO = 312,
    INTENTAR = 313,
    VARIABLE = 314,
    VACIO = 315,
    VOLATIL = 316,
    MIENTRAS = 317,
    OP_SUMA = 318,
    OP_RESTA = 319,
    OP_MULTIPLICACION = 320,
    OP_DIVISION = 321,
    OP_MODULO = 322,
    OP_INCREMENTO = 323,
    OP_DECREMENTO = 324,
    OP_IGUAL = 325,
    OP_DIFERENTE = 326,
    OP_MAYOR = 327,
    OP_MENOR = 328,
    OP_MAYOR_IGUAL = 329,
    OP_MENOR_IGUAL = 330,
    OP_LOG_AND = 331,
    OP_LOG_OR = 332,
    OP_LOG_NOT = 333,
    OP_BIN_AND = 334,
    OP_BIN_OR = 335,
    OP_BIN_XOR = 336,
    OP_BIN_COMPLEMENTO = 337,
    OP_BIN_DESPLAZAMIENTO_IZQ = 338,
    OP_BIN_DESPLAZAMIENTO_DER = 339,
    OP_DESPLAZAMIENTO_DER_LLENADO_CERO = 340,
    OP_ASIGNACION = 341,
    OP_ASIG_SUMA = 342,
    OP_ASIG_RESTA = 343,
    OP_ASIG_MULTIPLICACION = 344,
    OP_ASIG_DIVISION = 345,
    OP_ASIG_MODULO = 346,
    OP_ASIG_BIN_DESPLAZAMIENTO_IZQ = 347,
    OP_ASIG_BIN_DESPLAZAMIENTO_DER = 348,
    OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO = 349,
    OP_ASIG_BIN_AND = 350,
    OP_ASIG_BIN_XOR = 351,
    OP_ASIG_BIN_OR = 352,
    OP_ENVEZDE = 353,
    INTERROGACION = 354,
    DOS_PUNTOS = 355,
    PUNTO_COMA = 356,
    COMA = 357,
    PUNTO = 358,
    PARENTESIS_INI = 359,
    PARENTESIS_FIN = 360,
    LLAVE_INI = 361,
    LLAVE_FIN = 362,
    CORCHETE_INI = 363,
    CORCHETE_FIN = 364,
    FUNC_PRIMITIVA = 365,
    IDENTIFICADOR = 366
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
