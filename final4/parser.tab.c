/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "parser.y" /* yacc.c:339  */

#include <stdio.h>
/*#define YYERROR_VERBOSE*/

int yylex();
int yyerror(char *s);

#line 74 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 240 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   369

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    42,    44,    46,    50,    51,    54,    55,
      57,    58,    60,    62,    64,    65,    66,    67,    68,    70,
      71,    72,    75,    76,    77,    79,    80,    81,    82,    83,
      84,    86,    87,    88,    89,    90,    95,    97,    98,   100,
     101,   103,   104,   106,   107,   109,   114,   116,   118,   123,
     128,   129,   130,   131,   132,   133,   134,   136,   137,   138,
     139,   140,   141,   142,   143,   143,   144,   146,   147,   151,
     156,   157,   162,   163,   168,   169,   174,   179,   180,   181,
     182,   183,   184,   188,   189,   191,   193,   194,   195,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   213,   214,   219,   220,   222,   223,   225,   226,   228,
     229,   231,   232,   237,   238,   239,   241,   242,   243,   244,
     245,   246,   249,   254,   255,   256,   259,   260,   261,   262,
     267,   268,   269,   270,   271,   276,   278,   283,   284,   285,
     286,   288,   289,   290,   291,   296,   297,   298,   299,   304,
     306,   311,   312,   314,   316,   317,   318,   319,   320,   321,
     326,   327,   328,   329,   331,   332,   338,   339,   341,   342,
     344,   346,   347,   352,   353,   358,   359,   361,   362,   364,
     365,   370,   371,   378,   379,   380,   381,   382,   383,   384,
     389,   389,   391,   391,   393,   393,   395,   395,   395,   395,
     395,   397,   397,   399,   401,   402,   403,   405,   412,   415,
     418,   419,   422,   423,   426,   427,   429,   435,   436,   437,
     438,   439,   441,   442,   443,   444,   445,   449,   450,   451,
     452,   453,   455,   456,   457,   458,   459,   460,   462,   463,
     464,   465,   466,   469,   470,   471,   472,   473,   478,   484,
     486,   487,   488,   494,   495,   496,   497,   498,   499,   501,
     502,   503,   504,   506,   507,   508
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO_LITERAL", "FLOTANTE_LITERAL",
  "DOBLE_LITERAL", "CARACTER_LITERAL", "CADENA_LITERAL",
  "BOOLEANO_LITERAL", "NULO_LITERAL", "ABSTRACTO", "AFIRMAR", "BOOLEANO",
  "INTERRUPCION", "BYTE", "CADENA", "CASO", "CAPTURA", "CARACTER", "CLASE",
  "CONSTANTE", "CONTINUAR", "DEFECTO", "HACER", "DOBLE", "SINO",
  "ENUMERACION", "EXPORTAR", "EXTIENDE", "FINAL", "FINALMENTE", "FLOTANTE",
  "PARA", "IR", "SI", "IMPLEMENTAR", "IMPORTAR", "ENTERO", "INTERFAZ",
  "LARGO", "MODULO", "NATIVO", "NUEVO", "PAQUETE", "PRIVADO", "PROTEGIDO",
  "PUBLICO", "REQUERIR", "RETORNAR", "CORTO", "ESTATICO", "STRICTFP",
  "SUPER", "INTERRUPTOR", "SINCRONIZADO", "ESTO", "LANZAR", "LANZA",
  "TRANSITORIO", "INTENTAR", "VARIABLE", "VACIO", "VOLATIL", "MIENTRAS",
  "PRINCIPAL", "ARGS", "OP_SUMA", "OP_RESTA", "OP_MULTIPLICACION",
  "OP_DIVISION", "OP_MODULO", "OP_INCREMENTO", "OP_DECREMENTO", "OP_IGUAL",
  "OP_DIFERENTE", "OP_MAYOR", "OP_MENOR", "OP_MAYOR_IGUAL",
  "OP_MENOR_IGUAL", "OP_LOG_AND", "OP_LOG_OR", "OP_LOG_NOT", "OP_BIN_AND",
  "OP_BIN_OR", "OP_BIN_XOR", "OP_BIN_COMPLEMENTO",
  "OP_BIN_DESPLAZAMIENTO_IZQ", "OP_BIN_DESPLAZAMIENTO_DER",
  "OP_DESPLAZAMIENTO_DER_LLENADO_CERO", "OP_ASIGNACION", "OP_ASIG_SUMA",
  "OP_ASIG_RESTA", "OP_ASIG_MULTIPLICACION", "OP_ASIG_DIVISION",
  "OP_ASIG_MODULO", "OP_ASIG_BIN_DESPLAZAMIENTO_IZQ",
  "OP_ASIG_BIN_DESPLAZAMIENTO_DER",
  "OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO", "OP_ASIG_BIN_AND",
  "OP_ASIG_BIN_XOR", "OP_ASIG_BIN_OR", "OP_ENVEZDE", "INTERROGACION",
  "DOS_PUNTOS", "PUNTO_COMA", "COMA", "PUNTO", "PARENTESIS_INI",
  "PARENTESIS_FIN", "LLAVE_INI", "LLAVE_FIN", "CORCHETE_INI",
  "CORCHETE_FIN", "FUNC_PRIMITIVA", "IDENTIFICADOR", "$accept",
  "unidadCompilacion", "declaracionClase", "cuerpoClase",
  "declaracionMetodo", "bloque", "sentenciasBloque", "sentenciaBloque",
  "sentenciaDeclaracionVariableLocal", "sentencia", "sentenciaNoCorto",
  "sentenciaSinSeguimientoSubsentencia", "declaracionVariableLocal",
  "declaradoresVariable", "declaradorVariable", "declaradorVariableId",
  "inicializadorVariable", "sentenciaSiLuego", "sentenciaSiLuegoSino",
  "sentenciaSiLuegoSinoNoCorto", "sentenciaMientras", "sentenciaPara",
  "sentenciaParaNoCorto", "iniciarPara", "actualizarPara",
  "listaExpresionesDeclaracion", "sentenciaVacia", "sentenciaInterrupcion",
  "sentenciaContinuar", "sentenciaRetornar", "sentenciaExpresion",
  "expresionDeclaracion", "expresion", "asignacion", "ladoIzq",
  "operadorAsignacion", "expresionCondicional", "expresionCondicionalOR",
  "expresionCondicionalAND", "expresionOR", "expresionXOR", "expresionAND",
  "expresionIgualdad", "expresionRelacional", "expresionOperacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionPreIncremento", "expresionPreDecremento",
  "expresionUnariaNoMasMenos", "expresionSufijo", "expresionCast",
  "expresionPostIncremento", "expresionPostDecremento", "primario",
  "primarioNoNuevoArreglo", "inicializadorArreglo",
  "inicializadoresVariable", "expresionCreacionArreglo",
  "expresionesDimension", "expresionDimension", "dimensiones",
  "accesoCampo", "invocacionMetodo", "listaArgumentos", "metodos",
  "accesoArreglo", "literal", "tipo", "tipoPrimitivo", "tipoNumerico",
  "tipoIntegral", "tipoPuntoFlotante", "tipoReferencia", "tipoArreglo",
  "nombre", "sentenciaDeclaracionVariableLocalIncorrecto",
  "sentenciaExpresionIncorrecto", "sentenciaInterrupcionIncorrecto",
  "sentenciaContinuarIncorrecto", "sentenciaRetornarIncorrecto",
  "sentenciaVaciaIncorrecto", "sentenciaSiLuegoIncorrecto",
  "sentenciaSiLuegoSinoIncorrecto", "sentenciaMientrasIncorrecto",
  "inicializadorArregloIncorrecto", "expresionCreacionArregloIncorrecto", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369
};
# endif

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -191

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -45,    75,  -360,   -31,  -360,    45,  -360,    43,   -13,
      41,  -360,    40,    -1,    98,     6,     3,    58,    18,    20,
    2342,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     -91,  -360,  -360,   -78,  -360,  -360,    25,  2454,  -360,  -360,
      13,  3826,  -360,    29,  -360,  3406,  4837,  4837,  4837,  4837,
    4837,  4837,  -360,  3910,  -360,  3995,  -360,  -360,  -360,  2538,
    -360,  -360,  -360,  -360,    33,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,    42,  1662,    37,  1022,  -360,   -56,
      60,    64,    67,    66,   -62,   -43,  -360,   -11,    31,  -360,
    5420,  5479,  -360,   -42,  -360,  1270,  5550,    48,    47,  -360,
      49,  -360,    50,  1174,  5515,     4,  1410,  -360,    68,   -72,
    -360,  -360,  -360,  -360,    51,    76,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,    53,  -360,    55,
     911,  3490,    77,  2650,  4079,  -360,   158,   160,  -360,  -360,
    1782,    49,   751,    49,    50,    49,  -360,  4837,    82,  -360,
    -360,  -360,  -360,  -360,  -360,    78,  3910,  -360,  -360,  -360,
    -360,    80,  -360,  -360,  -360,  -360,  -360,  2762,  1894,   -68,
     937,  -360,    83,  -360,  -360,  -360,  -360,  3490,  2874,  -360,
     169,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  4837,  4837,  4837,  4837,  4837,  4837,  4837,
    4837,  4837,  4837,  4837,  4837,  4837,    35,  4837,  4837,  4837,
    4837,  4837,  -360,  -360,    84,  4837,  -360,    50,    87,    89,
    4164,  -360,    91,  -360,   -48,  4249,    49,    50,    88,  4333,
    -360,  -360,  4417,  4837,  -360,    99,   100,  -360,  -360,  -360,
    -360,   -42,  -360,  1147,  4079,  2986,  2006,  3490,  3490,  3098,
    -360,   179,  4837,    50,    49,    50,   105,  -360,  -360,  2118,
    3490,  -360,   181,  3490,  3210,  -360,   182,  4837,   -40,  3995,
     -25,  -360,  -360,  3490,  -360,   190,  3490,  -360,    60,   113,
      64,    67,    66,   -62,   -43,   -43,  -360,  -360,  -360,  -360,
     106,  -360,   108,    31,    31,  -360,  -360,  -360,  -360,   109,
    -360,  -360,  -360,  -360,   -10,    68,  4501,   112,  -360,    50,
    -360,  -360,   116,  4921,   121,   124,  4585,  5359,  4669,   125,
    2230,  3490,  -360,   195,  3490,  3322,  -360,   208,  -360,  -360,
    3490,  -360,   210,  3490,    50,  5432,  3210,  -360,  3490,  -360,
    3490,  -360,   213,  -360,  3490,  -360,  4837,  5432,  -360,  3490,
    -360,  4837,   128,   129,  -360,  4837,  -360,  -360,  3658,  -360,
    -360,  -360,   137,  -360,  -360,  -360,  3490,   135,   100,  4994,
    -360,   138,   143,  -360,  5067,   144,  4753,  3322,  -360,  3490,
    -360,  3490,  -360,   229,  3490,  -360,  3490,  -360,  -360,  -360,
    -360,  -360,  3490,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     147,  -360,  -360,   -28,  4501,  -360,  3490,  3490,   152,  3490,
    5140,  3574,   153,  5213,   154,   159,   239,  -360,  -360,  3490,
    -360,  -360,  -360,  -360,  3742,  -360,  -360,  -360,  -360,  3490,
    -360,  3490,   157,  -360,  3574,  3574,   162,  3574,  5286,  3574,
    -360,  -360,  -360,  -360,  3490,  -360,  -360,  3574,  -360,  3574,
     163,  -360,  -360,  -360,  -360,  3574,  -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     3,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,   183,   184,   185,   187,   188,   186,   189,   193,
     211,   196,   200,   213,   202,   201,     0,   216,   198,   199,
     258,   215,   197,     0,   155,   216,     0,     0,     0,     0,
       0,     0,    69,     0,     7,     0,   180,   207,    25,     0,
       9,    10,    11,    14,   208,    15,    16,    17,    18,    26,
      27,    28,    29,    30,   209,   216,    77,     0,    84,   101,
     103,   105,   107,   109,   111,   113,   116,   122,   123,   126,
      78,    79,   134,   137,   140,    80,    81,   141,   151,   152,
     264,   169,   265,   157,    82,     0,   159,   154,     0,   262,
     192,   194,   195,   191,   203,   142,    12,    31,    33,    34,
      35,    32,    20,    19,    21,   153,    71,   210,    73,   212,
       0,   216,     0,   216,     0,   221,     0,    14,    23,    24,
     216,   262,   142,   254,   255,   257,    75,     0,   214,    83,
     130,   131,   143,   144,   158,     0,     0,   248,   132,   157,
     159,   142,   133,   135,   136,   139,   138,   216,   216,   262,
     142,   172,     0,     6,     8,    13,    76,   216,   216,   225,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,   150,     0,     0,   168,   263,     0,     0,
       0,    41,    36,    38,    39,     0,   260,   261,     0,     0,
      70,    72,     0,     0,    65,     0,    64,    68,    77,    78,
      79,     0,   237,     0,     0,   216,   216,   216,   216,   216,
     219,     0,     0,   253,   167,   256,     0,    74,   174,   216,
     216,   226,     0,   216,   156,   224,     0,     0,   261,     0,
       0,   170,   246,   216,   223,     0,   216,    85,   104,     0,
     106,   108,   110,   112,   114,   115,   117,   118,   119,   120,
       0,   121,     0,   124,   125,   127,   128,   129,   173,     0,
     171,   179,   176,   178,     0,     0,   249,     0,   172,   259,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   216,   220,     0,   216,   156,   218,     0,   231,   235,
     216,   217,     0,   216,   166,   156,   156,   247,   216,   245,
     216,   222,     0,   134,   216,   146,     0,     0,   244,   216,
     241,     0,     0,     0,   182,     0,   175,    37,   249,    40,
      43,    44,   251,    45,    42,   181,   216,     0,    66,     0,
     156,     0,     0,    67,     0,     0,     0,   156,   236,   216,
     234,   216,    46,     0,   216,   233,   216,   229,   147,    49,
     242,   243,   216,   240,   145,   148,   239,   102,   204,   177,
     252,   163,   165,   250,   249,    56,   216,   216,     0,   216,
       0,   216,     0,     0,     0,     0,     0,   230,   232,   216,
     228,   227,   238,   162,   249,   161,   164,    55,    54,   216,
      52,   216,     0,    63,   216,   216,     0,   216,     0,   216,
      47,   160,    53,    51,   216,    62,    61,   216,    59,   216,
       0,    48,    50,    60,    58,   216,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,  -360,  -360,   247,  -360,   209,  -360,   -37,
      10,   -15,  -129,  -360,   -38,  -360,  -301,  -360,  -360,  -360,
    -360,  -360,  -360,    30,  -359,  -127,  -360,  -360,  -360,  -360,
    -360,  -124,   569,   585,  -360,  -360,   -79,  -360,    81,    85,
      79,    92,    86,   -80,  -115,  -360,   -64,   -30,   330,   457,
    -255,  -116,  -360,   858,  1090,  -360,  -360,  -360,   -81,  -360,
     -33,   -98,   -36,  1372,  1180,  -360,  -360,  1433,  -360,  -360,
       8,  -360,  -360,  -360,    72,  -360,  1411,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    58,    59,    60,    61,    62,
     136,    63,    64,   222,   223,   224,   426,    65,    66,   138,
      67,    68,   139,   235,   367,   368,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   193,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   361,   362,    99,
     100,   101,   102,   103,   104,   304,   105,   106,   107,   108,
     141,   110,   111,   112,   113,   114,   142,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   363,   125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     135,   234,   216,   236,   144,   359,   237,   143,   157,   343,
     408,   200,   201,   126,   241,   412,   158,   162,   163,   164,
     165,   166,   137,   127,   194,    29,   128,    31,   109,   212,
     213,    32,   202,   203,   204,   205,   129,    34,   179,   225,
     267,   306,  -190,    55,    35,   216,   195,    29,   145,    31,
      38,   432,    39,    32,   436,   207,   208,   402,   206,    34,
     137,   169,    42,   307,   217,     1,    35,   109,   346,     4,
     343,   218,    38,   227,    39,     5,   226,   424,     6,   450,
     388,   343,   425,   347,    42,   180,   218,   286,   287,   288,
     289,     8,   395,    10,   242,   355,   135,    11,   356,   209,
     210,   211,    12,   250,    13,   227,    14,   253,   226,   255,
     219,   220,   254,    15,   234,    17,   236,    16,   137,   237,
     284,   285,   343,    18,    55,   137,    19,   241,   216,    20,
     261,   265,   130,   268,   270,   155,   226,   175,   109,   196,
     272,   274,   169,   293,   294,   -83,   176,   197,   199,    57,
     251,   198,   137,   137,   214,   169,   216,   230,   215,   231,
      55,   218,   228,   137,   169,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   262,   266,   295,
     296,   297,   221,   247,   243,   -22,   257,   229,   275,   237,
     309,   252,   258,   373,   276,   271,   305,   241,   298,   300,
     310,   241,   301,   316,   333,   317,   338,   344,   322,   326,
     328,   329,   331,   335,   290,   349,   351,   352,   334,   353,
     379,   354,   265,   337,   364,   369,   339,   341,   365,   376,
     137,   137,   370,   384,   137,   386,   348,   345,   392,   350,
     398,   311,   404,   406,   137,   237,   409,   410,   413,   137,
     237,   109,   169,   241,   419,   323,   327,   423,   241,   332,
     429,   434,   437,   438,   439,   444,    21,   357,   174,   266,
     447,   455,   397,   319,   342,   278,   281,   403,   291,     0,
       0,   280,     0,   326,   378,   283,   237,   380,   382,   237,
     282,     0,     0,   385,   241,     0,   387,   241,     0,   389,
       0,   390,     0,   391,     0,   137,     0,   393,     0,     0,
     137,     0,   396,     0,   237,     0,   394,     0,     0,     0,
       0,   137,   241,     0,     0,     0,     0,     0,     0,   405,
     327,     0,     0,     0,     0,   383,     0,     0,     0,     0,
     382,     0,   417,     0,   418,     0,   342,   420,     0,   421,
       0,     0,     0,     0,     0,   422,     0,     0,     0,     0,
       0,     0,   137,     0,     0,     0,     0,     0,     0,   427,
     428,   150,   430,     0,   405,     0,   150,   150,   150,   150,
     150,   150,   440,   150,     0,   150,     0,   416,     0,     0,
       0,     0,   442,     0,   443,     0,   137,   427,   428,     0,
     430,     0,   440,     0,     0,     0,     0,   452,     0,     0,
     442,     0,   443,     0,     0,     0,     0,     0,   452,   137,
     137,   433,   137,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   137,     0,   137,     0,     0,     0,     0,     0,
     137,     0,     0,     0,   445,   446,     0,   448,     0,   451,
       0,     0,     0,     0,     0,     0,     0,   453,     0,   454,
     239,     0,     0,     0,   150,   456,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,   151,   151,   151,   151,   151,   151,     0,
     151,     0,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,     0,   150,   150,   150,
     150,   150,     0,     0,     0,   150,     0,     0,     0,     0,
     150,     0,     0,     0,     0,   150,     0,     0,     0,   150,
       0,     0,   150,   150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   150,     0,     0,     0,     0,     0,
       0,     0,   150,     0,     0,     0,     0,   240,     0,     0,
       0,   151,     0,     0,     0,     0,     0,   150,     0,   150,
       0,     0,     0,     0,   151,     0,   140,     0,     0,     0,
     148,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,     0,   168,     0,   172,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,   149,     0,
     149,     0,     0,   239,     0,     0,   150,   239,   150,     0,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,     0,   151,   151,   151,   151,   151,     0,
       0,     0,   151,     0,     0,     0,   150,   151,     0,     0,
       0,   150,   151,     0,     0,   150,   151,     0,   150,   151,
     151,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   151,   140,   246,   239,     0,   150,     0,     0,   151,
       0,     0,     0,     0,     0,   238,   256,     0,     0,   149,
       0,     0,     0,     0,   151,   259,   151,     0,     0,     0,
       0,     0,   149,     0,   150,     0,     0,     0,     0,     0,
     239,   149,     0,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,     0,     0,     0,     0,     0,
       0,     0,   277,   151,   279,     0,     0,     0,   239,     0,
     240,     0,     0,   151,   240,   151,     0,     0,   149,     0,
     149,     0,     0,     0,   299,     0,     0,     0,     0,   303,
       0,     0,     0,     0,   172,     0,     0,     0,   312,     0,
     149,   314,   315,   151,     0,   149,     0,     0,   151,     0,
     149,     0,   151,   320,   149,   151,     0,   149,   149,     0,
       0,   312,     0,     0,     0,     0,   240,     0,   238,   149,
       0,   240,     0,   151,     0,     0,     0,   149,   312,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,     0,   149,     0,     0,     0,     0,     0,
       0,   151,   252,     0,     0,     0,     0,   240,     0,     0,
     240,     0,     0,     0,     0,   360,     0,     0,     0,     0,
       0,   151,     0,     0,     0,   372,     0,   375,     0,     0,
       0,   149,     0,     0,     0,   240,     0,     0,   238,   152,
       0,   149,   238,   149,   152,   152,   152,   152,   152,   152,
       0,   152,     0,   152,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,   399,    31,     0,   360,     0,    32,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
     149,     0,    35,   149,     0,   415,     0,     0,    38,     0,
      39,     0,     0,    40,   238,     0,     0,     0,     0,   238,
      42,   149,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,   149,
       0,     0,   152,   360,     0,   238,     0,     0,   238,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,   149,
       0,     0,     0,     0,   152,   232,     0,     0,   233,     0,
       0,     0,    55,   238,    56,    57,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   269,     0,
       0,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,     0,   152,   152,   152,   152,   152,
       0,     0,     0,   152,     0,     0,     0,     0,   152,     0,
       0,     0,     0,   152,     0,     0,     0,   152,     0,     0,
     152,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
     152,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,     0,   152,     0,   152,     0,     0,
       0,   153,     0,     0,     0,     0,   153,   153,   153,   153,
     153,   153,     0,   153,     0,   153,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,   152,    32,     0,     0,     0,     0,
       0,    34,     0,     0,   152,     0,   152,     0,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,   152,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,   152,   152,     0,     0,     0,   152,
       0,     0,     0,   152,     0,     0,   152,     0,    48,    49,
       0,   154,     0,     0,   153,     0,   154,   154,   154,   154,
     154,   154,     0,   154,   152,   154,     0,   153,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,   318,     0,     0,   233,     0,     0,     0,    55,     0,
      56,    57,   152,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,     0,   153,   153,   153,
     153,   153,     0,     0,     0,   153,     0,     0,     0,     0,
     153,     0,     0,     0,   154,   153,     0,     0,     0,   153,
       0,     0,   153,   153,     0,     0,     0,   154,     0,     0,
       0,     0,     0,     0,   153,     0,   154,     0,  -143,  -143,
    -143,     0,   153,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,     0,  -143,  -143,  -143,     0,     0,   153,     0,   153,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -143,  -143,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,     0,   154,   154,   154,
     154,   154,     0,     0,     0,   154,   153,     0,     0,     0,
     154,     0,     0,     0,     0,   154,   153,     0,   153,   154,
       0,     0,   154,   154,     0,     0,     0,     0,   159,   159,
     159,   159,   159,   159,   154,   153,     0,     0,     0,     0,
       0,   115,   154,     0,     0,     0,   153,   153,     0,     0,
       0,   153,     0,     0,     0,   153,     0,   154,   153,   154,
       0,     0,     0,     0,     0,     0,     0,   161,   161,   161,
     161,   161,   161,     0,   170,     0,   153,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     160,   160,   160,   160,   160,     0,   154,     0,     0,     0,
       0,     0,     0,     0,   153,     0,   154,     0,   154,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,   154,     0,     0,
       0,   154,     0,     0,     0,   154,     0,     0,   154,     0,
       0,   115,     0,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,   170,     0,
       0,     0,     0,     0,     0,     0,   159,   170,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,     0,   159,
     159,   159,   159,   159,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   161,     0,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   292,   161,   161,
     161,   161,   161,     0,     0,     0,     0,   160,     0,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   159,
     160,   160,   160,   160,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,   161,     0,
      32,     0,     0,    33,     0,     0,    34,   177,     0,     0,
       0,     0,     0,    35,   132,     0,   133,     0,     0,    38,
     160,    39,     0,     0,    40,     0,     0,   159,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,   159,   159,
       0,     0,     0,   159,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,   161,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   161,     0,
       0,     0,   161,     0,     0,     0,    52,     0,   160,    53,
     178,    20,     0,    55,     0,    56,    57,     0,     0,   160,
     160,     0,     0,     0,   160,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,   248,     0,     0,
       0,     0,     0,    35,   132,     0,   133,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
     249,    20,     0,    55,     0,    56,    57,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   263,
       0,     0,     0,     0,     0,    35,   132,     0,   133,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,   264,    20,     0,    55,     0,    56,    57,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,   324,     0,     0,     0,     0,     0,    35,   132,     0,
     133,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,   325,    20,     0,    55,     0,    56,
      57,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,   263,     0,     0,     0,     0,     0,    35,
     132,     0,   133,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,   336,    20,     0,    55,
       0,    56,    57,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,   324,     0,     0,     0,     0,
       0,    35,   132,     0,   133,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,   377,    20,
       0,    55,     0,    56,    57,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    35,    36,     0,    37,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
       0,    20,    54,    55,     0,    56,    57,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   131,
       0,     0,     0,     0,     0,    35,   132,     0,   133,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,    52,    33,
       0,   134,    34,    20,     0,    55,     0,    56,    57,    35,
      36,     0,    37,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,     0,    20,   173,    55,
       0,    56,    57,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,   131,     0,     0,     0,     0,
       0,    35,   132,     0,   133,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,   244,     0,    20,
       0,    55,     0,    56,    57,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,   260,     0,     0,
       0,     0,     0,    35,   132,     0,   133,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
       0,    20,     0,    55,     0,    56,    57,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   273,
       0,     0,     0,     0,     0,    35,   132,     0,   133,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,     0,    20,     0,    55,     0,    56,    57,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,   321,     0,     0,     0,     0,     0,    35,   132,     0,
     133,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,     0,    20,     0,    55,     0,    56,
      57,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,   330,     0,     0,     0,     0,     0,    35,
     132,     0,   133,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,     0,    20,     0,    55,
       0,    56,    57,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,   340,     0,     0,     0,     0,
       0,    35,   132,     0,   133,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,     0,    20,
       0,    55,     0,    56,    57,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,   381,     0,     0,
       0,     0,     0,    35,   132,     0,   133,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,    52,    33,     0,    53,
      34,    20,     0,    55,     0,    56,    57,    35,    36,     0,
      37,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
      52,    33,     0,   156,    34,    20,     0,    55,     0,    56,
      57,    35,    36,     0,    37,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,    52,    33,     0,    53,    34,    20,
       0,    55,     0,    56,    57,    35,   132,     0,   133,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,     0,    31,     0,     0,     0,    32,     0,    52,     0,
       0,    53,    34,    20,     0,    55,     0,    56,    57,    35,
       0,     0,     0,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,     0,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,     0,    31,     0,     0,     0,
      32,     0,     0,   400,     0,   147,    34,   358,   401,    55,
       0,    56,    57,    35,     0,     0,     0,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,     0,
      31,     0,     0,     0,    32,     0,     0,     0,     0,   147,
      34,   358,   441,    55,     0,    56,    57,    35,     0,     0,
       0,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,     0,    31,     0,     0,     0,    32,     0,
     146,     0,     0,   147,    34,     0,     0,    55,     0,    56,
      57,    35,     0,     0,     0,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    29,     0,    31,
       0,     0,     0,    32,     0,     0,     0,   147,   167,    34,
       0,    55,     0,    56,    57,     0,    35,     0,     0,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,   147,    34,     0,     0,    55,   171,    56,    57,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,     0,    31,     0,
       0,     0,    32,     0,     0,     0,   147,   245,    34,     0,
      55,     0,    56,    57,     0,    35,     0,     0,     0,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,   147,   302,    34,     0,    55,     0,    56,    57,     0,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,   147,    34,     0,     0,
      55,   308,    56,    57,    35,     0,     0,     0,     0,     0,
      38,     0,    39,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
     147,    34,     0,     0,    55,   311,    56,    57,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,     0,    31,     0,     0,     0,    32,
       0,   313,     0,     0,   147,    34,     0,     0,    55,     0,
      56,    57,    35,     0,     0,     0,     0,     0,    38,     0,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    29,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,   147,    34,
     358,     0,    55,     0,    56,    57,    35,     0,     0,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,   371,
       0,     0,   147,    34,     0,     0,    55,     0,    56,    57,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,     0,    31,     0,     0,
       0,    32,     0,   374,     0,     0,   147,    34,     0,     0,
      55,     0,    56,    57,    35,     0,     0,     0,     0,     0,
      38,     0,    39,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,     0,    32,     0,   414,     0,     0,
     147,    34,     0,     0,    55,     0,    56,    57,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,   147,    34,     0,     0,    55,     0,
      56,    57,    35,     0,     0,     0,     0,     0,    38,     0,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,     0,    31,     0,
       0,     0,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,    35,     0,     0,   233,   366,
       0,    38,    55,    39,    56,    57,    40,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    35,     0,
       0,   233,   407,     0,    38,    55,    39,    56,    57,    40,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,     0,    31,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,    35,     0,     0,   233,   411,     0,    38,    55,    39,
      56,    57,    40,     0,     0,     0,     0,     0,     0,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,    35,     0,     0,   233,   431,     0,
      38,    55,    39,    56,    57,    40,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,     0,
      31,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    35,     0,     0,
     233,   435,     0,    38,    55,    39,    56,    57,    40,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
      35,     0,     0,   233,   449,     0,    38,    55,    39,    56,
      57,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,     0,    31,     0,     0,     0,
      32,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    35,     0,     0,   233,     0,     0,    38,
      55,    39,    56,    57,    40,     0,     0,     0,     0,     0,
       0,    42,     0,     0,    43,     0,     0,    44,  -130,  -130,
    -130,     0,     0,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,     0,  -130,  -130,  -130,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,  -130,  -130,     0,     0,     0,     0,     0,  -130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,    55,     0,    56,    57,  -131,  -131,  -131,
       0,     0,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
       0,  -131,  -131,  -131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -131,  -131,     0,  -158,  -158,  -158,     0,  -131,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,     0,  -158,  -158,  -158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -158,  -158,  -144,  -144,
    -144,  -158,     0,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,     0,  -144,  -144,  -144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -144,  -144
};

static const yytype_int16 yycheck[] =
{
      37,   130,   100,   130,    40,   306,   130,    40,    45,   264,
     369,    73,    74,   104,   130,   374,    46,    47,    48,    49,
      50,    51,    37,   114,    80,    12,   104,    14,    20,    71,
      72,    18,    75,    76,    77,    78,   114,    24,    75,   111,
     108,    89,   114,   111,    31,   143,   102,    12,    40,    14,
      37,   410,    39,    18,   413,    66,    67,   358,   101,    24,
      75,    53,    49,   111,   100,    19,    31,    59,   108,   114,
     325,   111,    37,   109,    39,     0,   109,   105,   109,   438,
     335,   336,   110,   108,    49,    75,   111,   202,   203,   204,
     205,    46,   347,    50,   131,   105,   133,   110,   108,    68,
      69,    70,    61,   140,    64,   141,   107,   143,   141,   145,
     106,   107,   145,    15,   243,   112,   243,   111,   133,   243,
     200,   201,   377,    65,   111,   140,   108,   243,   226,   109,
     167,   168,   107,   169,   170,   106,   169,   104,   130,    79,
     177,   178,   134,   207,   208,   108,   104,    83,    82,   114,
     140,    84,   167,   168,   106,   147,   254,   104,   111,   104,
     111,   111,   111,   178,   156,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   167,   168,   209,
     210,   211,   114,    25,   107,    25,   104,   111,   178,   313,
     226,   111,   114,   317,    25,   112,   105,   313,   114,   112,
     112,   317,   113,   104,    25,   105,    25,    25,   245,   246,
     247,   248,   249,   108,   206,    25,   103,   111,   254,   111,
      25,   112,   259,   260,   112,   104,   263,   264,   112,   104,
     245,   246,   108,    25,   249,    25,   273,   267,    25,   276,
     112,   112,   105,   108,   259,   369,   108,   104,   104,   264,
     374,   243,   244,   369,    25,   245,   246,   110,   374,   249,
     108,   108,   108,   104,    25,   108,    19,   305,    59,   259,
     108,   108,   351,   243,   264,   194,   197,   358,   206,    -1,
      -1,   196,    -1,   320,   321,   199,   410,   324,   325,   413,
     198,    -1,    -1,   330,   410,    -1,   333,   413,    -1,   336,
      -1,   338,    -1,   340,    -1,   320,    -1,   344,    -1,    -1,
     325,    -1,   349,    -1,   438,    -1,   346,    -1,    -1,    -1,
      -1,   336,   438,    -1,    -1,    -1,    -1,    -1,    -1,   366,
     320,    -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,
     377,    -1,   379,    -1,   381,    -1,   336,   384,    -1,   386,
      -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,
      -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,   406,
     407,    41,   409,    -1,   411,    -1,    46,    47,    48,    49,
      50,    51,   419,    53,    -1,    55,    -1,   377,    -1,    -1,
      -1,    -1,   429,    -1,   431,    -1,   411,   434,   435,    -1,
     437,    -1,   439,    -1,    -1,    -1,    -1,   444,    -1,    -1,
     447,    -1,   449,    -1,    -1,    -1,    -1,    -1,   455,   434,
     435,   411,   437,    -1,   439,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   447,    -1,   449,    -1,    -1,    -1,    -1,    -1,
     455,    -1,    -1,    -1,   434,   435,    -1,   437,    -1,   439,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,   449,
     130,    -1,    -1,    -1,   134,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    -1,
      53,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,    -1,   207,   208,   209,
     210,   211,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,    -1,    -1,    -1,    -1,   130,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   147,    -1,    37,    -1,    -1,    -1,
      41,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    53,    -1,
      55,    -1,    -1,   313,    -1,    -1,   316,   317,   318,    -1,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,    -1,   207,   208,   209,   210,   211,    -1,
      -1,    -1,   215,    -1,    -1,    -1,   346,   220,    -1,    -1,
      -1,   351,   225,    -1,    -1,   355,   229,    -1,   358,   232,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   369,
     243,   244,   133,   134,   374,    -1,   376,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   130,   147,    -1,    -1,   134,
      -1,    -1,    -1,    -1,   267,   156,   269,    -1,    -1,    -1,
      -1,    -1,   147,    -1,   404,    -1,    -1,    -1,    -1,    -1,
     410,   156,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   306,   195,    -1,    -1,    -1,   438,    -1,
     313,    -1,    -1,   316,   317,   318,    -1,    -1,   193,    -1,
     195,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,
     215,   232,   233,   346,    -1,   220,    -1,    -1,   351,    -1,
     225,    -1,   355,   244,   229,   358,    -1,   232,   233,    -1,
      -1,   252,    -1,    -1,    -1,    -1,   369,    -1,   243,   244,
      -1,   374,    -1,   376,    -1,    -1,    -1,   252,   269,    -1,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,
      -1,   404,   111,    -1,    -1,    -1,    -1,   410,    -1,    -1,
     413,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,
      -1,   424,    -1,    -1,    -1,   316,    -1,   318,    -1,    -1,
      -1,   306,    -1,    -1,    -1,   438,    -1,    -1,   313,    41,
      -1,   316,   317,   318,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    55,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,   355,    14,    -1,   358,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
     355,    -1,    31,   358,    -1,   376,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,   369,    -1,    -1,    -1,    -1,   374,
      49,   376,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,   404,
      -1,    -1,   134,   424,    -1,   410,    -1,    -1,   413,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,   424,
      -1,    -1,    -1,    -1,   156,   104,    -1,    -1,   107,    -1,
      -1,    -1,   111,   438,   113,   114,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,    -1,   207,   208,   209,   210,   211,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,    -1,    -1,
     232,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     252,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,   306,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,   316,    -1,   318,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,   335,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,   346,   347,    -1,    -1,    -1,   351,
      -1,    -1,    -1,   355,    -1,    -1,   358,    -1,    71,    72,
      -1,    41,    -1,    -1,   134,    -1,    46,    47,    48,    49,
      50,    51,    -1,    53,   376,    55,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,   104,    -1,    -1,   107,    -1,    -1,    -1,   111,    -1,
     113,   114,   404,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   424,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,    -1,   207,   208,   209,
     210,   211,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   134,   225,    -1,    -1,    -1,   229,
      -1,    -1,   232,   233,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    -1,   156,    -1,    68,    69,
      70,    -1,   252,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,    -1,   207,   208,   209,
     210,   211,    -1,    -1,    -1,   215,   306,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,   225,   316,    -1,   318,   229,
      -1,    -1,   232,   233,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,   244,   335,    -1,    -1,    -1,    -1,
      -1,    20,   252,    -1,    -1,    -1,   346,   347,    -1,    -1,
      -1,   351,    -1,    -1,    -1,   355,    -1,   267,   358,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,    -1,   376,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    -1,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   404,    -1,   316,    -1,   318,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,   424,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,   347,    -1,    -1,
      -1,   351,    -1,    -1,    -1,   355,    -1,    -1,   358,    -1,
      -1,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   156,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,    -1,   207,
     208,   209,   210,   211,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   424,   194,    -1,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,    -1,    -1,    -1,   194,    -1,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   267,
     207,   208,   209,   210,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,   244,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,   267,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
     267,    39,    -1,    -1,    42,    -1,    -1,   335,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,   346,   347,
      -1,    -1,    -1,   351,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,   335,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,   347,    -1,
      -1,    -1,   351,    -1,    -1,    -1,   104,    -1,   335,   107,
     108,   109,    -1,   111,    -1,   113,   114,    -1,    -1,   346,
     347,    -1,    -1,    -1,   351,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,
     108,   109,    -1,   111,    -1,   113,   114,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,   107,   108,   109,    -1,   111,    -1,   113,   114,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,   107,   108,   109,    -1,   111,    -1,   113,
     114,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,   111,
      -1,   113,   114,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,   107,   108,   109,
      -1,   111,    -1,   113,   114,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,   114,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,   104,    21,
      -1,   107,    24,   109,    -1,   111,    -1,   113,   114,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,   114,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,   114,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,   109,    -1,   111,    -1,   113,   114,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,   109,    -1,   111,    -1,   113,   114,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,   109,    -1,   111,    -1,   113,
     114,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,   109,    -1,   111,
      -1,   113,   114,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,   107,    -1,   109,
      -1,   111,    -1,   113,   114,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,   104,    21,    -1,   107,
      24,   109,    -1,   111,    -1,   113,   114,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
     104,    21,    -1,   107,    24,   109,    -1,   111,    -1,   113,
     114,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,   104,    21,    -1,   107,    24,   109,
      -1,   111,    -1,   113,   114,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,   104,    -1,
      -1,   107,    24,   109,    -1,   111,    -1,   113,   114,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,   105,    -1,   107,    24,   109,   110,   111,
      -1,   113,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   107,
      24,   109,   110,   111,    -1,   113,   114,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,
     104,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,   113,
     114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,   107,   108,    24,
      -1,   111,    -1,   113,   114,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,   107,    24,    -1,    -1,   111,   112,   113,   114,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,   107,   108,    24,    -1,
     111,    -1,   113,   114,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,   107,   108,    24,    -1,   111,    -1,   113,   114,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,   107,    24,    -1,    -1,
     111,   112,   113,   114,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
     107,    24,    -1,    -1,   111,   112,   113,   114,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,   104,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,
     113,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   107,    24,
     109,    -1,   111,    -1,   113,   114,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,   104,
      -1,    -1,   107,    24,    -1,    -1,   111,    -1,   113,   114,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,   104,    -1,    -1,   107,    24,    -1,    -1,
     111,    -1,   113,   114,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,   104,    -1,    -1,
     107,    24,    -1,    -1,   111,    -1,   113,   114,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,
     113,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,   107,   108,
      -1,    37,   111,    39,   113,   114,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,   107,   108,    -1,    37,   111,    39,   113,   114,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,   107,   108,    -1,    37,   111,    39,
     113,   114,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,   107,   108,    -1,
      37,   111,    39,   113,   114,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
     107,   108,    -1,    37,   111,    39,   113,   114,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,   107,   108,    -1,    37,   111,    39,   113,
     114,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,   107,    -1,    -1,    37,
     111,    39,   113,   114,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    68,    69,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,   111,    -1,   113,   114,    68,    69,    70,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    -1,    68,    69,    70,    -1,   108,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    68,    69,
      70,   106,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,   116,   117,   114,     0,   109,   118,    46,   119,
      50,   110,    61,    64,   107,    15,   111,   112,    65,   108,
     109,   120,     3,     4,     5,     6,     7,     8,     9,    12,
      13,    14,    18,    21,    24,    31,    32,    34,    37,    39,
      42,    48,    49,    52,    55,    63,    66,    67,    71,    72,
      81,    85,   104,   107,   110,   111,   113,   114,   120,   121,
     122,   123,   124,   126,   127,   132,   133,   135,   136,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   174,
     175,   176,   177,   178,   179,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   202,   104,   114,   104,   114,
     107,    25,    32,    34,   107,   124,   125,   126,   134,   137,
     147,   185,   191,   175,   177,   185,   104,   107,   147,   148,
     163,   164,   168,   169,   179,   106,   107,   124,   162,   178,
     182,   191,   162,   162,   162,   162,   162,   108,   147,   185,
     191,   112,   147,   110,   122,   104,   104,    25,   108,   124,
     125,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   150,    80,   102,    79,    83,    84,    82,
      73,    74,    75,    76,    77,    78,   101,    66,    67,    68,
      69,    70,    71,    72,   106,   111,   176,   177,   111,   106,
     107,   114,   128,   129,   130,   111,   175,   177,   111,   111,
     104,   104,   104,   107,   127,   138,   140,   146,   148,   163,
     164,   166,   124,   107,   107,   108,   147,    25,    25,   108,
     124,   125,   111,   177,   175,   177,   147,   104,   114,   147,
      25,   124,   125,    25,   108,   124,   125,   108,   177,   111,
     177,   112,   124,    25,   124,   125,    25,   147,   153,   147,
     154,   155,   156,   157,   158,   158,   159,   159,   159,   159,
     185,   189,   191,   161,   161,   162,   162,   162,   114,   147,
     112,   113,   108,   147,   180,   105,    89,   111,   112,   177,
     112,   112,   147,   104,   147,   147,   104,   105,   104,   138,
     147,    25,   124,   125,    25,   108,   124,   125,   124,   124,
      25,   124,   125,    25,   177,   108,   108,   124,    25,   124,
      25,   124,   125,   165,    25,   162,   108,   108,   124,    25,
     124,   103,   111,   111,   112,   105,   108,   129,   109,   131,
     147,   172,   173,   201,   112,   112,   108,   139,   140,   104,
     108,   104,   147,   146,   104,   147,   104,   108,   124,    25,
     124,    25,   124,   125,    25,   124,    25,   124,   165,   124,
     124,   124,    25,   124,   162,   165,   124,   151,   112,   147,
     105,   110,   131,   173,   105,   124,   108,   108,   139,   108,
     104,   108,   139,   104,   104,   147,   125,   124,   124,    25,
     124,   124,   124,   110,   105,   110,   131,   124,   124,   108,
     124,   108,   139,   125,   108,   108,   139,   108,   104,    25,
     124,   110,   124,   124,   108,   125,   125,   108,   125,   108,
     139,   125,   124,   125,   125,   108,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   117,   118,   119,   120,   120,   121,   121,
     122,   122,   122,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   132,   133,   134,   135,
     136,   136,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   138,   138,   139,   140,   140,   141,
     142,   142,   143,   143,   144,   144,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   158,   158,   158,   158,
     158,   158,   159,   160,   160,   160,   161,   161,   161,   161,
     162,   162,   162,   162,   162,   163,   164,   165,   165,   165,
     165,   166,   166,   166,   166,   167,   167,   167,   167,   168,
     169,   170,   170,   170,   171,   171,   171,   171,   171,   171,
     172,   172,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   187,   187,
     187,   188,   188,   189,   190,   190,   190,   191,   192,   193,
     194,   194,   195,   195,   196,   196,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   200,   201,
     201,   201,   201,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,    11,     3,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       3,     1,     3,     1,     1,     1,     5,     7,     7,     5,
       9,     8,     7,     8,     7,     7,     6,     9,     8,     7,
       8,     7,     7,     6,     1,     1,     1,     3,     1,     1,
       3,     2,     3,     2,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     5,     4,     4,     5,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     3,     3,     2,     3,     1,     4,     3,     2,     1,
       3,     3,     2,     3,     3,     4,     3,     3,     1,     3,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     0,     4,     4,     3,
       4,     2,     4,     3,     3,     2,     3,     6,     6,     5,
       6,     4,     6,     5,     5,     4,     5,     3,     6,     5,
       5,     4,     5,     5,     4,     4,     3,     4,     2,     0,
       2,     1,     2,     3,     2,     2,     3,     2,     1,     3,
       2,     2,     1,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("Error: la sentencia si luego sino es incorrecta\n");}
#line 2746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("Error: la sentencia si luego es incorrecta\n");}
#line 2752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("Error : la sentencia mientras es incorrecta\n");}
#line 2758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("Error: ';' esperado\n");}
#line 2788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("Error: la sentencia creacion de arreglo es incorrecta\n");}
#line 2794 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2798 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 510 "parser.y" /* yacc.c:1906  */

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
    //fprintf(stderr, "A.Sintactico: %s\n", s);
    return 0;
}
