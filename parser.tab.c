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
#define YYFINAL  103
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5057

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  416
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  446

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
       0,    38,    38,    41,    46,    47,    50,    51,    52,    53,
      54,    56,    58,    60,    61,    62,    63,    64,    66,    67,
      68,    70,    71,    72,    73,    75,    76,    78,    79,    80,
      82,    83,    87,    89,    90,    92,    93,    95,    96,    98,
      99,   101,   106,   108,   110,   115,   117,   122,   123,   124,
     125,   126,   127,   128,   130,   131,   132,   133,   134,   135,
     136,   137,   137,   138,   140,   141,   145,   150,   155,   156,
     157,   158,   159,   164,   165,   167,   169,   170,   171,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   189,   190,   195,   196,   198,   199,   201,   202,   204,
     205,   207,   208,   213,   214,   215,   217,   218,   219,   220,
     221,   222,   227,   230,   231,   232,   235,   236,   237,   238,
     243,   244,   245,   246,   247,   252,   254,   259,   260,   261,
     263,   264,   265,   266,   271,   273,   278,   279,   281,   283,
     284,   285,   286,   287,   292,   293,   294,   295,   297,   298,
     303,   304,   306,   307,   309,   311,   312,   317,   323,   324,
     329,   330,   331,   332,   333,   334,   335,   340,   340,   342,
     342,   344,   344,   346,   346,   346,   346,   346,   348,   348,
     350,   352,   353,   354,   356,   362,   363,   368,   371,   374,
     378,   379,   380,   381,   382,   384,   385,   386,   387,   388,
     389,   391,   392,   393,   394,   395,   397,   398,   399,   400,
     401,   405,   406,   407,   408,   409,   410,   412,   413,   414,
     415,   416,   417,   418,   420,   421,   422,   423,   424,   426,
     427,   428,   429,   430,   431,   434,   435,   436,   437,   438,
     439,   440,   443,   444,   445,   446,   447,   448,   449,   451,
     452,   453,   454,   455,   457,   458,   459,   460,   461,   464,
     465,   466,   467,   468,   470,   471,   472,   473,   474,   475,
     477,   478,   479,   480,   481,   484,   485,   486,   487,   488,
     492,   493,   494,   495,   496,   497,   499,   500,   501,   502,
     503,   504,   505,   507,   508,   509,   510,   511,   513,   514,
     515,   516,   517,   518,   521,   522,   523,   524,   525,   526,
     527,   530,   531,   532,   533,   534,   535,   536,   538,   539,
     540,   541,   542,   544,   545,   546,   547,   548,   551,   552,
     553,   554,   555,   557,   558,   559,   560,   561,   562,   564,
     565,   566,   567,   568,   571,   572,   573,   574,   575,   582,
     583,   584,   585,   586,   588,   589,   590,   591,   592,   593,
     595,   596,   597,   598,   599,   601,   602,   603,   604,   605,
     608,   609,   610,   611,   612,   614,   615,   616,   617,   618,
     619,   621,   622,   623,   624,   625,   627,   628,   629,   630,
     631,   639,   640,   641,   643,   644,   645,   647,   648,   649,
     651,   652,   653,   659,   660,   661,   662,   663,   664,   666,
     667,   668,   669,   671,   672,   673,   674
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
  "unidadCompilacion", "bloque", "sentenciasBloque", "sentenciaBloque",
  "sentenciaDeclaracionVariableLocal", "sentencia", "sentenciaNoCorto",
  "sentenciaSinSeguimientoSubsentencia", "declaracionVariableLocal",
  "declaradoresVariable", "declaradorVariable", "declaradorVariableId",
  "inicializadorVariable", "sentenciaSiLuego", "sentenciaSiLuegoSino",
  "sentenciaSiLuegoSinoNoCorto", "sentenciaMientras",
  "sentenciaMientrasNoCorto", "sentenciaPara", "sentenciaParaNoCorto",
  "iniciarPara", "actualizarPara", "listaExpresionesDeclaracion",
  "sentenciaVacia", "sentenciaExpresion", "expresionDeclaracion",
  "expresion", "asignacion", "ladoIzq", "operadorAsignacion",
  "expresionCondicional", "expresionCondicionalOR",
  "expresionCondicionalAND", "expresionOR", "expresionXOR", "expresionAND",
  "expresionIgualdad", "expresionRelacional", "expresionOperacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionPreIncremento", "expresionPreDecremento",
  "expresionUnariaNoMasMenos", "expresionSufijo",
  "expresionPostIncremento", "expresionPostDecremento", "primario",
  "primarioNoNuevoArreglo", "inicializadorArreglo",
  "inicializadoresVariable", "expresionCreacionArreglo",
  "expresionesDimension", "expresionDimension", "dimensiones",
  "accesoCampo", "accesoArreglo", "literal", "tipo", "tipoPrimitivo",
  "tipoNumerico", "tipoIntegral", "tipoPuntoFlotante", "tipoReferencia",
  "tipoArreglo", "nombre", "bloqueIncorrecto",
  "sentenciaDeclaracionVariableLocalIncorrecto",
  "sentenciaExpresionIncorrecto", "sentenciaVaciaIncorrecto",
  "sentenciaSiLuegoIncorrecto", "sentenciaSiLuegoSinoIncorrecto",
  "sentenciaSiLuegoSinoNoCortoIncorrecto", "sentenciaMientrasIncorrecto",
  "sentenciaMientrasNoCortoIncorrecto", "inicializadorArregloIncorrecto",
  "expresionCreacionArregloIncorrecto", YY_NULLPTR
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

#define YYPACT_NINF -344

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-344)))

#define YYTABLE_NINF -168

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,   -34,  1860,    23,  -344,   -30,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  1860,  -344,   -74,
    1948,  -344,  -344,    49,  -344,  -344,  2036,  4627,  4627,  4627,
    4627,  4627,  4627,  -344,  3952,  1124,  4037,  -344,  -344,  1860,
    -344,  -344,  -344,     2,  -344,   -64,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,   -56,  1218,  -344,   644,  -344,
     -67,   -29,   -23,   -20,    -1,   -37,    -7,  -344,   -22,    46,
    -344,  -344,  -344,  -344,   -14,  -344,  -344,   -40,   -27,  -344,
     -26,  -344,   -24,   698,   877,  -344,   -32,   -82,  -344,  -344,
    -344,  -344,   -11,   140,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,    37,  -344,     2,   -26,   336,  4711,
    1860,  4121,  -344,  2124,  1332,   -26,   -24,   -26,  4206,  -344,
       2,  1420,  4627,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
      -6,  -344,  -344,  -344,  -344,  -344,  2212,  1508,  -344,  -344,
    1596,  -344,    -2,  -344,  1860,  -344,  -344,  1860,  2300,  -344,
    2388,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  4627,  4627,  4627,  4627,  4627,  4627,  4627,
    4627,  4627,  4627,  4627,  4627,  4627,    10,  4627,  4627,  4627,
    4627,  4627,  -344,  -344,     4,  4627,  -344,   -24,     5,  -344,
      16,  -344,   -68,  4291,   -26,   -24,    11,  4375,     1,  4627,
    4459,  -344,    18,    21,  -344,  -344,  -344,  -344,   -14,  -344,
       2,  2476,  1684,  1860,  -344,     2,  1860,  2564,  -344,  2652,
     -24,   -26,   -24,  2212,  1772,  2300,  -344,  2388,    20,  1860,
    -344,  2740,  1860,  2828,  -344,  2916,  -344,  -344,  -344,     2,
    -344,     2,  1860,  -344,  3004,  1860,  -344,     2,  -344,   -29,
      26,   -23,   -20,    -1,   -37,    -7,    -7,  -344,  -344,  -344,
    -344,    25,  -344,    27,    46,    46,  -344,  -344,  -344,    80,
      22,  -344,   -32,  3616,    28,  -344,   -24,  -344,  -344,    29,
     120,  4772,    33,  4543,  4943,  1860,  -344,  3092,  1860,  3180,
    -344,  3268,  -344,     2,  -344,     2,  1860,  -344,  3356,  1860,
    -344,     2,   -24,  -344,  2740,  2828,  -344,  2916,  -344,  3004,
    -344,  -344,     2,  1860,  -344,     2,  -344,     2,  1860,  -344,
    3444,  1860,  -344,     2,  -344,     2,  1860,  -344,     2,  -344,
       2,  4627,    30,    32,    39,  -344,  -344,    36,  3700,  -344,
    -344,  -344,  -344,   -93,  -344,  -344,  -344,    40,  1860,    31,
      21,  4827,    42,    44,  -344,  -344,     2,  1860,  -344,     2,
    -344,     2,  1860,  -344,  3532,  1860,  -344,     2,  -344,     2,
    1860,  -344,     2,  -344,     2,  -344,  3444,  -344,     2,  -344,
       2,  1860,  -344,     2,  -344,     2,  -344,     2,  -344,  -344,
      41,  -344,    43,  -344,  -344,   -80,  3784,  -344,    45,  -344,
       2,  1860,  1860,    48,  1860,  4888,  -344,     2,  -344,     2,
    1860,  -344,     2,  -344,     2,  -344,     2,  -344,  -344,  3868,
    -344,  -344,  -344,    89,  -344,     2,  -344,     2,  1860,  -344,
       2,  1860,    50,  -344,     2,  -344,    51,  -344,     2,  -344,
       2,  1860,    52,  -344,     2,  -344
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     8,     0,     3,     0,   160,   161,   162,   164,
     165,   163,   166,   170,   173,   177,   179,   189,   178,     0,
     189,   175,   176,   408,   174,   140,   189,   416,   416,   416,
     416,   416,   416,    66,   416,     8,   416,   184,    27,     8,
       7,     9,    10,     0,    13,   187,    14,    15,    22,    16,
      23,    17,    24,    28,    29,   188,   189,    68,     0,    74,
      91,    93,    95,    97,    99,   101,   103,   106,   112,   113,
     116,    69,    70,   124,   127,    71,    72,   130,   136,   137,
     414,   153,   415,   142,   143,   139,     0,   412,   169,   171,
     172,   168,   180,   131,    11,    30,    31,    18,    19,    25,
      20,    26,   138,     1,     0,   223,   292,   412,   131,   416,
     189,   416,   194,   189,   189,   404,   405,   407,   416,   353,
     374,   189,   416,   122,   120,   121,   132,   133,   142,   143,
     131,   123,   125,   126,   129,   128,   189,   189,    73,     5,
       8,   156,     0,     6,   189,    12,    67,   189,   189,   204,
     189,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,     0,   416,   416,   416,
     416,   416,   134,   135,     0,   416,   152,   413,     0,    37,
      32,    34,    35,   416,   410,   411,     0,   416,     0,   416,
     416,    62,     0,    61,    65,    68,    69,    70,     0,   222,
     291,   189,   189,   189,   263,   332,   189,   189,   192,   189,
     403,   151,   406,   189,   189,   189,   204,   189,     0,   189,
     205,   189,   189,   141,   203,   189,     4,   154,   216,   285,
     223,   292,   189,   202,   189,   189,   273,   342,    75,    94,
       0,    96,    98,   100,   102,   104,   105,   107,   108,   109,
     110,     0,   111,     0,   114,   115,   117,   118,   119,     0,
       0,   155,     0,   402,     0,   156,   409,   182,   183,     0,
       0,   416,     0,   416,   416,   189,   193,   189,   189,   141,
     191,   189,   215,   284,   220,   289,   189,   190,   189,   189,
     261,   330,   150,   205,   189,   141,   203,   189,   202,   189,
     141,   223,   292,   189,   274,   343,   223,   292,   189,   201,
     189,   189,   272,   341,   223,   292,   189,   271,   340,   216,
     285,   416,     0,     0,     0,   159,    33,   399,   400,   401,
      36,    39,    40,   396,    41,    38,   158,     0,   189,     0,
      63,   416,     0,     0,    64,   221,   290,   189,   262,   331,
     219,   288,   189,    42,   189,   189,   260,   329,   218,   287,
     189,   259,   328,   213,   282,    45,    46,   216,   285,   223,
     292,   189,   270,   339,   216,   285,   216,   285,    92,   181,
       0,   397,   398,   147,   149,   395,   393,   394,     0,    53,
      60,   189,   189,     0,   189,   416,   214,   283,   217,   286,
     189,   212,   281,   211,   280,   216,   285,   157,   146,   392,
     145,   391,   148,     0,    52,    59,    51,    58,   189,    49,
      56,   189,     0,    43,    44,   144,     0,    50,    57,    48,
      55,   189,     0,    47,    54,     2
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -280,   128,   -33,  -344,   -17,   229,  -344,    55,
    -344,  -107,  -344,  -266,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -343,    57,  -344,  -344,  -108,   -16,   381,  -344,
    -344,  -164,  -344,     6,     8,    13,     0,     9,   -96,   -83,
    -344,  -100,    24,   529,   654,  -344,   -95,   843,   915,  -344,
    -344,  -344,  -167,  -344,    -8,   -69,    -4,   448,   739,  -344,
    -344,     3,  -344,  -344,  -344,    12,  -344,   721,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344,  -344
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    38,    39,    40,    41,    42,    43,    44,    45,
     190,   191,   192,   422,    46,    47,    48,    49,    50,    51,
      52,   202,   349,   350,    53,    54,    55,    56,    57,    58,
     163,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   342,   343,    79,    80,    81,    82,    83,    84,    85,
      86,   107,    88,    89,    90,    91,    92,   108,     4,    94,
      95,    96,    97,    98,    99,   100,   101,   344,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   204,     1,   112,   114,    87,   143,   340,   403,   119,
     121,   186,   396,   164,   208,   115,     5,   397,   137,   116,
     142,   273,    13,   103,    14,   419,   117,   144,    15,   193,
     420,   104,  -167,   109,    16,   165,   170,   171,    87,   149,
     145,    18,    87,   274,   177,   178,   186,    21,   146,    22,
     166,   123,   131,   132,   133,   134,   135,   182,   183,    24,
     167,    13,   432,    14,   168,     2,   184,    15,   172,   173,
     174,   175,   394,    16,   255,   256,   187,   264,   265,   194,
      18,   169,   189,   195,   185,    36,    21,   188,    22,   257,
     258,   259,   260,   209,   176,   212,   214,   218,    24,   194,
     196,   198,   224,   195,   226,   199,   228,   143,   280,   221,
     237,   220,    87,   222,   179,   180,   181,   271,   269,   230,
     234,   272,   283,   277,    37,   186,   284,   238,   310,   331,
     240,   243,   334,   246,   335,   347,   332,   351,   333,   401,
     345,   346,   389,    87,   278,   390,   391,   248,   405,   250,
     404,   398,   186,   418,   436,   417,   428,   423,   441,   442,
      36,    35,   445,   140,   201,   336,   203,   388,   253,   270,
     249,   395,     0,   204,   251,     0,   354,   142,   254,   261,
     252,   279,     0,   279,   282,     0,   208,     0,   262,   208,
     276,     0,     0,     0,   286,   290,   292,     0,     0,   294,
     297,     0,   300,   266,   267,   268,   303,   306,   308,     0,
     246,     0,   311,     0,   314,   316,   319,   302,   322,     0,
       0,     0,     0,     0,     0,   324,     0,   327,   329,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,   204,     0,     0,   106,     0,     0,   113,
       0,   197,     0,     0,     0,   120,   208,   341,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   353,   355,     0,
     358,   360,   363,     0,   366,     0,     0,     0,     0,   368,
       0,   371,   373,     0,     0,   150,     0,   314,   375,     0,
     322,     0,   327,     0,     0,     0,   377,   204,     0,     0,
       0,   379,     0,   382,   384,     0,     0,     0,     0,   386,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   399,     0,     0,     0,     0,     0,     0,     0,   210,
     406,     0,   215,   219,     0,   408,     0,   382,   411,     0,
     227,     0,     0,   413,     0,     0,     0,     0,     0,   382,
       0,     0,     0,     0,   415,   231,   235,     0,     0,     0,
       0,     0,     0,   239,     0,     0,   241,   244,     0,   247,
     341,     0,     0,     0,   424,   426,     0,   429,     0,     0,
       0,     0,     0,   433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,   437,     0,     0,   439,   138,     0,   138,     0,     0,
       0,     0,     0,     0,   443,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
     287,   291,   293,     0,     0,   295,   298,   199,   301,     0,
       0,     0,   304,   307,   309,     0,   247,     0,   312,     0,
     315,   317,   320,     0,   323,     0,     0,     0,     0,     0,
       0,   325,     0,   328,   330,   128,   128,   128,   128,   128,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,     0,   138,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   359,   361,   364,     0,
     367,     0,     0,     0,     0,   369,     0,   372,   374,     0,
       0,     0,     0,   315,   376,     0,   323,     0,   328,     0,
       0,     0,   378,     0,   138,     0,   138,   380,     0,   383,
     385,     0,     0,     0,     0,   387,   124,   124,   124,   124,
     124,   124,     0,   124,     0,   124,   138,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,   400,   138,     0,
     138,   138,     0,     0,     0,     0,   407,     0,     0,     0,
       0,   409,     0,   383,   412,     0,     0,     0,     0,   414,
       0,     0,     0,     0,     0,   383,     0,     0,     0,     0,
     416,     0,   128,     0,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,     0,   128,   128,   128,   128,   128,
     425,   427,     0,   430,     0,     0,     0,     0,   206,   434,
     124,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,   124,     0,     0,   138,     0,     0,   438,     0,     0,
     440,     0,   205,     0,   138,   205,     0,     0,     0,     0,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   125,   125,   125,   125,   125,     0,   125,     0,
     125,     0,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,     0,   124,   124,   124,   124,
     124,     0,     0,     0,   124,     0,     0,     0,     0,   138,
       0,     0,   124,    93,     0,     0,   124,     0,   124,   124,
       0,     0,   205,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,     0,   130,   130,
     130,   130,   130,   130,     0,     0,    93,     0,     0,     0,
      93,     0,     0,   207,     0,   125,   129,   129,   129,   129,
     129,   129,   125,     0,     0,     0,   125,   138,     0,   128,
       0,     0,     0,     0,     0,     0,   205,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
     138,     0,   124,     0,     0,     0,     0,     0,     0,     0,
     206,     0,   124,   206,     0,     0,     0,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
      93,   125,   125,   125,   125,   125,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   125,     0,   125,   125,     0,     0,     0,     0,     0,
     124,    93,     0,     0,     0,     0,     0,   124,     0,     0,
     126,   126,   126,   126,   126,   126,     0,   126,     0,   126,
     206,     0,     0,     0,     0,   130,     0,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   263,   130,   130,
     130,   130,   130,   129,     0,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,     0,   129,   129,   129,   129,
     129,     0,     0,     0,     0,   124,     0,   125,     0,     0,
       0,     0,     0,     0,   206,   207,     0,   125,   207,     0,
       0,     0,   127,   127,   127,   127,   127,   127,   124,   127,
       0,   127,     0,     0,   126,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,   126,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,     0,
     126,   126,   126,   126,   126,     0,   127,     0,   126,     0,
       0,     0,     0,   127,     0,     0,   126,   127,     0,     0,
     126,     0,   126,   126,     0,     0,     0,     0,     0,     0,
     125,     0,   130,     0,     0,     0,     0,     0,     0,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,   125,     0,     0,     0,     0,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,     0,   127,   127,   127,   127,   127,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,   127,     0,
       0,     0,   127,     0,   127,   127,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
       0,     0,    15,     0,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,   126,     0,     0,     0,     0,    25,
       0,   126,     0,     0,     0,     0,     0,    26,   127,     0,
      27,    28,     0,     0,     0,    29,    30,     0,   127,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    33,     0,
      13,    34,    14,    35,   139,    36,    15,     0,    37,   126,
       0,     0,    16,   147,     0,     0,   127,     0,     0,    18,
      19,     0,    20,   127,     0,    21,     0,    22,     0,     0,
      23,     0,   126,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    34,   148,    35,     0,    36,
       0,     0,    37,     0,   127,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,   216,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,    33,     0,    15,    34,
     217,    35,     0,    36,    16,   147,    37,     0,     0,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,    33,     0,    15,    34,   225,    35,
       0,    36,    16,   232,    37,     0,     0,     0,     0,    18,
      19,     0,    20,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,    33,     0,    15,    34,   233,    35,     0,    36,
      16,    17,    37,     0,     0,     0,     0,    18,    19,     0,
      20,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
      33,     0,    15,    34,     0,    35,   236,    36,    16,   288,
      37,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,    33,     0,
      15,    34,   289,    35,     0,    36,    16,   232,    37,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,    33,     0,    15,    34,
     305,    35,     0,    36,    16,    17,    37,     0,     0,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,    33,     0,    15,    34,     0,    35,
       0,    36,    16,   110,    37,     0,     0,     0,     0,    18,
      19,     0,    20,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,    33,     0,    15,   111,     0,    35,     0,    36,
      16,    17,    37,     0,     0,     0,     0,    18,    19,     0,
      20,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
      33,     0,    15,   118,     0,    35,     0,    36,    16,   213,
      37,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,    33,     0,
      15,    34,     0,    35,     0,    36,    16,   229,    37,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,    33,     0,    15,    34,
       0,    35,     0,    36,    16,   242,    37,     0,     0,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,    33,     0,    15,    34,     0,    35,
       0,    36,    16,   245,    37,     0,     0,     0,     0,    18,
      19,     0,    20,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,    33,     0,    15,    34,     0,    35,     0,    36,
      16,   285,    37,     0,     0,     0,     0,    18,    19,     0,
      20,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
      33,     0,    15,    34,     0,    35,     0,    36,    16,   296,
      37,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,    33,     0,
      15,    34,     0,    35,     0,    36,    16,   299,    37,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,    33,     0,    15,    34,
       0,    35,     0,    36,    16,   313,    37,     0,     0,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,    33,     0,    15,    34,     0,    35,
       0,    36,    16,   318,    37,     0,     0,     0,     0,    18,
      19,     0,    20,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,    33,     0,    15,    34,     0,    35,     0,    36,
      16,   321,    37,     0,     0,     0,     0,    18,    19,     0,
      20,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
      33,     0,    15,    34,     0,    35,     0,    36,    16,   326,
      37,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,    33,     0,
      15,    34,     0,    35,     0,    36,    16,   357,    37,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,    33,     0,    15,    34,
       0,    35,     0,    36,    16,   362,    37,     0,     0,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,    33,     0,    15,    34,     0,    35,
       0,    36,    16,   365,    37,     0,     0,     0,     0,    18,
      19,     0,    20,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,    33,     0,    15,    34,     0,    35,     0,    36,
      16,   370,    37,     0,     0,     0,     0,    18,    19,     0,
      20,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
      33,     0,    15,    34,     0,    35,     0,    36,    16,   381,
      37,     0,     0,     0,     0,    18,    19,     0,    20,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,    33,     0,
      15,    34,     0,    35,     0,    36,    16,   410,    37,     0,
       0,     0,     0,    18,    19,     0,    20,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,     0,     0,    15,     0,    33,     0,     0,    34,
      16,    35,     0,    36,     0,     0,    37,    18,     0,     0,
       0,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     6,     7,     8,     9,    10,    11,    12,
       0,     0,    13,     0,    14,     0,     0,     0,    15,     0,
       0,   337,     0,   122,    16,   338,   339,    36,     0,     0,
      37,    18,     0,     0,     0,     0,     0,    21,     0,    22,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     0,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,    32,     0,     6,     7,     8,
       9,    10,    11,    12,     0,     0,    13,     0,    14,     0,
       0,     0,    15,     0,     0,   392,     0,   122,    16,   338,
     393,    36,     0,     0,    37,    18,     0,     0,     0,     0,
       0,    21,     0,    22,     0,     0,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    32,
       0,     6,     7,     8,     9,    10,    11,    12,     0,     0,
      13,     0,    14,     0,     0,     0,    15,     0,     0,   337,
       0,   122,    16,   338,   421,    36,     0,     0,    37,    18,
       0,     0,     0,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    32,     0,     6,     7,     8,     9,    10,
      11,    12,     0,     0,    13,     0,    14,     0,     0,     0,
      15,     0,     0,   337,     0,   122,    16,   338,   435,    36,
       0,     0,    37,    18,     0,     0,     0,     0,     0,    21,
       0,    22,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    32,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,    13,
       0,    14,     0,     0,     0,    15,     0,     0,     0,   122,
     136,    16,     0,    36,     0,     0,    37,     0,    18,     0,
       0,     0,     0,     0,    21,     0,    22,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    32,     0,     6,     7,     8,     9,    10,    11,
      12,     0,     0,    13,     0,    14,     0,     0,     0,    15,
       0,     0,     0,     0,   122,    16,     0,     0,    36,   141,
       0,    37,    18,     0,     0,     0,     0,     0,    21,     0,
      22,     0,     0,    23,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    32,     0,     0,     6,
       7,     8,     9,    10,    11,    12,     0,     0,    13,     0,
      14,     0,     0,     0,    15,     0,     0,     0,   122,   211,
      16,     0,    36,     0,     0,    37,     0,    18,     0,     0,
       0,     0,     0,    21,     0,    22,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
       0,    32,     0,     0,     6,     7,     8,     9,    10,    11,
      12,     0,     0,    13,     0,    14,     0,     0,     0,    15,
       0,     0,     0,   122,   223,    16,     0,    36,     0,     0,
      37,     0,    18,     0,     0,     0,     0,     0,    21,     0,
      22,     0,     0,    23,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,     0,
       0,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,     0,     0,    32,     0,     6,     7,
       8,     9,    10,    11,    12,     0,     0,    13,     0,    14,
       0,     0,     0,    15,     0,     0,     0,     0,   122,    16,
       0,     0,    36,   275,     0,    37,    18,     0,     0,     0,
       0,     0,    21,     0,    22,     0,     0,    23,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     0,     0,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
      32,     0,     6,     7,     8,     9,    10,    11,    12,     0,
       0,    13,     0,    14,     0,     0,     0,    15,     0,     0,
       0,     0,   122,    16,     0,     0,    36,   278,     0,    37,
      18,     0,     0,     0,     0,     0,    21,     0,    22,     0,
       0,    23,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     0,     0,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,    32,     0,     6,     7,     8,     9,
      10,    11,    12,     0,     0,    13,     0,    14,     0,     0,
       0,    15,     0,   281,     0,     0,   122,    16,     0,     0,
      36,     0,     0,    37,    18,     0,     0,     0,     0,     0,
      21,     0,    22,     0,     0,    23,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      28,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,    32,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,    13,
       0,    14,     0,     0,     0,    15,     0,   352,     0,     0,
     122,    16,     0,     0,    36,     0,     0,    37,    18,     0,
       0,     0,     0,     0,    21,     0,    22,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     0,     0,     0,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,    32,     0,     6,     7,     8,     9,    10,    11,
      12,     0,     0,    13,     0,    14,     0,     0,     0,    15,
       0,     0,     0,     0,   122,    16,     0,     0,    36,     0,
       0,    37,    18,     0,     0,     0,     0,     0,    21,     0,
      22,     0,     0,    23,     0,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    29,    30,    13,     0,    14,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,    21,
       0,    22,     0,     0,    23,   200,     0,     0,   122,     0,
       0,    24,    36,     0,     0,    37,     0,    25,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,    13,
       0,    14,     0,    29,    30,    15,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,    21,     0,    22,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    24,     0,     0,   122,
     348,     0,    25,    36,     0,     0,    37,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    29,    30,
      13,     0,    14,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,    21,     0,    22,     0,     0,
      23,     0,     0,     0,   122,   402,     0,    24,    36,     0,
       0,    37,     0,    25,     0,     0,     6,     7,     8,     9,
      10,    11,    12,     0,     0,    13,     0,    14,     0,    29,
      30,    15,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
      21,     0,    22,     0,     0,    23,     0,     0,     0,     0,
       0,     0,    24,     0,     0,   122,   431,     0,    25,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,    36,     0,     0,    37
};

static const yytype_int16 yycheck[] =
{
      17,   109,    46,    20,    20,     2,    39,   273,   351,    26,
      26,    80,   105,    80,   109,    23,    50,   110,    34,    23,
      36,    89,    12,     0,    14,   105,    23,    25,    18,   111,
     110,    61,   114,   107,    24,   102,    73,    74,    35,    56,
     104,    31,    39,   111,    66,    67,   115,    37,   104,    39,
      79,    27,    28,    29,    30,    31,    32,    71,    72,    49,
      83,    12,   405,    14,    84,   109,   106,    18,    75,    76,
      77,    78,   338,    24,   170,   171,    80,   177,   178,    87,
      31,    82,   114,    87,   111,   111,    37,   111,    39,   172,
     173,   174,   175,   110,   101,   111,   113,   114,    49,   107,
     111,    64,   118,   107,   121,   111,   122,   140,   107,   117,
     112,   115,   109,   117,    68,    69,    70,   112,   114,   136,
     137,   105,   104,   112,   114,   194,   105,   144,   108,   103,
     147,   148,    52,   150,   112,    15,   111,   104,   111,   108,
     112,   112,   112,   140,   112,   106,   110,   163,   104,   165,
     108,   111,   221,   110,    65,   114,   108,   112,   108,   108,
     111,   109,   442,    35,   109,   272,   109,   331,   168,   185,
     164,   338,    -1,   281,   166,    -1,   284,   193,   169,   176,
     167,   197,    -1,   199,   200,    -1,   281,    -1,   176,   284,
     194,    -1,    -1,    -1,   211,   212,   213,    -1,    -1,   216,
     217,    -1,   219,   179,   180,   181,   223,   224,   225,    -1,
     227,    -1,   229,    -1,   231,   232,   233,   221,   235,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   244,   245,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,   351,    -1,    -1,    17,    -1,    -1,    20,
      -1,   111,    -1,    -1,    -1,    26,   351,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,   285,    -1,
     287,   288,   289,    -1,   291,    -1,    -1,    -1,    -1,   296,
      -1,   298,   299,    -1,    -1,    56,    -1,   304,   305,    -1,
     307,    -1,   309,    -1,    -1,    -1,   313,   405,    -1,    -1,
      -1,   318,    -1,   320,   321,    -1,    -1,    -1,    -1,   326,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     357,    -1,   113,   114,    -1,   362,    -1,   364,   365,    -1,
     121,    -1,    -1,   370,    -1,    -1,    -1,    -1,    -1,   376,
      -1,    -1,    -1,    -1,   381,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,   147,   148,    -1,   150,
     396,    -1,    -1,    -1,   401,   402,    -1,   404,    -1,    -1,
      -1,    -1,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,    -1,    -1,   431,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,   441,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
     211,   212,   213,    -1,    -1,   216,   217,   111,   219,    -1,
      -1,    -1,   223,   224,   225,    -1,   227,    -1,   229,    -1,
     231,   232,   233,    -1,   235,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,   244,   245,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,    -1,   287,   288,   289,    -1,
     291,    -1,    -1,    -1,    -1,   296,    -1,   298,   299,    -1,
      -1,    -1,    -1,   304,   305,    -1,   307,    -1,   309,    -1,
      -1,    -1,   313,    -1,   163,    -1,   165,   318,    -1,   320,
     321,    -1,    -1,    -1,    -1,   326,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    36,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,    -1,    -1,   348,   197,    -1,
     199,   200,    -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,
      -1,   362,    -1,   364,   365,    -1,    -1,    -1,    -1,   370,
      -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,
     381,    -1,   164,    -1,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,   177,   178,   179,   180,   181,
     401,   402,    -1,   404,    -1,    -1,    -1,    -1,   109,   410,
     111,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,   122,    -1,    -1,   273,    -1,    -1,   428,    -1,    -1,
     431,    -1,   281,    -1,   283,   284,    -1,    -1,    -1,    -1,
     441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,   177,   178,   179,   180,
     181,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,   338,
      -1,    -1,   193,     2,    -1,    -1,   197,    -1,   199,   200,
      -1,    -1,   351,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,   109,    -1,   111,    27,    28,    29,    30,
      31,    32,   118,    -1,    -1,    -1,   122,   396,    -1,   331,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     419,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     281,    -1,   283,   284,    -1,    -1,    -1,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     109,   177,   178,   179,   180,   181,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,   197,    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,
     331,   140,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,
      27,    28,    29,    30,    31,    32,    -1,    34,    -1,    36,
     351,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   164,    -1,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,   177,   178,   179,   180,
     181,    -1,    -1,    -1,    -1,   396,    -1,   273,    -1,    -1,
      -1,    -1,    -1,    -1,   405,   281,    -1,   283,   284,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,   419,    34,
      -1,    36,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,   122,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
     177,   178,   179,   180,   181,    -1,   111,    -1,   185,    -1,
      -1,    -1,    -1,   118,    -1,    -1,   193,   122,    -1,    -1,
     197,    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,   405,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,    -1,    -1,   419,    -1,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,   177,   178,   179,   180,   181,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    -1,   197,    -1,   199,   200,   273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   283,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,   331,    -1,    -1,    -1,    -1,    55,
      -1,   338,    -1,    -1,    -1,    -1,    -1,    63,   273,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,   104,    -1,
      12,   107,    14,   109,   110,   111,    18,    -1,   114,   396,
      -1,    -1,    24,    25,    -1,    -1,   331,    -1,    -1,    31,
      32,    -1,    34,   338,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,   419,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,   111,
      -1,    -1,   114,    -1,   419,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,   104,    -1,    18,   107,
     108,   109,    -1,   111,    24,    25,   114,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,   104,    -1,    18,   107,   108,   109,
      -1,   111,    24,    25,   114,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,   104,    -1,    18,   107,   108,   109,    -1,   111,
      24,    25,   114,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
     104,    -1,    18,   107,    -1,   109,   110,   111,    24,    25,
     114,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,   104,    -1,
      18,   107,   108,   109,    -1,   111,    24,    25,   114,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,   104,    -1,    18,   107,
     108,   109,    -1,   111,    24,    25,   114,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,   104,    -1,    18,   107,    -1,   109,
      -1,   111,    24,    25,   114,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,   104,    -1,    18,   107,    -1,   109,    -1,   111,
      24,    25,   114,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
     104,    -1,    18,   107,    -1,   109,    -1,   111,    24,    25,
     114,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,   104,    -1,
      18,   107,    -1,   109,    -1,   111,    24,    25,   114,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,   104,    -1,    18,   107,
      -1,   109,    -1,   111,    24,    25,   114,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,   104,    -1,    18,   107,    -1,   109,
      -1,   111,    24,    25,   114,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,   104,    -1,    18,   107,    -1,   109,    -1,   111,
      24,    25,   114,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
     104,    -1,    18,   107,    -1,   109,    -1,   111,    24,    25,
     114,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,   104,    -1,
      18,   107,    -1,   109,    -1,   111,    24,    25,   114,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,   104,    -1,    18,   107,
      -1,   109,    -1,   111,    24,    25,   114,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,   104,    -1,    18,   107,    -1,   109,
      -1,   111,    24,    25,   114,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,   104,    -1,    18,   107,    -1,   109,    -1,   111,
      24,    25,   114,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
     104,    -1,    18,   107,    -1,   109,    -1,   111,    24,    25,
     114,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,   104,    -1,
      18,   107,    -1,   109,    -1,   111,    24,    25,   114,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,   104,    -1,    18,   107,
      -1,   109,    -1,   111,    24,    25,   114,    -1,    -1,    -1,
      -1,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,   104,    -1,    18,   107,    -1,   109,
      -1,   111,    24,    25,   114,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,   104,    -1,    18,   107,    -1,   109,    -1,   111,
      24,    25,   114,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
     104,    -1,    18,   107,    -1,   109,    -1,   111,    24,    25,
     114,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,   104,    -1,
      18,   107,    -1,   109,    -1,   111,    24,    25,   114,    -1,
      -1,    -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,   104,    -1,    -1,   107,
      24,   109,    -1,   111,    -1,    -1,   114,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,
      -1,   105,    -1,   107,    24,   109,   110,   111,    -1,    -1,
     114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,   105,    -1,   107,    24,   109,
     110,   111,    -1,    -1,   114,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,   105,
      -1,   107,    24,   109,   110,   111,    -1,    -1,   114,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,   105,    -1,   107,    24,   109,   110,   111,
      -1,    -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,   107,
     108,    24,    -1,   111,    -1,    -1,   114,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,   107,    24,    -1,    -1,   111,   112,
      -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,   107,   108,
      24,    -1,   111,    -1,    -1,   114,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,   107,   108,    24,    -1,   111,    -1,    -1,
     114,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   107,    24,
      -1,    -1,   111,   112,    -1,   114,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,   107,    24,    -1,    -1,   111,   112,    -1,   114,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,   104,    -1,    -1,   107,    24,    -1,    -1,
     111,    -1,    -1,   114,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,   104,    -1,    -1,
     107,    24,    -1,    -1,   111,    -1,    -1,   114,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,
      -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    71,    72,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,   104,    -1,    -1,   107,    -1,
      -1,    49,   111,    -1,    -1,   114,    -1,    55,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    71,    72,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,   107,
     108,    -1,    55,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    71,    72,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,   107,   108,    -1,    49,   111,    -1,
      -1,   114,    -1,    55,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    71,
      72,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,   107,   108,    -1,    55,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,   111,    -1,    -1,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,   109,   116,   183,    50,     3,     4,     5,     6,
       7,     8,     9,    12,    14,    18,    24,    25,    31,    32,
      34,    37,    39,    42,    49,    55,    63,    66,    67,    71,
      72,    81,    85,   104,   107,   109,   111,   114,   117,   118,
     119,   120,   121,   122,   123,   124,   129,   130,   131,   132,
     133,   134,   135,   139,   140,   141,   142,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   184,   185,   186,   187,   188,   189,
     190,   191,   193,     0,    61,   121,   122,   176,   182,   107,
      25,   107,   121,   122,   142,   169,   171,   176,   107,   121,
     122,   142,   107,   157,   158,   159,   162,   163,   172,   173,
     182,   157,   157,   157,   157,   157,   108,   142,   143,   110,
     118,   112,   142,   119,    25,   104,   104,    25,   108,   121,
     122,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   145,    80,   102,    79,    83,    84,    82,
      73,    74,    75,    76,    77,    78,   101,    66,    67,    68,
      69,    70,    71,    72,   106,   111,   170,   171,   111,   114,
     125,   126,   127,   111,   169,   171,   111,   111,    64,   111,
     104,   124,   136,   138,   141,   143,   158,   159,   161,   121,
     122,   108,   142,    25,   121,   122,    25,   108,   121,   122,
     171,   169,   171,   108,   142,   108,   121,   122,   142,    25,
     121,   122,    25,   108,   121,   122,   110,   112,   121,   122,
     121,   122,    25,   121,   122,    25,   121,   122,   142,   148,
     142,   149,   150,   151,   152,   153,   153,   154,   154,   154,
     154,   176,   180,   182,   156,   156,   157,   157,   157,   114,
     142,   112,   105,    89,   111,   112,   171,   112,   112,   142,
     107,   104,   142,   104,   105,    25,   121,   122,    25,   108,
     121,   122,   121,   122,   121,   122,    25,   121,   122,    25,
     121,   122,   171,   121,   122,   108,   121,   122,   121,   122,
     108,   121,   122,    25,   121,   122,   121,   122,    25,   121,
     122,    25,   121,   122,   121,   122,    25,   121,   122,   121,
     122,   103,   111,   111,    52,   112,   126,   105,   109,   110,
     128,   142,   166,   167,   192,   112,   112,    15,   108,   137,
     138,   104,   104,   142,   141,   121,   122,    25,   121,   122,
     121,   122,    25,   121,   122,    25,   121,   122,   121,   122,
      25,   121,   122,   121,   122,   121,   122,   121,   122,   121,
     122,    25,   121,   122,   121,   122,   121,   122,   146,   112,
     106,   110,   105,   110,   128,   167,   105,   110,   111,   121,
     122,   108,   108,   137,   108,   104,   121,   122,   121,   122,
      25,   121,   122,   121,   122,   121,   122,   114,   110,   105,
     110,   110,   128,   112,   121,   122,   121,   122,   108,   121,
     122,   108,   137,   121,   122,   110,    65,   121,   122,   121,
     122,   108,   108,   121,   122,   117
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   122,   122,   122,   123,   123,   123,
     123,   123,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   129,   130,   131,   132,   133,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   138,   138,   139,   140,   141,   141,
     141,   141,   141,   142,   142,   143,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     153,   153,   154,   155,   155,   155,   156,   156,   156,   156,
     157,   157,   157,   157,   157,   158,   159,   160,   160,   160,
     161,   161,   161,   161,   162,   163,   164,   164,   164,   165,
     165,   165,   165,   165,   166,   166,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   171,   171,   172,   173,   173,
     174,   174,   174,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   178,   178,   178,   179,   179,
     180,   181,   181,   181,   182,   183,   183,   184,   185,   186,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     1,     3,     2,     2,     1,     0,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     3,     1,     3,     1,
       1,     1,     5,     7,     7,     5,     5,     9,     8,     7,
       8,     7,     7,     6,     9,     8,     7,     8,     7,     7,
       6,     1,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     4,     3,     3,     2,     3,     1,
       4,     3,     2,     1,     3,     3,     2,     6,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     2,     1,     1,     1,     0,
       4,     4,     3,     4,     2,     4,     3,     3,     2,     3,
       1,     4,     3,     3,     2,     3,     3,     2,     2,     1,
       2,     6,     6,     5,     6,     4,     3,     6,     5,     5,
       4,     5,     3,     2,     6,     5,     5,     4,     5,     5,
       4,     4,     3,     4,     2,     6,     5,     5,     4,     5,
       3,     2,     5,     4,     4,     3,     4,     2,     1,     5,
       4,     4,     3,     4,     4,     3,     3,     2,     3,     5,
       5,     4,     5,     3,     5,     4,     4,     3,     4,     2,
       5,     4,     4,     3,     4,     4,     3,     3,     2,     3,
       6,     6,     5,     6,     4,     3,     6,     5,     5,     4,
       5,     3,     2,     6,     5,     5,     4,     5,     5,     4,
       4,     3,     4,     2,     6,     5,     5,     4,     5,     3,
       2,     5,     4,     4,     3,     4,     2,     1,     5,     4,
       4,     3,     4,     4,     3,     3,     2,     3,     5,     5,
       4,     5,     3,     5,     4,     4,     3,     4,     2,     5,
       4,     4,     3,     4,     4,     3,     3,     2,     3,     4,
       4,     3,     4,     2,     4,     3,     3,     2,     3,     1,
       4,     3,     3,     2,     3,     3,     2,     2,     1,     2,
       4,     4,     3,     4,     2,     4,     3,     3,     2,     3,
       1,     4,     3,     3,     2,     3,     3,     2,     2,     1,
       2,     3,     3,     2,     2,     2,     1,     2,     2,     1,
       1,     1,     0,     3,     2,     2,     3,     2,     1,     3,
       2,     2,     1,     2,     1,     1,     0
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
        case 2:
#line 39 "parser.y" /* yacc.c:1646  */
    {printf("la unidad de compilacion se ejecuto correctamente\n");}
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "parser.y" /* yacc.c:1646  */
    {printf("la declaracion de variable local es valida\n");}
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 106 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego es valida\n");}
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego sino es valida\n");}
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia si luego sino no corto es valida\n");}
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia mientras es valida\n");}
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia mientras no corto es valida\n");}
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia para es valida\n");}
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia para no corto es valida\n");}
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia vacia es valida\n");}
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("la sentencia de expresion es valida\n");}
#line 2719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 362 "parser.y" /* yacc.c:1646  */
    {printf("error: se alcanzó el final del archivo durante el análisis \n");}
#line 2725 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 363 "parser.y" /* yacc.c:1646  */
    {printf("error: se alcanzó el final del archivo durante el análisis \n");}
#line 2731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 368 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 380 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 381 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 386 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 387 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 388 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 391 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 392 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 393 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 394 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 400 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 401 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 406 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 407 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 408 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 413 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 414 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 415 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 420 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 421 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 424 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 426 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 427 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 430 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 431 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 436 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 437 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 438 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 445 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 446 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 447 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 453 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 455 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 460 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 461 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 470 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 474 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 475 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 477 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 478 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 479 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 481 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 484 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 486 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 487 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 488 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 492 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 493 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 495 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 496 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 497 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 500 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 501 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 502 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 503 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 504 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 505 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 507 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 508 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 509 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 510 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 511 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 513 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 514 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 515 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 516 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 517 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 518 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 521 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 522 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 523 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 524 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 525 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 526 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 527 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 530 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 531 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 532 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 533 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 534 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 535 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 536 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 538 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 539 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 540 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 541 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 542 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 544 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 545 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 546 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 547 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 548 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 551 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 552 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 553 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 554 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 555 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 557 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 558 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 559 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 560 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 561 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 562 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 564 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 565 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 566 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 567 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 568 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 571 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 572 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 573 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 574 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 575 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino no corta es incorrecta\n");}
#line 3703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 582 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 583 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 584 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 585 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 586 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 588 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 589 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 590 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 591 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 592 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 593 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 595 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 596 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 597 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 598 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 599 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 601 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 602 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 603 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 604 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 3823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 605 "parser.y" /* yacc.c:1646  */
    {printf("error 21: la sentencia mientras es incorrecta\n");}
#line 3829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 608 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 609 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 610 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 611 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 612 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 614 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 615 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 616 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 617 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 618 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 619 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 621 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 622 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 623 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 624 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 625 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 627 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 628 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 629 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 630 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 631 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia mientras no corto es incorrecta\n");}
#line 3955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 639 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 640 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 641 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 643 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 644 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 645 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 647 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 3997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 648 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 4003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 649 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 4009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 651 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 4015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 652 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 4021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 653 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia inicializador de arreglo es incorrecta\n");}
#line 4027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 659 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 660 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 661 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 662 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 663 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 664 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 666 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 667 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 668 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 669 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 671 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 672 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 673 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 674 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 4111 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 4115 "parser.tab.c" /* yacc.c:1646  */
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
#line 677 "parser.y" /* yacc.c:1906  */


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
