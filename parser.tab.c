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

/* Copy the second part of user declarations.  */

#line 237 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  89
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2817

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

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
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    45,    46,    47,    48,    49,    50,    51,
      56,    56,    58,    58,    60,    60,    62,    62,    62,    62,
      62,    64,    64,    66,    66,    68,    70,    74,    75,    76,
      78,    78,    80,    82,    91,    93,    94,    96,    97,    99,
     100,   102,   103,   111,   122,   123,   124,   125,   127,   128,
     132,   134,   135,   137,   138,   140,   141,   143,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   155,   156,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     173,   178,   183,   188,   193,   194,   195,   196,   197,   198,
     199,   204,   206,   208,   213,   215,   216,   217,   218,   220,
     221,   223,   225,   226,   228,   229,   234,   236,   242,   246,
     247,   248,   249,   250,   251,   252,   254,   255,   256,   257,
     258,   259,   260,   262,   263,   265,   267,   268,   273,   274,
     279,   280,   285,   286,   291,   296,   301,   302,   303,   305,
     306,   308,   310,   315,   317,   319,   320,   322,   324,   325,
     326,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   344,   345,   350,   351,   353,   354,   356,
     357,   359,   360,   362,   363,   368,   369,   370,   372,   373,
     374,   375,   376,   377,   380,   381,   382,   383,   388,   389,
     390,   393,   394,   395,   396,   401,   402,   403,   404,   405,
     410,   412,   414,   415,   416,   417,   419,   420,   421,   422,
     424,   426,   431,   432,   433,   434,   439,   445,   446,   451,
     452,   453,   454,   455,   456,   461,   462,   464,   465,   470,
     471,   473,   474,   475,   476,   477,   478,   479,   484,   485,
     486,   487,   489,   490,   492,   494,   495
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
  "INTERRUPCION", "BYTE", "CASO", "CAPTURA", "CARACTER", "CLASE",
  "CONSTANTE", "CONTINUAR", "DEFECTO", "HACER", "DOBLE", "SINO",
  "ENUMERACION", "EXPORTAR", "EXTIENDE", "FINAL", "FINALMENTE", "FLOTANTE",
  "PARA", "IR", "SI", "IMPLEMENTAR", "IMPORTAR", "ENTERO", "INTERFAZ",
  "LARGO", "MODULO", "NATIVO", "NUEVO", "PAQUETE", "PRIVADO", "PROTEGIDO",
  "PUBLICO", "REQUERIR", "RETORNAR", "CORTO", "ESTATICO", "STRICTFP",
  "SUPER", "INTERRUPTOR", "SINCRONIZADO", "ESTO", "LANZAR", "LANZA",
  "TRANSITORIO", "INTENTAR", "VARIABLE", "VACIO", "VOLATIL", "MIENTRAS",
  "OP_SUMA", "OP_RESTA", "OP_MULTIPLICACION", "OP_DIVISION", "OP_MODULO",
  "OP_INCREMENTO", "OP_DECREMENTO", "OP_IGUAL", "OP_DIFERENTE", "OP_MAYOR",
  "OP_MENOR", "OP_MAYOR_IGUAL", "OP_MENOR_IGUAL", "OP_LOG_AND",
  "OP_LOG_OR", "OP_LOG_NOT", "OP_BIN_AND", "OP_BIN_OR", "OP_BIN_XOR",
  "OP_BIN_COMPLEMENTO", "OP_BIN_DESPLAZAMIENTO_IZQ",
  "OP_BIN_DESPLAZAMIENTO_DER", "OP_DESPLAZAMIENTO_DER_LLENADO_CERO",
  "OP_ASIGNACION", "OP_ASIG_SUMA", "OP_ASIG_RESTA",
  "OP_ASIG_MULTIPLICACION", "OP_ASIG_DIVISION", "OP_ASIG_MODULO",
  "OP_ASIG_BIN_DESPLAZAMIENTO_IZQ", "OP_ASIG_BIN_DESPLAZAMIENTO_DER",
  "OP_ASIG_DESPLAZAMIENTO_DER_LLENADO_CERO", "OP_ASIG_BIN_AND",
  "OP_ASIG_BIN_XOR", "OP_ASIG_BIN_OR", "OP_ENVEZDE", "INTERROGACION",
  "DOS_PUNTOS", "PUNTO_COMA", "COMA", "PUNTO", "PARENTESIS_INI",
  "PARENTESIS_FIN", "LLAVE_INI", "LLAVE_FIN", "CORCHETE_INI",
  "CORCHETE_FIN", "FUNC_PRIMITIVA", "IDENTIFICADOR", "$accept", "objetivo",
  "literal", "tipo", "tipoPrimitivo", "tipoNumerico", "tipoIntegral",
  "tipoPuntoFlotante", "tipoReferencia", "tipoClaseInterfaz", "tipoClase",
  "tipoArreglo", "nombre", "nombreSimple", "nombreCalificado",
  "declaracionVariableLocal", "declaradoresVariable", "declaradorVariable",
  "declaradorVariableId", "inicializadorVariable", "parametro",
  "inicializadorArreglo", "inicializadoresVariable", "unidadCompilacion",
  "bloque", "sentenciasBloque", "sentenciaBloque",
  "sentenciaDeclaracionVariableLocal", "sentencia", "sentenciaNoCorto",
  "sentenciaSinSeguimientoSubsentencia", "sentenciaVacia",
  "sentenciaEtiquetada", "sentenciaEtiquetadaNoCorto",
  "sentenciaExpresion", "expresionDeclaracion", "sentenciaSiLuego",
  "sentenciaSiLuegoSino", "sentenciaSiLuegoSinoNoCorto",
  "sentenciaInterruptor", "bloqueInterruptor",
  "gruposSentenciaBloqueInterruptor", "grupoSentenciaBloqueInterruptor",
  "etiquetasInterruptor", "etiquetaInterruptor", "sentenciaMientras",
  "sentenciaMientrasNoCorto", "sentenciaHacer", "sentenciaPara",
  "sentenciaParaNoCorto", "iniciarPara", "actualizarPara",
  "listaExpresionesDeclaracion", "sentenciaInterrupcion",
  "sentenciaContinuar", "sentenciaRetornar", "sentenciaLanzar",
  "sentenciaSincronizado", "sentenciaIntentar", "capturas",
  "clausulaCapturar", "finalmente", "expresionConstante", "expresion",
  "expresionAsignacion", "asignacion", "ladoIzq", "operadorAsignacion",
  "expresionCondicional", "expresionCondicionalOR",
  "expresionCondicionalAND", "expresionOR", "expresionXOR", "expresionAND",
  "expresionIgualdad", "expresionRelacional", "expresionDesplazamiento",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionPreIncremento", "expresionPreDecremento",
  "expresionUnariaNoMasMenos", "expresionSufijo",
  "expresionPostIncremento", "expresionPostDecremento", "expresionCast",
  "accesoCampo", "accesoArreglo", "invocacionMetodo",
  "expresionCreacionInstanciaClase", "listaArgumentos", "primario",
  "primarioNoNuevoArreglo", "expresionCreacionArreglo",
  "expresionesDimension", "expresionDimension", "dimensiones", YY_NULLPTR
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
     365,   366
};
# endif

#define YYPACT_NINF -357

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-357)))

#define YYTABLE_NINF -210

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,  1550,    65,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,   -65,  -357,  -357,   -22,  1818,  -357,  -357,
     -56,   -32,  -357,  -357,   129,  2071,  -357,   -27,    -6,    20,
    -357,  2545,   -81,    27,  2545,  2545,  -357,  2545,  -357,    33,
    -357,   -33,   -12,  -357,  -357,  -357,  -357,  -357,    82,   -45,
    -357,  -357,    41,  -357,  1617,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,    62,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,   165,  -357,  -357,    80,
     114,   135,   681,   747,     4,    17,    96,    84,  -357,  -357,
    -357,   100,  -357,   105,   940,   146,  1105,  2545,  -357,   109,
     109,   119,   121,  2545,  2545,  2545,  2545,  -357,  1952,   125,
    -357,  -357,  -357,   -44,   155,   152,   153,   154,   140,    -5,
      89,   150,   113,  -357,  -357,  -357,  -357,    80,  -357,  -357,
    -357,  -357,  -357,   124,  2545,  2545,   136,     6,  2545,    -4,
    -357,  -357,  -357,  -357,   134,  1818,  -357,   139,  -357,   -37,
     133,   156,   132,  2087,  2139,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  2545,  -357,  -357,   137,  2545,  -357,  -357,  2545,   141,
    2155,  -357,  -357,   143,   161,   162,  2545,   158,  -357,   158,
    2222,  -357,  -357,  -357,  -357,   -48,   999,   166,  -357,  2545,
    2545,  2545,  2545,  2545,  2545,  2545,  2545,  2545,  2545,  2545,
    2545,   129,  2545,  2545,  2545,  2545,  2545,  2545,  2545,  2545,
     168,   171,   172,  -357,   176,   -81,     6,  -357,  -357,   178,
    -357,  -357,   -33,  2561,   175,  -357,  -357,  -357,  -357,  -357,
      -8,  -357,   177,  -357,   -43,   179,  2545,    23,   180,  2274,
    2706,  1885,   181,  2290,  -357,   185,   185,  -357,    15,  2545,
     186,    18,  2290,    32,    34,   155,   187,   152,   153,   154,
     140,    -5,    -5,    89,    89,    89,    89,   -12,  -357,     5,
     150,   150,   150,   113,   113,  -357,  -357,  -357,  2342,   183,
     -81,   129,  -357,  -357,  -357,  1818,  -357,  1751,  -357,  -357,
    -357,  -357,  2545,  -357,  -357,   182,  2409,  -357,   191,  1818,
     192,   161,  1335,   193,   200,  -357,   198,   199,   201,   206,
    -357,   286,   292,  -357,  -357,  -357,  -357,  -357,  -357,   205,
    -357,  -357,  2545,    34,  -357,  2545,   209,  -357,    48,     0,
    -357,  -357,   -33,   218,  -357,   219,  -357,  -357,    55,   166,
    -357,   214,  -357,    59,   225,  -357,  1818,  1818,   223,  1818,
    2613,  2019,  2545,  2545,  1885,  1818,  -357,  -357,  -357,  -357,
    -357,  2545,   229,  -357,    29,  -357,  1411,  -357,   222,   -81,
    -357,  2425,  -357,  -357,  -357,  -357,  -357,  -357,  1818,  -357,
    1818,   228,  2477,   233,   232,   235,  -357,  -357,   242,  -357,
    -357,  -357,  -357,  1483,  -357,  1684,  -357,  -357,  -357,  -357,
    -357,  -357,  1818,  2629,   244,  2493,  1885,  1885,  -357,  -357,
    -357,  1885,   238,  2654,   241,   247,   326,  -357,  -357,  1885,
    1885,   246,  1885,  2684,  1885,  -357,  -357,  1885,  -357,  1885,
     248,  -357,  -357,  -357,  1885,  -357
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    50,     3,     4,     5,     7,     8,
       6,     9,    13,     0,    16,    20,     0,     0,    22,    21,
       0,     0,    18,    19,     0,     0,    17,     0,     0,     0,
     232,     0,     0,     0,     0,     0,    80,     0,    52,    32,
     231,     0,    10,    12,    14,    15,    11,    23,    24,   148,
      30,    31,     0,    69,     0,    54,    55,    56,    58,    70,
      59,    71,     0,    60,    61,    72,    62,    73,    63,    74,
      75,    76,    78,    77,    79,    84,     0,    85,    86,     0,
      87,    88,   235,   236,   237,   234,   206,   229,   230,     1,
     129,     0,   131,     0,   207,     0,     0,     0,    32,     0,
      26,     0,    25,     0,     0,     0,     0,   133,     0,     0,
     144,   145,   146,   163,   165,   167,   169,   171,   173,   175,
     178,   184,   188,   191,   195,   196,   199,   202,   208,   209,
     205,   237,   234,     0,     0,     0,     0,     0,     0,   207,
     200,   235,   236,   201,     0,     0,    39,    34,    36,    37,
       0,     0,     0,     0,     0,    57,    51,    53,    83,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,   210,   211,     0,     0,   128,   130,     0,     0,
       0,   124,   127,     0,   123,     0,     0,   239,   243,   241,
       0,   197,   198,   204,   203,     0,   207,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,   136,   140,   138,     0,
     233,    81,     0,     0,     0,    27,    28,    33,   220,   228,
       0,    29,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,   238,   240,   226,     0,     0,
       0,     0,     0,     0,   233,   166,     0,   168,   170,   172,
     174,   176,   177,   179,   180,   181,   182,     0,   183,    25,
     185,   186,   187,   189,   190,   192,   193,   194,     0,     0,
       0,     0,   142,   139,   137,     0,    35,     0,    38,    42,
      41,    40,     0,   219,   217,     0,     0,   218,     0,     0,
       0,   125,     0,     0,     0,   126,     0,     0,     0,    32,
      91,     0,    58,    65,    66,    67,    68,   244,   246,     0,
     225,   213,     0,     0,   214,     0,     0,   224,     0,     0,
      94,   135,     0,     0,   106,     0,    47,    49,     0,    41,
     227,     0,   222,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   212,   215,   164,
     223,     0,     0,    98,     0,   100,     0,   103,    43,     0,
      46,     0,    45,   216,   221,   108,   114,   113,     0,   111,
       0,     0,     0,     0,     0,     0,    82,    92,     0,   143,
     105,    97,    99,     0,    96,   101,   102,   141,    44,    48,
     112,   110,     0,     0,     0,     0,     0,     0,   104,    95,
     109,     0,     0,     0,     0,     0,     0,   107,   122,     0,
       0,     0,     0,     0,     0,   121,   120,     0,   118,     0,
       0,    93,   119,   117,     0,   116
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -357,  -357,  -357,    61,   -18,  -357,  -357,  -357,   151,   337,
    -357,  -357,   857,  -357,  -357,   -87,  -357,   138,    24,  -280,
    -357,  -357,  -357,  -357,     2,   364,   -51,  -357,   204,  -117,
    -232,  -357,  -357,  -357,  -357,   -92,  -357,  -357,  -357,  -357,
    -357,  -357,    -7,    -3,  -356,  -357,  -357,  -357,  -357,  -357,
       8,  -298,   -86,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
     147,   148,  -357,   945,   207,   -24,  -357,  -357,    37,  -357,
     184,   189,   190,   173,   194,    10,   -39,   -26,     3,   -23,
      -1,    85,  -246,   174,   290,   376,  -357,  1066,  1149,   492,
     581,  -185,  -357,  -357,  -357,   279,  -133,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    40,    41,    42,    43,    44,    45,    46,    47,
     101,    48,    94,    50,    51,    52,   147,   148,   149,   298,
     343,   299,   348,     3,    53,   405,    55,    56,    57,   321,
      58,    59,    60,   323,    61,    62,    63,    64,   324,    65,
     340,   374,   375,   376,   377,    66,   325,    67,    68,   326,
     183,   310,   311,    69,    70,    71,    72,    73,    74,   226,
     227,   228,   398,   239,   110,    75,    76,   171,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    82,    83,   131,
     132,   240,    86,    87,    88,   187,   188,   255
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   111,     4,   157,   182,   258,    99,   111,   305,   181,
     184,   140,   143,   111,   358,   371,    77,   347,   334,   322,
     406,   372,   224,  -207,  -207,     1,     5,     6,     7,     8,
       9,    10,    11,   199,   137,   225,    90,     5,     6,     7,
       8,     9,    10,    11,   371,   256,    91,   406,    96,   233,
     372,   261,   263,    77,   254,   200,   254,   259,   152,   153,
     260,   306,   391,   154,    24,    89,   -25,   207,   208,   209,
     210,   234,    97,   111,    27,    24,   133,    30,   146,    92,
     191,   192,   193,   194,   111,    27,    78,   368,    30,    93,
     195,    34,    35,   211,   302,    77,   150,   303,   134,   152,
     153,   409,    78,   338,   178,   -89,   -89,   373,   152,   -89,
     111,   111,   105,   336,   111,   422,   106,   302,   -90,   -90,
     330,   353,   -90,   332,   135,   431,   329,    37,   309,   111,
     111,   138,   322,   145,    98,   440,   401,   333,   108,    78,
     329,    12,   155,    14,    77,    98,    15,   111,   172,   173,
     302,   111,    18,   370,   111,   182,   111,   381,   315,    19,
     382,   302,   111,   158,   384,    22,   111,    23,   273,   274,
     275,   276,   212,   213,   214,    79,   111,    26,   217,   218,
     219,    78,  -208,  -208,   322,   322,   280,   281,   282,   322,
     151,    79,   175,   277,   285,   286,   287,   322,   322,   174,
     322,   176,   322,  -209,  -209,   322,   177,   322,   179,   111,
     205,   206,   322,   215,   216,   271,   272,   186,   283,   284,
     182,    95,   111,   190,   152,   111,   198,   292,    79,   111,
      78,   201,   202,   204,   203,   220,   331,   223,   111,   230,
      98,   232,   235,   237,   249,   246,    77,   396,   244,    77,
      77,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   250,   111,   236,   253,   251,   182,   182,
      79,   264,   288,   111,   181,   184,   289,   290,   111,   195,
     291,   312,   111,   295,   301,   351,   304,   335,   307,   339,
     327,    80,   341,   329,    77,   328,   354,   356,   359,   426,
     427,   360,   361,   362,   428,   363,   364,    80,    77,   367,
     365,    77,   435,   436,   366,   438,   -64,   441,   241,    79,
     442,   182,   443,   379,   380,   383,   385,   445,   388,   400,
     234,   182,    78,   412,   415,    78,    78,   416,   111,   111,
     417,   182,   418,   429,    80,   423,   432,   111,   433,   231,
     434,   437,   342,   444,   157,    77,    77,   111,    77,    77,
      77,   100,   278,    77,    77,    54,   378,   402,   111,   393,
     296,   403,   369,   293,   294,    77,   269,    81,   243,   189,
      78,   407,     0,   265,     0,     0,    80,    77,     0,    77,
     267,   111,   268,    81,    78,     0,     0,    78,   270,     0,
       0,     0,    77,     0,    77,     0,     0,     0,     0,     0,
       0,    77,    77,     0,     0,    77,    77,     0,     0,     0,
      77,    79,    77,     0,    79,    79,     0,     0,    77,    77,
      81,    77,    77,    77,     0,    80,    77,     0,    77,     0,
       0,    78,    78,    77,    78,    78,    78,     0,     0,    78,
      78,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    81,    78,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,    79,     0,    78,     0,
      78,     0,     0,    84,     0,     0,     0,    78,    78,   344,
       0,    78,    78,     0,     0,     0,    78,     0,    78,    84,
       0,     0,     0,   355,    78,    78,     0,    78,    78,    78,
       0,    81,    78,     0,    78,     0,     0,     0,     0,    78,
      79,    79,     0,    79,    79,    79,     0,    80,    79,    79,
      80,    80,     0,     0,     0,     0,    84,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     386,   387,    79,   389,    79,     0,     0,     0,   231,   397,
       0,     0,     0,     0,     0,     0,     0,    79,     0,    79,
       0,     0,    85,     0,     0,    80,    79,    79,    84,     0,
      79,    79,   410,     0,   411,    79,     0,    79,    85,    80,
       0,     0,    80,    79,    79,     0,    79,    79,    79,     0,
       0,    79,     0,    79,     0,     0,   420,     0,    79,     0,
     320,   344,     0,    81,     0,   355,    81,    81,     0,     0,
       0,     0,     0,   386,   387,    85,   389,    84,   397,     0,
       0,   410,     0,   411,     0,     0,    80,    80,   420,    80,
      80,    80,     0,     0,    80,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,    85,    80,     0,
      80,     0,     0,     0,     0,    81,     0,     0,    81,     0,
       0,     0,     0,    80,     0,    80,     0,     0,     0,     0,
       0,     0,    80,    80,     0,     0,    80,    80,     0,     0,
       0,    80,     0,    80,     0,     0,     0,     0,     0,    80,
      80,     0,    80,    80,    80,     0,    85,    80,     0,    80,
       0,     0,    81,    81,    80,    81,    81,    81,     0,    84,
      81,    81,    84,    84,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    81,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,    81,
       0,    81,     0,     0,     0,     0,     0,    84,    81,    81,
       0,     0,    81,    81,     0,     0,     0,    81,     0,    81,
       0,    84,     0,     0,    84,    81,    81,     0,    81,    81,
      81,     0,     0,    81,     0,    81,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    85,    85,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,     0,     0,     0,    84,    84,
       0,    84,    84,    84,     0,     0,    84,    84,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
      84,   102,    84,     0,     0,     0,     0,     0,     0,     0,
      85,   139,   139,    85,     0,    84,     0,    84,     0,     0,
       0,     0,     0,     0,    84,    84,     0,     0,    84,    84,
       0,    49,     0,    84,     0,    84,     0,     0,     0,     0,
       0,    84,    84,     0,    84,    84,    84,     0,     0,    84,
       0,    84,     0,     0,     0,     0,    84,    85,    85,     0,
      85,    85,    85,     0,     0,    85,    85,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,    85,     0,     0,
     139,   139,   139,   139,     0,   196,     0,     0,     0,    85,
     109,    85,     0,     0,     0,     0,   136,     0,     0,     0,
       0,     0,   144,     0,    85,     0,    85,     0,     0,     0,
       0,     0,     0,    85,    85,     0,     0,    85,    85,     0,
       0,     0,    85,     0,    85,     0,     0,     0,     0,     0,
      85,    85,     0,    85,    85,    85,     0,     0,    85,     0,
      85,     0,     0,     0,     0,    85,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,     0,     0,
       0,     0,   185,   152,   153,     0,     0,     0,   178,     0,
       0,     0,     0,   197,     0,     0,   139,     0,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   279,   139,
     139,   139,   139,   139,   139,   139,   139,     0,     0,   221,
     222,     0,     0,   229,     0,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,     0,     0,   242,
     141,   141,   152,   153,     0,     0,     0,   262,     5,     6,
       7,     8,     9,    10,    11,     0,   139,    12,     0,    14,
     245,   139,    15,   242,     0,   248,     0,     0,    18,     0,
       0,   252,     0,     0,     0,    19,     0,     0,     0,     0,
       0,    22,     0,    23,     0,   266,    24,     0,   279,     0,
       0,     0,     0,    26,   196,     0,    27,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
     141,   141,   141,    34,    35,     0,     0,     0,   300,     0,
       0,     0,     0,   142,   142,     0,     0,     0,     0,   139,
     139,   308,   139,     0,   314,     0,     0,     0,   252,     0,
       0,     0,     0,     0,     0,     0,   180,   242,     0,    37,
       0,     0,     0,     0,     0,     0,    98,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,     0,     0,   350,     0,     0,
       0,     0,   142,   142,   142,   142,     0,     0,     0,     0,
      49,     0,    49,     0,     0,   141,     0,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,     0,   141,   141,
     141,   141,   141,   141,   141,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,     0,
       0,     0,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,   141,   300,     0,     0,     0,
     141,     0,     0,     0,     0,     0,     0,   414,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   142,     0,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     425,   142,   142,   142,   142,   142,   142,   142,   142,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,   141,   141,
       0,   141,     0,    34,    35,     0,     0,     0,   142,     0,
       0,     0,     0,   142,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,    13,    14,   371,     0,    15,     0,
       0,    16,   372,    17,    18,     0,     0,     0,     0,    37,
     357,    19,    20,     0,    21,     0,    98,    22,     0,    23,
       0,     0,    24,     0,     0,     0,     0,     0,    25,    26,
       0,     0,    27,    28,    29,    30,    31,     0,     0,    32,
       0,     0,     0,    33,     0,     0,     0,     0,     0,    34,
      35,   142,   142,     0,   142,     0,     5,     6,     7,     8,
       9,    10,    11,     0,     0,    12,    13,    14,   371,     0,
      15,     0,     0,    16,   372,    17,    18,     0,     0,     0,
       0,     0,    36,    19,    20,    37,    21,     1,   404,    22,
       0,    23,    39,     0,    24,     0,     0,     0,     0,     0,
      25,    26,     0,     0,    27,    28,    29,    30,    31,     0,
       0,    32,     0,     0,     0,    33,     0,     0,     0,     0,
       0,    34,    35,     5,     6,     7,     8,     9,    10,    11,
       0,     0,    12,    13,    14,     0,     0,    15,     0,     0,
      16,     0,    17,    18,     0,     0,     0,     0,     0,     0,
      19,    20,     0,    21,    36,     0,    22,    37,    23,     1,
     419,    24,     0,     0,    39,     0,     0,    25,    26,     0,
       0,    27,    28,    29,    30,    31,     0,     0,    32,     0,
       0,     0,    33,     0,     0,     0,     0,     0,    34,    35,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
      13,    14,     0,     0,    15,     0,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,    19,    20,     0,
      21,    36,     0,    22,    37,    23,     1,    38,    24,     0,
       0,    39,     0,     0,    25,    26,     0,     0,    27,    28,
      29,    30,    31,     0,     0,    32,     0,     0,     0,    33,
       0,     0,     0,     0,     0,    34,    35,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,    13,    14,     0,
       0,    15,     0,     0,    16,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,     0,    21,    36,     0,
      22,    37,    23,     1,   156,    24,     0,     0,    39,     0,
       0,    25,    26,     0,     0,    27,    28,    29,    30,    31,
       0,     0,    32,     0,     0,     0,    33,     0,     0,     0,
       0,     0,    34,    35,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,     0,    14,     0,     0,    15,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,    36,     0,    22,    37,    23,
       1,     0,    24,     0,     0,    39,     0,     0,     0,    26,
       0,     0,    27,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,     0,     0,     0,    34,
      35,     5,     6,     7,     8,     9,    10,    11,     0,   105,
       0,    13,     0,   106,     0,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,    21,     0,   345,     0,   297,   346,     0,     0,    24,
       0,     0,    98,     0,     0,    25,     0,     0,     0,    27,
      28,    29,    30,    31,     0,     0,    32,     0,     0,     0,
      33,     0,     0,     0,     0,     0,    34,    35,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,    16,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,   316,     0,   317,    36,
       0,     0,    37,     0,     1,     0,    24,     0,     0,    39,
       0,     0,    25,     0,     0,     0,    27,    28,    29,    30,
      31,     0,     0,    32,     0,     0,     0,   318,     0,     0,
       0,     0,     0,    34,    35,     5,     6,     7,     8,     9,
      10,    11,     0,     0,    12,     0,    14,     0,     0,    15,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    36,     0,    22,    37,
      23,     1,     0,    24,     0,     0,   319,     0,     0,     0,
      26,     0,     0,    27,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,   103,   104,     0,     0,     0,
      34,    35,     5,     6,     7,     8,     9,    10,    11,     0,
     105,    12,     0,    14,   106,     0,    15,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,    22,   108,    23,     0,     0,
      24,     0,     0,    98,     0,     0,     0,    26,     0,     0,
      27,     0,     0,    30,     5,     6,     7,     8,     9,    10,
      11,     0,     0,     0,     0,     0,     0,    34,    35,     0,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
     392,     0,    27,    37,     0,    30,     0,     0,    24,     0,
      98,     0,     0,     0,   103,   104,     0,     0,    27,    34,
      35,    30,     5,     6,     7,     8,     9,    10,    11,   105,
     103,   104,     0,   106,     0,    34,    35,     0,     5,     6,
       7,     8,     9,    10,    11,   105,     0,     0,     0,   106,
       0,     0,   107,     0,     0,   108,     0,     0,     0,     0,
      24,     0,    98,     0,     0,     0,     0,     0,     0,     0,
      27,   108,   238,    30,     0,     0,    24,     0,    98,     0,
       0,     0,   103,   104,     0,     0,    27,    34,    35,    30,
       0,     0,     0,     0,     0,     0,     0,   105,   103,   104,
       0,   106,     0,    34,    35,     5,     6,     7,     8,     9,
      10,    11,     0,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,   108,     0,     0,     0,     0,   241,     0,
      98,     0,     0,     0,     0,     0,   247,     0,     0,   108,
       0,     0,     0,    24,     0,     0,    98,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    30,     5,     6,     7,
       8,     9,    10,    11,     0,   103,   104,     0,     0,     0,
      34,    35,     0,     5,     6,     7,     8,     9,    10,    11,
     105,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,   108,   257,    30,     0,
       0,    24,     0,    98,     0,     0,     0,   103,   104,     0,
       0,    27,    34,    35,    30,     5,     6,     7,     8,     9,
      10,    11,   105,   103,   104,     0,   106,     0,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,     0,   106,     0,     0,   313,     0,     0,   108,     0,
       0,     0,     0,    24,     0,    98,     0,     0,     0,     0,
       0,     0,     0,    27,   108,     0,    30,     0,     0,   328,
       0,    98,     0,     0,     0,   103,   104,     0,     0,     0,
      34,    35,     5,     6,     7,     8,     9,    10,    11,     0,
     105,     0,     0,     0,   106,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   337,     0,     0,
      24,     0,     0,    98,     0,     0,     0,     0,     0,     0,
      27,     0,     0,    30,     0,     0,    24,     0,     0,     0,
       0,     0,   103,   104,     0,     0,    27,    34,    35,    30,
       5,     6,     7,     8,     9,    10,    11,   105,   103,   104,
       0,   106,     0,    34,    35,     0,     5,     6,     7,     8,
       9,    10,    11,   105,     0,     0,     0,   106,     0,     0,
       0,     0,     0,   108,   352,     0,     0,     0,    24,     0,
      98,     0,     0,     0,     0,     0,     0,     0,    27,   297,
     408,    30,     0,     0,    24,     0,    98,     0,     0,     0,
     103,   104,     0,     0,    27,    34,    35,    30,     5,     6,
       7,     8,     9,    10,    11,   105,   103,   104,     0,   106,
       0,    34,    35,     0,     5,     6,     7,     8,     9,    10,
      11,   105,     0,     0,     0,   106,     0,     0,   413,     0,
       0,   108,     0,     0,     0,     0,    24,     0,    98,     0,
       0,     0,     0,     0,   424,     0,    27,   108,     0,    30,
       0,     0,    24,     0,    98,     0,     0,     0,   103,   104,
       0,     0,    27,    34,    35,    30,     5,     6,     7,     8,
       9,    10,    11,   105,   103,   104,     0,   106,     0,    34,
      35,     0,     5,     6,     7,     8,     9,    10,    11,   105,
       0,     0,     0,   106,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,    24,     0,    98,     5,     6,     7,
       8,     9,    10,    11,    27,   297,     0,    30,     0,     0,
      24,     0,    98,     0,     0,     0,     0,     0,     0,     0,
      27,    34,    35,    30,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,     0,    24,     0,    34,    35,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    30,     5,
       6,     7,     8,     9,    10,    11,     0,    37,   390,     0,
       0,     0,    34,    35,    98,    24,     0,     0,     0,     0,
       0,     0,     0,    37,   421,    27,     0,     0,    30,     0,
      98,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,    34,    35,     0,     0,     0,    27,    37,   430,
      30,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,   439,
       0,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       1,    25,     0,    54,    96,   190,    24,    31,    51,    96,
      96,    34,    35,    37,   312,    15,    17,   297,   264,   251,
     376,    21,    16,    68,    69,   106,     3,     4,     5,     6,
       7,     8,     9,    77,    32,    29,   101,     3,     4,     5,
       6,     7,     8,     9,    15,   189,   111,   403,   104,    86,
      21,   195,   196,    54,   187,    99,   189,   105,   103,   104,
     108,   104,   360,   108,    41,     0,   111,    72,    73,    74,
      75,   108,   104,    97,    51,    41,   103,    54,   111,   101,
     103,   104,   105,   106,   108,    51,     1,   333,    54,   111,
     108,    68,    69,    98,   102,    96,   108,   105,   104,   103,
     104,   381,    17,   288,   108,   101,   102,   107,   103,   105,
     134,   135,    78,   108,   138,   413,    82,   102,   101,   102,
     105,   306,   105,   105,   104,   423,   108,   104,   105,   153,
     154,   104,   364,   100,   111,   433,   107,   105,   104,    54,
     108,    12,   101,    14,   145,   111,    17,   171,    68,    69,
     102,   175,    23,   105,   178,   247,   180,   102,   250,    30,
     105,   102,   186,   101,   105,    36,   190,    38,   207,   208,
     209,   210,    83,    84,    85,     1,   200,    48,    65,    66,
      67,    96,    68,    69,   416,   417,   212,   213,   214,   421,
     108,    17,   108,   211,   217,   218,   219,   429,   430,   103,
     432,   101,   434,    68,    69,   437,   101,   439,    62,   233,
      70,    71,   444,    63,    64,   205,   206,   108,   215,   216,
     312,    17,   246,   104,   103,   249,   101,   225,    54,   253,
     145,    76,    80,    79,    81,   111,   259,   101,   262,   105,
     111,   102,   109,   111,   101,   104,   247,   364,   111,   250,
     251,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   102,   288,   109,   108,   105,   360,   361,
      96,   105,   104,   297,   361,   361,   105,   105,   302,   297,
     104,   101,   306,   105,   109,   103,   109,   100,   109,   106,
     109,     1,   290,   108,   295,   109,   105,   105,   105,   416,
     417,   101,   104,   104,   421,   104,   100,    17,   309,   332,
      24,   312,   429,   430,   109,   432,    24,   434,   109,   145,
     437,   413,   439,   105,   105,   111,   101,   444,   105,   100,
     108,   423,   247,   105,   101,   250,   251,   105,   362,   363,
     105,   433,   100,   105,    54,   101,   105,   371,   101,   145,
      24,   105,   291,   105,   405,   356,   357,   381,   359,   360,
     361,    24,   211,   364,   365,     1,   342,   374,   392,   361,
     232,   374,   335,   226,   226,   376,   203,     1,   171,   100,
     295,   379,    -1,   199,    -1,    -1,    96,   388,    -1,   390,
     201,   415,   202,    17,   309,    -1,    -1,   312,   204,    -1,
      -1,    -1,   403,    -1,   405,    -1,    -1,    -1,    -1,    -1,
      -1,   412,   413,    -1,    -1,   416,   417,    -1,    -1,    -1,
     421,   247,   423,    -1,   250,   251,    -1,    -1,   429,   430,
      54,   432,   433,   434,    -1,   145,   437,    -1,   439,    -1,
      -1,   356,   357,   444,   359,   360,   361,    -1,    -1,   364,
     365,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
      -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
      -1,    -1,    96,   388,    -1,   390,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,   312,    -1,   403,    -1,
     405,    -1,    -1,     1,    -1,    -1,    -1,   412,   413,   295,
      -1,   416,   417,    -1,    -1,    -1,   421,    -1,   423,    17,
      -1,    -1,    -1,   309,   429,   430,    -1,   432,   433,   434,
      -1,   145,   437,    -1,   439,    -1,    -1,    -1,    -1,   444,
     356,   357,    -1,   359,   360,   361,    -1,   247,   364,   365,
     250,   251,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
     376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   388,   359,   390,    -1,    -1,    -1,   364,   365,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,   405,
      -1,    -1,     1,    -1,    -1,   295,   412,   413,    96,    -1,
     416,   417,   388,    -1,   390,   421,    -1,   423,    17,   309,
      -1,    -1,   312,   429,   430,    -1,   432,   433,   434,    -1,
      -1,   437,    -1,   439,    -1,    -1,   412,    -1,   444,    -1,
     416,   417,    -1,   247,    -1,   421,   250,   251,    -1,    -1,
      -1,    -1,    -1,   429,   430,    54,   432,   145,   434,    -1,
      -1,   437,    -1,   439,    -1,    -1,   356,   357,   444,   359,
     360,   361,    -1,    -1,   364,   365,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    96,   388,    -1,
     390,    -1,    -1,    -1,    -1,   309,    -1,    -1,   312,    -1,
      -1,    -1,    -1,   403,    -1,   405,    -1,    -1,    -1,    -1,
      -1,    -1,   412,   413,    -1,    -1,   416,   417,    -1,    -1,
      -1,   421,    -1,   423,    -1,    -1,    -1,    -1,    -1,   429,
     430,    -1,   432,   433,   434,    -1,   145,   437,    -1,   439,
      -1,    -1,   356,   357,   444,   359,   360,   361,    -1,   247,
     364,   365,   250,   251,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,   390,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   403,
      -1,   405,    -1,    -1,    -1,    -1,    -1,   295,   412,   413,
      -1,    -1,   416,   417,    -1,    -1,    -1,   421,    -1,   423,
      -1,   309,    -1,    -1,   312,   429,   430,    -1,   432,   433,
     434,    -1,    -1,   437,    -1,   439,    -1,    -1,    -1,    -1,
     444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,   250,   251,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,   356,   357,
      -1,   359,   360,   361,    -1,    -1,   364,   365,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,
     388,    24,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    34,    35,   312,    -1,   403,    -1,   405,    -1,    -1,
      -1,    -1,    -1,    -1,   412,   413,    -1,    -1,   416,   417,
      -1,    54,    -1,   421,    -1,   423,    -1,    -1,    -1,    -1,
      -1,   429,   430,    -1,   432,   433,   434,    -1,    -1,   437,
      -1,   439,    -1,    -1,    -1,    -1,   444,   356,   357,    -1,
     359,   360,   361,    -1,    -1,   364,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,   376,    -1,    -1,
     103,   104,   105,   106,    -1,   108,    -1,    -1,    -1,   388,
      25,   390,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,   403,    -1,   405,    -1,    -1,    -1,
      -1,    -1,    -1,   412,   413,    -1,    -1,   416,   417,    -1,
      -1,    -1,   421,    -1,   423,    -1,    -1,    -1,    -1,    -1,
     429,   430,    -1,   432,   433,   434,    -1,    -1,   437,    -1,
     439,    -1,    -1,    -1,    -1,   444,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    97,   103,   104,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,   108,    -1,    -1,   199,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,    -1,    -1,   134,
     135,    -1,    -1,   138,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,   154,
      34,    35,   103,   104,    -1,    -1,    -1,   108,     3,     4,
       5,     6,     7,     8,     9,    -1,   259,    12,    -1,    14,
     175,   264,    17,   178,    -1,   180,    -1,    -1,    23,    -1,
      -1,   186,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    -1,   200,    41,    -1,   291,    -1,
      -1,    -1,    -1,    48,   297,    -1,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,    68,    69,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,   332,
     333,   246,   335,    -1,   249,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   262,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,   361,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,   302,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
     403,    -1,   405,    -1,    -1,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    -1,   212,   213,
     214,   215,   216,   217,   218,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,   363,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,   381,    -1,    -1,    -1,
     264,    -1,    -1,    -1,    -1,    -1,    -1,   392,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     415,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,   333,
      -1,   335,    -1,    68,    69,    -1,    -1,    -1,   259,    -1,
      -1,    -1,    -1,   264,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    -1,   104,
     105,    30,    31,    -1,    33,    -1,   111,    36,    -1,    38,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,   332,   333,    -1,   335,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,   101,    30,    31,   104,    33,   106,   107,    36,
      -1,    38,   111,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,   101,    -1,    36,   104,    38,   106,
     107,    41,    -1,    -1,   111,    -1,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,   101,    -1,    36,   104,    38,   106,   107,    41,    -1,
      -1,   111,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,   101,    -1,
      36,   104,    38,   106,   107,    41,    -1,    -1,   111,    -1,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,   101,    -1,    36,   104,    38,
     106,    -1,    41,    -1,    -1,   111,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    68,
      69,     3,     4,     5,     6,     7,     8,     9,    -1,    78,
      -1,    13,    -1,    82,    -1,    -1,    -1,    -1,    20,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,   102,    -1,   104,   105,    -1,    -1,    41,
      -1,    -1,   111,    -1,    -1,    47,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,   101,
      -1,    -1,   104,    -1,   106,    -1,    41,    -1,    -1,   111,
      -1,    -1,    47,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,   101,    -1,    36,   104,
      38,   106,    -1,    41,    -1,    -1,   111,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    69,     3,     4,     5,     6,     7,     8,     9,    -1,
      78,    12,    -1,    14,    82,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,   104,    38,    -1,    -1,
      41,    -1,    -1,   111,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    51,   104,    -1,    54,    -1,    -1,    41,    -1,
     111,    -1,    -1,    -1,    63,    64,    -1,    -1,    51,    68,
      69,    54,     3,     4,     5,     6,     7,     8,     9,    78,
      63,    64,    -1,    82,    -1,    68,    69,    -1,     3,     4,
       5,     6,     7,     8,     9,    78,    -1,    -1,    -1,    82,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      41,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,   104,   105,    54,    -1,    -1,    41,    -1,   111,    -1,
      -1,    -1,    63,    64,    -1,    -1,    51,    68,    69,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    63,    64,
      -1,    82,    -1,    68,    69,     3,     4,     5,     6,     7,
       8,     9,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,    41,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    54,     3,     4,     5,
       6,     7,     8,     9,    -1,    63,    64,    -1,    -1,    -1,
      68,    69,    -1,     3,     4,     5,     6,     7,     8,     9,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,   104,   105,    54,    -1,
      -1,    41,    -1,   111,    -1,    -1,    -1,    63,    64,    -1,
      -1,    51,    68,    69,    54,     3,     4,     5,     6,     7,
       8,     9,    78,    63,    64,    -1,    82,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    41,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,   104,    -1,    54,    -1,    -1,   109,
      -1,   111,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      68,    69,     3,     4,     5,     6,     7,     8,     9,    -1,
      78,    -1,    -1,    -1,    82,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      41,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    51,    68,    69,    54,
       3,     4,     5,     6,     7,     8,     9,    78,    63,    64,
      -1,    82,    -1,    68,    69,    -1,     3,     4,     5,     6,
       7,     8,     9,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    41,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,   104,
     105,    54,    -1,    -1,    41,    -1,   111,    -1,    -1,    -1,
      63,    64,    -1,    -1,    51,    68,    69,    54,     3,     4,
       5,     6,     7,     8,     9,    78,    63,    64,    -1,    82,
      -1,    68,    69,    -1,     3,     4,     5,     6,     7,     8,
       9,    78,    -1,    -1,    -1,    82,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    41,    -1,   111,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    51,   104,    -1,    54,
      -1,    -1,    41,    -1,   111,    -1,    -1,    -1,    63,    64,
      -1,    -1,    51,    68,    69,    54,     3,     4,     5,     6,
       7,     8,     9,    78,    63,    64,    -1,    82,    -1,    68,
      69,    -1,     3,     4,     5,     6,     7,     8,     9,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    41,    -1,   111,     3,     4,     5,
       6,     7,     8,     9,    51,   104,    -1,    54,    -1,    -1,
      41,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    68,    69,    54,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    41,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,     3,
       4,     5,     6,     7,     8,     9,    -1,   104,   105,    -1,
      -1,    -1,    68,    69,   111,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,    51,    -1,    -1,    54,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    68,    69,    -1,    -1,    -1,    51,   104,   105,
      54,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,   111
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   106,   113,   135,   136,     3,     4,     5,     6,     7,
       8,     9,    12,    13,    14,    17,    20,    22,    23,    30,
      31,    33,    36,    38,    41,    47,    48,    51,    52,    53,
      54,    55,    58,    62,    68,    69,   101,   104,   107,   111,
     114,   115,   116,   117,   118,   119,   120,   121,   123,   124,
     125,   126,   127,   136,   137,   138,   139,   140,   142,   143,
     144,   146,   147,   148,   149,   151,   157,   159,   160,   165,
     166,   167,   168,   169,   170,   177,   178,   192,   193,   195,
     196,   197,   199,   200,   201,   202,   204,   205,   206,     0,
     101,   111,   101,   111,   124,   140,   104,   104,   111,   116,
     121,   122,   124,    63,    64,    78,    82,   101,   104,   175,
     176,   177,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   201,   202,   103,   104,   104,   175,   136,   104,   124,
     191,   199,   200,   191,   175,   100,   111,   128,   129,   130,
     108,   108,   103,   104,   108,   101,   107,   138,   101,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   179,    68,    69,   103,   108,   101,   101,   108,    62,
     101,   127,   147,   162,   164,   175,   108,   207,   208,   207,
     104,   191,   191,   191,   191,   116,   124,   175,   101,    77,
      99,    76,    80,    81,    79,    70,    71,    72,    73,    74,
      75,    98,    83,    84,    85,    63,    64,    65,    66,    67,
     111,   175,   175,   101,    16,    29,   171,   172,   173,   175,
     105,   140,   102,    86,   108,   109,   109,   111,   105,   175,
     203,   109,   175,   176,   111,   175,   104,   101,   175,   101,
     102,   105,   175,   108,   208,   209,   209,   105,   203,   105,
     108,   209,   108,   209,   105,   182,   175,   183,   184,   185,
     186,   187,   187,   188,   188,   188,   188,   116,   120,   124,
     189,   189,   189,   190,   190,   191,   191,   191,   104,   105,
     105,   104,   136,   172,   173,   105,   129,   104,   131,   133,
     175,   109,   102,   105,   109,    51,   104,   109,   175,   105,
     163,   164,   101,   101,   175,   147,    31,    33,    62,   111,
     140,   141,   142,   145,   150,   158,   161,   109,   109,   108,
     105,   191,   105,   105,   194,   100,   108,   105,   203,   106,
     152,   136,   115,   132,   140,   102,   105,   131,   134,   175,
     175,   103,   105,   203,   105,   140,   105,   105,   163,   105,
     101,   104,   104,   104,   100,    24,   109,   191,   194,   180,
     105,    15,    21,   107,   153,   154,   155,   156,   130,   105,
     105,   102,   105,   111,   105,   101,   140,   140,   105,   140,
     105,   163,   101,   162,   175,   175,   141,   140,   174,   175,
     100,   107,   154,   155,   107,   137,   156,   136,   105,   131,
     140,   140,   105,   101,   175,   101,   105,   105,   100,   107,
     140,   105,   163,   101,   101,   175,   141,   141,   141,   105,
     105,   163,   105,   101,    24,   141,   141,   105,   141,   105,
     163,   141,   141,   141,   105,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   139,   140,   140,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   144,   145,   146,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   150,   151,   152,   152,   152,   152,   153,
     153,   154,   155,   155,   156,   156,   157,   158,   159,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   169,   170,   170,   170,   171,
     171,   172,   173,   174,   175,   176,   176,   177,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   186,   187,   187,
     187,   187,   187,   187,   188,   188,   188,   188,   189,   189,
     189,   190,   190,   190,   190,   191,   191,   191,   191,   191,
     192,   193,   194,   194,   194,   194,   195,   195,   195,   195,
     196,   197,   198,   198,   198,   198,   199,   200,   200,   201,
     201,   201,   201,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   205,   205,   205,   205,   205,   206,   206,
     206,   206,   207,   207,   208,   209,   209
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     3,     2,     3,     1,     1,     3,     1,
       3,     1,     1,     2,     4,     3,     3,     2,     3,     1,
       1,     3,     2,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     7,     5,     4,     3,     3,     2,     2,
       1,     2,     2,     1,     3,     2,     5,     5,     7,     9,
       8,     7,     8,     7,     7,     6,     9,     8,     7,     8,
       7,     7,     6,     1,     1,     1,     3,     1,     3,     2,
       3,     2,     3,     2,     3,     5,     3,     4,     3,     2,
       1,     5,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     5,     4,     4,     5,     6,     4,     4,     4,
       3,     6,     5,     6,     5,     5,     4,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     4,     3,
       4,     3,     2,     1,     3,     3,     2
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
        case 50:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("la unidad de compilacion se ejecuto correctamente\n");}
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("la declaracion de variable local es valida\n");}
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia de expresion es valida\n");}
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego es valida\n");}
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego sino es valida\n");}
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego sino no corto es valida\n");}
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia interruptor es valida\n");}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia mientras es valida\n");}
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia mientras no corto es valida\n");}
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 242 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia hacer es valida\n");}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia para es valida\n");}
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia para no corto es valida\n");}
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2234 "parser.tab.c" /* yacc.c:1646  */
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
#line 497 "parser.y" /* yacc.c:1906  */

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
