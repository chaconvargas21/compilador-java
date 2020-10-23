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
#define YYLAST   5424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

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
  "accesoCampo", "invocacionMetodo", "listaArgumentos", "nombres",
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

#define YYPACT_NINF -359

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-359)))

#define YYTABLE_NINF -191

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -91,    47,  -359,   -49,  -359,     7,  -359,    24,    -5,
      25,  -359,    39,    20,   100,    12,    13,    66,    26,    27,
    2266,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
     -62,  -359,  -359,   -58,  -359,  -359,    37,  2378,  -359,  -359,
     135,  3666,  -359,    32,  -359,  3330,  4677,  4677,  4677,  4677,
    4677,  4677,  -359,  3750,  -359,  3835,  -359,  -359,  2462,  -359,
    -359,  -359,  -359,    41,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,    42,  1551,    40,   896,  -359,   -53,    71,
      74,    76,    79,    18,    -7,  -359,    31,    52,  -359,  1262,
    5298,  -359,    29,  -359,  1357,  1713,    58,    54,  -359,    56,
    -359,    57,  1111,   -44,     3,  1815,  -359,    44,   -70,  -359,
    -359,  -359,  -359,    59,   703,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,    65,  -359,    67,  4761,
    3414,    68,  2574,  3919,  -359,   148,   151,  -359,  -359,  1699,
      56,  1010,    56,    57,    56,  -359,  4677,    73,  -359,  -359,
    -359,  -359,  -359,  -359,    72,  3750,  -359,  -359,  -359,  -359,
     -56,  -359,  -359,  -359,  -359,  -359,  2686,  1818,   -35,  1205,
    -359,    69,  -359,  -359,  -359,  -359,  3414,  2798,  -359,   160,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359,
    -359,  -359,  4677,  4677,  4677,  4677,  4677,  4677,  4677,  4677,
    4677,  4677,  4677,  4677,  4677,   241,  4677,  4677,  4677,  4677,
    4677,  -359,  -359,    77,  4677,  -359,    57,    75,    80,  4004,
    -359,    85,  -359,   -46,  4089,    56,    57,    83,  4173,  -359,
    -359,  4257,  4677,  -359,    93,    94,  -359,  -359,  -359,  -359,
      29,  -359,  4822,  3919,  2910,  1930,  3414,  3414,  3022,  -359,
     173,  4677,    57,    56,    57,    95,  -359,  -359,  2042,  3414,
    -359,   176,  3414,  3134,  -359,   177,  4677,   -24,  3835,   -23,
    -359,  -359,  3414,  -359,   179,  3414,  -359,    71,   102,    74,
      76,    79,    18,    -7,    -7,  -359,  -359,  -359,  -359,   101,
    -359,   103,    52,    52,  -359,  -359,  -359,  -359,   104,  -359,
    -359,  -359,  -359,    -9,    44,  4341,   106,  -359,    57,  -359,
    -359,   107,  4883,   111,    98,  4425,  5249,  4509,   116,  2154,
    3414,  -359,   198,  3414,  3246,  -359,   199,  -359,  -359,  3414,
    -359,   202,  3414,    57,  5310,  3134,  -359,  3414,  -359,  3414,
    -359,   203,  -359,  3414,  -359,  4677,  5310,  -359,  3414,  -359,
    4677,   119,   120,  -359,  4677,  -359,  -359,   863,  -359,  -359,
    -359,   129,  -359,  -359,  -359,  3414,   131,    94,  4944,  -359,
     132,   133,  -359,  5005,   137,  4593,  3246,  -359,  3414,  -359,
    3414,  -359,   217,  3414,  -359,  3414,  -359,  -359,  -359,  -359,
    -359,  3414,  -359,  -359,  -359,  -359,  -359,  -359,  -359,   144,
    -359,  -359,   -96,  4341,  -359,  3414,  3414,   139,  3414,  5066,
    3498,   150,  5127,   154,   141,   231,  -359,  -359,  3414,  -359,
    -359,  -359,  -359,  3582,  -359,  -359,  -359,  -359,  3414,  -359,
    3414,   155,  -359,  3498,  3498,   158,  3498,  5188,  3498,  -359,
    -359,  -359,  -359,  3414,  -359,  -359,  3498,  -359,  3498,   159,
    -359,  -359,  -359,  -359,  3498,  -359
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
       0,     0,    69,     0,     7,     0,   207,    25,     0,     9,
      10,    11,    14,   208,    15,    16,    17,    18,    26,    27,
      28,    29,    30,   209,   216,    77,     0,    84,   101,   103,
     105,   107,   109,   111,   113,   116,   122,   123,   126,    78,
      79,   134,   137,   140,    80,    81,   141,   151,   152,   264,
     169,   265,   157,    82,     0,   159,   154,     0,   262,   192,
     194,   195,   191,   203,   142,    12,    31,    33,    34,    35,
      32,    20,    19,    21,   153,    71,   210,    73,   212,     0,
     216,     0,   216,     0,   221,     0,    14,    23,    24,   216,
     262,   142,   254,   255,   257,    75,     0,   214,    83,   130,
     131,   143,   144,   158,     0,     0,   248,   132,   157,   159,
     142,   133,   135,   136,   139,   138,   216,   216,   262,   142,
     172,     0,     6,     8,    13,    76,   216,   216,   225,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,   150,     0,     0,   168,   263,     0,     0,     0,
      41,    36,    38,    39,     0,   260,   261,     0,     0,    70,
      72,     0,     0,    65,     0,    64,    68,    77,    78,    79,
       0,   237,     0,     0,   216,   216,   216,   216,   216,   219,
       0,     0,   253,   167,   256,     0,    74,   174,   216,   216,
     226,     0,   216,   156,   224,     0,     0,   261,     0,     0,
     170,   246,   216,   223,     0,   216,    85,   104,     0,   106,
     108,   110,   112,   114,   115,   117,   118,   119,   120,     0,
     121,     0,   124,   125,   127,   128,   129,   173,     0,   171,
     179,   176,   178,     0,     0,   249,     0,   172,   259,   205,
     206,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     216,   220,     0,   216,   156,   218,     0,   231,   235,   216,
     217,     0,   216,   166,   156,   156,   247,   216,   245,   216,
     222,     0,   134,   216,   146,     0,     0,   244,   216,   241,
       0,     0,     0,   182,     0,   175,    37,   249,    40,    43,
      44,   251,    45,    42,   181,   216,     0,    66,     0,   156,
       0,     0,    67,     0,     0,     0,   156,   236,   216,   234,
     216,    46,     0,   216,   233,   216,   229,   147,    49,   242,
     243,   216,   240,   145,   148,   239,   102,   204,   177,   252,
     163,   165,   250,   249,    56,   216,   216,     0,   216,     0,
     216,     0,     0,     0,     0,     0,   230,   232,   216,   228,
     227,   238,   162,   249,   161,   164,    55,    54,   216,    52,
     216,     0,    63,   216,   216,     0,   216,     0,   216,    47,
     160,    53,    51,   216,    62,    61,   216,    59,   216,     0,
      48,    50,    60,    58,   216,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -359,  -359,  -359,  -359,  -359,   249,  -359,   211,  -359,   -37,
      16,   -15,  -128,  -359,   -34,  -359,  -293,  -359,  -359,  -359,
    -359,  -359,  -359,    33,  -358,  -126,  -359,  -359,  -359,  -359,
    -359,  -124,   522,   538,  -359,  -359,   -79,  -359,    84,    78,
      88,    92,    96,   -87,  -121,  -359,   -64,   -30,   283,   410,
    -257,  -116,  -359,   810,  1042,  -359,  -359,  -359,   -81,  -359,
     -33,   -97,   -36,   933,  1274,  -359,  -359,  1021,  -359,  -359,
       8,  -359,  -359,  -359,    86,  -359,  1483,  -359,  -359,  -359,
    -359,  -359,  -359,  -359,  -359,  -359,  -359,  -359
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    57,    58,    59,    60,    61,
     135,    62,    63,   221,   222,   223,   425,    64,    65,   137,
      66,    67,   138,   234,   366,   367,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   192,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   360,   361,    98,
      99,   100,   101,   102,   103,   303,   104,   105,   106,   107,
     140,   109,   110,   111,   112,   113,   141,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   362,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     134,   233,   215,   235,   143,   236,   342,   142,   156,   423,
     407,     1,   358,   240,   424,   411,   157,   161,   162,   163,
     164,   165,   136,     4,  -158,  -158,  -158,   193,   108,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,   178,  -158,  -158,
    -158,   224,   125,   305,  -190,   215,   127,     5,   144,   194,
    -180,   431,   126,     8,   435,   251,   128,  -158,  -158,   136,
       6,   168,  -158,   216,   401,   306,   108,   342,   201,   202,
     203,   204,   226,   266,    10,   225,    55,   387,   342,   449,
     285,   286,   287,   288,   345,   346,    12,   217,   217,   394,
     179,   199,   200,   241,   205,   134,   354,   206,   207,   355,
     211,   212,   249,    13,   226,    11,   252,   225,   254,   218,
     219,   253,   283,   284,   233,    15,   235,   136,   236,   342,
     208,   209,   210,    16,   136,    17,   240,    14,   215,   260,
     264,    18,   267,   269,    19,   225,    20,   108,   154,   271,
     273,   168,   292,   293,   129,   174,   175,    29,   -83,    31,
     195,   136,   136,    32,   168,   250,   215,   196,   220,    34,
     197,   198,   136,   168,   213,   214,    35,    55,   217,   229,
     227,   230,    38,   246,    39,   242,   -22,   256,   294,   295,
     296,   270,   261,   265,    42,   275,   257,   299,   236,   308,
     304,   297,   372,   274,    56,   309,   240,   315,   332,   316,
     240,   337,   343,   334,   348,   350,   369,   321,   325,   327,
     328,   330,   351,   289,   352,   368,   353,   333,   363,   364,
     375,   264,   336,   378,   383,   338,   340,   385,   391,   136,
     136,   397,   310,   136,   403,   347,   344,   409,   349,   405,
     408,   412,   418,   136,   236,   437,    55,   428,   136,   236,
     108,   168,   240,    29,   422,    31,   438,   240,   433,    32,
     322,   326,   436,   443,   331,    34,   446,   454,    21,   173,
     356,   396,    35,   279,   265,   318,   402,   277,    38,   341,
      39,     0,   325,   377,   280,   236,   379,   381,   236,   281,
      42,   290,   384,   240,   282,   386,   240,     0,   388,     0,
     389,     0,   390,     0,   136,     0,   392,     0,     0,   136,
       0,   395,     0,   236,     0,   393,     0,     0,     0,     0,
     136,   240,     0,     0,   149,     0,     0,     0,   404,   149,
     149,   149,   149,   149,   149,   326,   149,     0,   149,   381,
     382,   416,     0,   417,     0,     0,   419,     0,   420,     0,
       0,   341,     0,     0,   421,    56,     0,     0,     0,     0,
       0,   136,     0,     0,     0,     0,     0,     0,   426,   427,
       0,   429,     0,   404,     0,     0,     0,     0,     0,     0,
       0,   439,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   441,   415,   442,     0,   136,   426,   427,     0,   429,
       0,   439,     0,     0,     0,     0,   451,     0,     0,   441,
       0,   442,   238,     0,     0,     0,   149,   451,   136,   136,
       0,   136,     0,   136,     0,     0,   432,     0,     0,   149,
       0,   136,     0,   136,     0,     0,     0,     0,   149,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   444,
     445,   150,   447,     0,   450,     0,   150,   150,   150,   150,
     150,   150,   452,   150,   453,   150,     0,     0,     0,     0,
     455,     0,     0,     0,     0,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,     0,   149,
     149,   149,   149,   149,     0,     0,     0,   149,     0,     0,
       0,     0,   149,     0,     0,     0,     0,   149,     0,     0,
       0,   149,     0,     0,   149,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   149,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,   239,
       0,     0,     0,   150,     0,     0,     0,     0,     0,   149,
       0,   149,     0,     0,     0,     0,   150,     0,     0,   139,
       0,     0,     0,   147,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   167,     0,   171,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,   148,     0,   148,     0,   238,     0,     0,   149,   238,
     149,     0,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,     0,   150,   150,   150,   150,
     150,     0,     0,     0,   150,     0,     0,     0,   149,   150,
       0,     0,     0,   149,   150,     0,     0,   149,   150,     0,
     149,   150,   150,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   239,   150,   139,   245,   238,     0,   149,     0,
       0,   150,     0,     0,     0,     0,     0,   237,   255,     0,
       0,   148,     0,     0,     0,     0,   150,   258,   150,     0,
       0,     0,     0,     0,   148,     0,   149,     0,     0,     0,
       0,     0,   238,   148,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,   276,   150,   278,     0,     0,     0,
     238,     0,   239,     0,     0,   150,   239,   150,     0,     0,
     148,     0,   148,     0,     0,     0,   298,     0,     0,     0,
       0,   302,     0,     0,     0,     0,   171,     0,     0,     0,
     311,     0,   148,   313,   314,   150,     0,   148,     0,     0,
     150,     0,   148,     0,   150,   319,   148,   150,     0,   148,
     148,     0,     0,   311,     0,     0,     0,     0,   239,     0,
     237,   148,     0,   239,     0,   150,     0,     0,     0,   148,
     311,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   148,     0,     0,  -180,
       0,     0,     0,   150,   228,     0,     0,     0,     0,   239,
       0,     0,   239,     0,     0,     0,     0,   359,     0,     0,
       0,     0,     0,   150,     0,     0,     0,   371,     0,   374,
       0,     0,     0,   148,     0,     0,     0,   239,     0,     0,
     237,   151,     0,   148,   237,   148,   151,   151,   151,   151,
     151,   151,     0,   151,     0,   151,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,   398,    31,     0,   359,
       0,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,   148,     0,    35,   148,     0,   414,     0,     0,
      38,     0,    39,     0,     0,    40,   237,     0,     0,     0,
       0,   237,    42,   148,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,   359,     0,     0,     0,    46,
      47,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,   148,     0,   151,    50,   359,     0,   237,    51,     0,
     237,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,   148,     0,     0,     0,   151,     0,     0,   399,     0,
     146,     0,   357,   400,    55,   237,     0,    56,     0,   158,
     158,   158,   158,   158,   158,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,     0,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,     0,   151,   151,   151,   151,
     151,     0,     0,     0,   151,     0,     0,     0,     0,   151,
       0,     0,     0,     0,   151,     0,     0,     0,   151,     0,
       0,   151,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,   151,     0,     0,     0,     0,     0,   159,   159,   159,
     159,   159,   159,     0,     0,     0,   151,     0,   151,     0,
       0,     0,     0,   152,     0,     0,     0,     0,   152,   152,
     152,   152,   152,   152,     0,   152,     0,   152,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   151,  -180,     0,     0,     0,
       0,   251,     0,     0,     0,   151,   158,   151,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,     0,   158,
     158,   158,   158,   158,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,   151,     0,     0,     0,
     151,     0,     0,     0,   151,     0,     0,   151,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,   152,     0,   158,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   151,   159,     0,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,     0,   159,   159,   159,
     159,   159,     0,   151,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,     0,   152,   152,
     152,   152,   152,     0,     0,     0,   152,     0,     0,     0,
       0,   152,     0,     0,     0,     0,   152,   158,     0,     0,
     152,     0,     0,   152,   152,     0,     0,     0,   158,   158,
       0,     0,     0,   158,     0,   152,     0,   159,     0,     0,
       0,     0,     0,   152,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   152,     0,
     152,  -180,     0,     0,     0,   153,   268,     0,     0,     0,
     153,   153,   153,   153,   153,   153,     0,   153,     0,   153,
    -130,  -130,  -130,     0,     0,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,     0,  -130,  -130,  -130,   152,     0,     0,
       0,     0,     0,     0,     0,   159,     0,   152,     0,   152,
       0,     0,     0,  -130,  -130,     0,   159,   159,     0,     0,
    -130,   159,     0,     0,     0,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   152,     0,
       0,     0,   152,     0,     0,     0,   152,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,     0,     0,
     153,     0,     0,     0,     0,  -143,  -143,  -143,     0,   153,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,     0,  -143,
    -143,  -143,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -143,  -143,
       0,     0,     0,     0,     0,   152,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,     0,
     153,   153,   153,   153,   153,     0,     0,     0,   153,     0,
       0,     0,     0,   153,     0,     0,     0,     0,   153,     0,
       0,     0,   153,   114,     0,   153,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,   160,
     160,   160,   160,   160,   160,     0,   169,     0,     0,     0,
     153,   114,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,    30,    31,     0,     0,     0,    32,
       0,     0,    33,     0,     0,    34,   176,     0,     0,   153,
       0,     0,    35,   131,     0,   132,     0,     0,    38,   153,
      39,   153,     0,    40,     0,     0,     0,     0,     0,    41,
      42,     0,     0,    43,     0,     0,    44,     0,   153,     0,
       0,     0,   114,     0,    45,     0,   169,    46,    47,   153,
     153,     0,    48,    49,   153,     0,     0,     0,   153,   169,
       0,   153,    50,     0,     0,     0,    51,     0,   169,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,     0,     0,    52,     0,     0,    53,   177,
      20,     0,    55,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   153,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   291,   160,
     160,   160,   160,   160,     0,     0,     0,   153,     0,     0,
       0,   300,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,    30,    31,     0,     0,     0,    32,     0,     0,
      33,     0,     0,    34,   247,   114,   169,     0,     0,     0,
      35,   131,     0,   132,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,    41,    42,   160,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,  -144,  -144,  -144,    51,     0,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,     0,  -144,  -144,  -144,     0,     0,
       0,     0,     0,    52,     0,     0,    53,   248,    20,     0,
      55,     0,     0,    56,  -144,  -144,     0,   160,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,   160,   160,
      29,    30,    31,   160,     0,     0,    32,     0,     0,    33,
       0,     0,    34,   262,     0,     0,     0,     0,     0,    35,
     131,     0,   132,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,   263,    20,     0,    55,
       0,     0,    56,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,   323,     0,     0,     0,     0,
       0,    35,   131,     0,   132,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,   324,    20,
       0,    55,     0,     0,    56,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,   262,     0,     0,
       0,     0,     0,    35,   131,     0,   132,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
     335,    20,     0,    55,     0,     0,    56,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   323,
       0,     0,     0,     0,     0,    35,   131,     0,   132,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,   376,    20,     0,    55,     0,     0,    56,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    35,    36,     0,
      37,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,     0,    20,    54,    55,     0,     0,
      56,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,   130,     0,     0,     0,     0,     0,    35,
     131,     0,   132,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,    52,    33,     0,   133,    34,    20,     0,    55,
       0,     0,    56,    35,    36,     0,    37,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
       0,    20,   172,    55,     0,     0,    56,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   130,
       0,     0,     0,     0,     0,    35,   131,     0,   132,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,   243,     0,    20,     0,    55,     0,     0,    56,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,   259,     0,     0,     0,     0,     0,    35,   131,     0,
     132,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,     0,    20,     0,    55,     0,     0,
      56,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,   272,     0,     0,     0,     0,     0,    35,
     131,     0,   132,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,     0,    20,     0,    55,
       0,     0,    56,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,   320,     0,     0,     0,     0,
       0,    35,   131,     0,   132,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,     0,    20,
       0,    55,     0,     0,    56,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,    30,    31,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,   329,     0,     0,
       0,     0,     0,    35,   131,     0,   132,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
      41,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
       0,    20,     0,    55,     0,     0,    56,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,   339,
       0,     0,     0,     0,     0,    35,   131,     0,   132,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,     0,    20,     0,    55,     0,     0,    56,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,    30,
      31,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,   380,     0,     0,     0,     0,     0,    35,   131,     0,
     132,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,    41,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,    30,    31,     0,     0,     0,    32,     0,
      52,    33,     0,    53,    34,    20,     0,    55,     0,     0,
      56,    35,    36,     0,    37,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,    41,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,    30,    31,     0,
       0,     0,    32,     0,    52,    33,     0,   155,    34,    20,
       0,    55,     0,     0,    56,    35,    36,     0,    37,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,    41,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,    22,    23,    24,    25,    26,    27,    28,     0,     0,
      29,    30,    31,     0,     0,     0,    32,     0,    52,    33,
       0,    53,    34,    20,     0,    55,     0,     0,    56,    35,
     131,     0,   132,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,     0,     0,    41,    42,     0,     0,
      43,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,    47,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,     0,    22,    23,    24,    25,    26,
      27,    28,     0,     0,    29,     0,    31,     0,     0,     0,
      32,     0,    52,     0,     0,    53,    34,    20,     0,    55,
       0,     0,    56,    35,     0,     0,     0,     0,     0,    38,
       0,    39,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    42,     0,     0,    43,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,     0,    22,
      23,    24,    25,    26,    27,    28,     0,     0,    29,     0,
      31,     0,     0,     0,    32,     0,     0,     0,     0,   146,
      34,   357,   440,    55,     0,     0,    56,    35,     0,     0,
       0,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,     0,    22,    23,    24,    25,    26,    27,    28,
       0,     0,    29,     0,    31,     0,     0,     0,    32,     0,
     145,     0,     0,   146,    34,     0,     0,    55,     0,     0,
      56,    35,     0,     0,     0,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    42,
       0,     0,    43,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    29,     0,    31,
       0,     0,     0,    32,     0,     0,     0,   146,   166,    34,
       0,    55,     0,     0,    56,     0,    35,     0,     0,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,   146,    34,     0,     0,    55,   170,     0,    56,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     0,     0,    29,     0,    31,     0,
       0,     0,    32,     0,     0,     0,   146,   244,    34,     0,
      55,     0,     0,    56,     0,    35,     0,     0,     0,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
       0,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,   146,   301,    34,     0,    55,     0,     0,    56,     0,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,   146,    34,     0,     0,
      55,   307,     0,    56,    35,     0,     0,     0,     0,     0,
      38,     0,    39,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
     146,    34,     0,     0,    55,   310,     0,    56,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,     0,    31,     0,     0,     0,    32,
       0,   312,     0,     0,   146,    34,     0,     0,    55,     0,
       0,    56,    35,     0,     0,     0,     0,     0,    38,     0,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,     0,    22,    23,
      24,    25,    26,    27,    28,     0,     0,    29,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,   146,    34,
     357,     0,    55,     0,     0,    56,    35,     0,     0,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,     0,    22,    23,    24,    25,    26,    27,    28,     0,
       0,    29,     0,    31,     0,     0,     0,    32,     0,   370,
       0,     0,   146,    34,     0,     0,    55,     0,     0,    56,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,    29,     0,    31,     0,     0,
       0,    32,     0,   373,     0,     0,   146,    34,     0,     0,
      55,     0,     0,    56,    35,     0,     0,     0,     0,     0,
      38,     0,    39,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,     0,
      22,    23,    24,    25,    26,    27,    28,     0,     0,    29,
       0,    31,     0,     0,     0,    32,     0,   413,     0,     0,
     146,    34,     0,     0,    55,     0,     0,    56,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,     0,    22,    23,    24,    25,    26,    27,
      28,     0,     0,    29,     0,    31,     0,     0,     0,    32,
       0,     0,     0,     0,   146,    34,     0,     0,    55,     0,
       0,    56,    35,     0,     0,     0,     0,     0,    38,     0,
      39,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    48,    49,    29,     0,    31,     0,     0,     0,
      32,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,    38,
       0,    39,     0,     0,    40,   231,     0,     0,   232,     0,
       0,    42,    55,     0,    43,    56,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    48,    49,    29,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
      38,     0,    39,     0,     0,    40,   317,     0,     0,   232,
       0,     0,    42,    55,     0,    43,    56,     0,    44,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    48,    49,    29,     0,    31,     0,
       0,     0,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,    38,     0,    39,     0,     0,    40,     0,     0,     0,
     232,   365,     0,    42,    55,     0,    43,    56,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    48,    49,    29,     0,    31,
       0,     0,     0,    32,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,    38,     0,    39,     0,     0,    40,     0,     0,
       0,   232,   406,     0,    42,    55,     0,    43,    56,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    48,    49,    29,     0,
      31,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,    38,     0,    39,     0,     0,    40,     0,
       0,     0,   232,   410,     0,    42,    55,     0,    43,    56,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    48,    49,    29,
       0,    31,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,    38,     0,    39,     0,     0,    40,
       0,     0,     0,   232,   430,     0,    42,    55,     0,    43,
      56,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    48,    49,
      29,     0,    31,     0,     0,     0,    32,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,    38,     0,    39,     0,     0,
      40,     0,     0,     0,   232,   434,     0,    42,    55,     0,
      43,    56,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    48,
      49,    29,     0,    31,     0,     0,     0,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,    38,     0,    39,     0,
       0,    40,     0,     0,     0,   232,   448,     0,    42,    55,
       0,    43,    56,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      48,    49,    29,     0,    31,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,    38,     0,    39,
       0,     0,    40,     0,     0,     0,   232,     0,     0,    42,
      55,     0,    43,    56,     0,    44,  -131,  -131,  -131,     0,
       0,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,     0,
    -131,  -131,  -131,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,     0,     0,     0,  -131,
    -131,     0,     0,     0,     0,     0,  -131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
       0,    55,     0,     0,    56
};

static const yytype_int16 yycheck[] =
{
      37,   129,    99,   129,    40,   129,   263,    40,    45,   105,
     368,    19,   305,   129,   110,   373,    46,    47,    48,    49,
      50,    51,    37,   114,    68,    69,    70,    80,    20,    73,
      74,    75,    76,    77,    78,    79,    80,    74,    82,    83,
      84,   111,   104,    89,   114,   142,   104,     0,    40,   102,
     106,   409,   114,    46,   412,   111,   114,   101,   102,    74,
     109,    53,   106,    99,   357,   111,    58,   324,    75,    76,
      77,    78,   108,   108,    50,   108,   111,   334,   335,   437,
     201,   202,   203,   204,   108,   108,    61,   111,   111,   346,
      74,    73,    74,   130,   101,   132,   105,    66,    67,   108,
      71,    72,   139,    64,   140,   110,   142,   140,   144,   106,
     107,   144,   199,   200,   242,    15,   242,   132,   242,   376,
      68,    69,    70,   111,   139,   112,   242,   107,   225,   166,
     167,    65,   168,   169,   108,   168,   109,   129,   106,   176,
     177,   133,   206,   207,   107,   104,   104,    12,   108,    14,
      79,   166,   167,    18,   146,   139,   253,    83,   114,    24,
      84,    82,   177,   155,   106,   111,    31,   111,   111,   104,
     111,   104,    37,    25,    39,   107,    25,   104,   208,   209,
     210,   112,   166,   167,    49,    25,   114,   112,   312,   225,
     105,   114,   316,   177,   114,   112,   312,   104,    25,   105,
     316,    25,    25,   108,    25,   103,   108,   244,   245,   246,
     247,   248,   111,   205,   111,   104,   112,   253,   112,   112,
     104,   258,   259,    25,    25,   262,   263,    25,    25,   244,
     245,   112,   112,   248,   105,   272,   266,   104,   275,   108,
     108,   104,    25,   258,   368,   104,   111,   108,   263,   373,
     242,   243,   368,    12,   110,    14,    25,   373,   108,    18,
     244,   245,   108,   108,   248,    24,   108,   108,    19,    58,
     304,   350,    31,   195,   258,   242,   357,   193,    37,   263,
      39,    -1,   319,   320,   196,   409,   323,   324,   412,   197,
      49,   205,   329,   409,   198,   332,   412,    -1,   335,    -1,
     337,    -1,   339,    -1,   319,    -1,   343,    -1,    -1,   324,
      -1,   348,    -1,   437,    -1,   345,    -1,    -1,    -1,    -1,
     335,   437,    -1,    -1,    41,    -1,    -1,    -1,   365,    46,
      47,    48,    49,    50,    51,   319,    53,    -1,    55,   376,
     324,   378,    -1,   380,    -1,    -1,   383,    -1,   385,    -1,
      -1,   335,    -1,    -1,   391,   114,    -1,    -1,    -1,    -1,
      -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,   405,   406,
      -1,   408,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   418,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,   376,   430,    -1,   410,   433,   434,    -1,   436,
      -1,   438,    -1,    -1,    -1,    -1,   443,    -1,    -1,   446,
      -1,   448,   129,    -1,    -1,    -1,   133,   454,   433,   434,
      -1,   436,    -1,   438,    -1,    -1,   410,    -1,    -1,   146,
      -1,   446,    -1,   448,    -1,    -1,    -1,    -1,   155,   454,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
     434,    41,   436,    -1,   438,    -1,    46,    47,    48,    49,
      50,    51,   446,    53,   448,    55,    -1,    -1,    -1,    -1,
     454,    -1,    -1,    -1,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,   228,    -1,    -1,   231,   232,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,    -1,   146,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    53,    -1,    55,    -1,   312,    -1,    -1,   315,   316,
     317,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
     210,    -1,    -1,    -1,   214,    -1,    -1,    -1,   345,   219,
      -1,    -1,    -1,   350,   224,    -1,    -1,   354,   228,    -1,
     357,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   368,   242,   243,   132,   133,   373,    -1,   375,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,   129,   146,    -1,
      -1,   133,    -1,    -1,    -1,    -1,   266,   155,   268,    -1,
      -1,    -1,    -1,    -1,   146,    -1,   403,    -1,    -1,    -1,
      -1,    -1,   409,   155,    -1,   412,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   305,   194,    -1,    -1,    -1,
     437,    -1,   312,    -1,    -1,   315,   316,   317,    -1,    -1,
     192,    -1,   194,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
     228,    -1,   214,   231,   232,   345,    -1,   219,    -1,    -1,
     350,    -1,   224,    -1,   354,   243,   228,   357,    -1,   231,
     232,    -1,    -1,   251,    -1,    -1,    -1,    -1,   368,    -1,
     242,   243,    -1,   373,    -1,   375,    -1,    -1,    -1,   251,
     268,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,   268,    -1,    -1,   106,
      -1,    -1,    -1,   403,   111,    -1,    -1,    -1,    -1,   409,
      -1,    -1,   412,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,   423,    -1,    -1,    -1,   315,    -1,   317,
      -1,    -1,    -1,   305,    -1,    -1,    -1,   437,    -1,    -1,
     312,    41,    -1,   315,   316,   317,    46,    47,    48,    49,
      50,    51,    -1,    53,    -1,    55,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,   354,    14,    -1,   357,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,   354,    -1,    31,   357,    -1,   375,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,   368,    -1,    -1,    -1,
      -1,   373,    49,   375,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,   403,    -1,   133,    81,   423,    -1,   409,    85,    -1,
     412,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,   155,    -1,    -1,   105,    -1,
     107,    -1,   109,   110,   111,   437,    -1,   114,    -1,    46,
      47,    48,    49,    50,    51,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
     210,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,   266,    -1,   268,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    -1,    53,    -1,    55,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,   305,   106,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,   315,   193,   317,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,   210,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,   346,    -1,    -1,    -1,
     350,    -1,    -1,    -1,   354,    -1,    -1,   357,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,   266,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   403,   193,    -1,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,   210,    -1,   423,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,   210,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,   224,   334,    -1,    -1,
     228,    -1,    -1,   231,   232,    -1,    -1,    -1,   345,   346,
      -1,    -1,    -1,   350,    -1,   243,    -1,   266,    -1,    -1,
      -1,    -1,    -1,   251,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,    -1,   266,    -1,
     268,   106,    -1,    -1,    -1,    41,   111,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    -1,    53,    -1,    55,
      68,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   334,    -1,   315,    -1,   317,
      -1,    -1,    -1,   101,   102,    -1,   345,   346,    -1,    -1,
     108,   350,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,   346,    -1,
      -1,    -1,   350,    -1,    -1,    -1,   354,    -1,    -1,   357,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,   155,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    -1,    -1,    -1,   403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,   423,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   210,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,    -1,
      -1,    -1,   228,    20,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
     266,    58,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    -1,   305,
      -1,    -1,    31,    32,    -1,    34,    -1,    -1,    37,   315,
      39,   317,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,   334,    -1,
      -1,    -1,   129,    -1,    63,    -1,   133,    66,    67,   345,
     346,    -1,    71,    72,   350,    -1,    -1,    -1,   354,   146,
      -1,   357,    81,    -1,    -1,    -1,    85,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,   108,
     109,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   403,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,    -1,    -1,    -1,   423,    -1,    -1,
      -1,   218,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    25,   242,   243,    -1,    -1,    -1,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,   266,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    68,    69,    70,    85,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,
     111,    -1,    -1,   114,   101,   102,    -1,   334,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,   345,   346,
      12,    13,    14,   350,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,   108,   109,    -1,   111,
      -1,    -1,   114,     3,     4,     5,     6,     7,     8,     9,
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
      -1,   111,    -1,    -1,   114,     3,     4,     5,     6,     7,
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
     108,   109,    -1,   111,    -1,    -1,   114,     3,     4,     5,
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
      -1,   107,   108,   109,    -1,   111,    -1,    -1,   114,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,   107,    -1,   109,   110,   111,    -1,    -1,
     114,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,
      18,    -1,   104,    21,    -1,   107,    24,   109,    -1,   111,
      -1,    -1,   114,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,    -1,   114,     3,     4,     5,
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
      -1,   107,    -1,   109,    -1,   111,    -1,    -1,   114,     3,
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
     104,    -1,    -1,   107,    -1,   109,    -1,   111,    -1,    -1,
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
      -1,    -1,   114,     3,     4,     5,     6,     7,     8,     9,
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
      -1,   111,    -1,    -1,   114,     3,     4,     5,     6,     7,
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
      -1,   109,    -1,   111,    -1,    -1,   114,     3,     4,     5,
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
      -1,   107,    -1,   109,    -1,   111,    -1,    -1,   114,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,    -1,    18,    -1,
     104,    21,    -1,   107,    24,   109,    -1,   111,    -1,    -1,
     114,    31,    32,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    18,    -1,   104,    21,    -1,   107,    24,   109,
      -1,   111,    -1,    -1,   114,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    -1,   104,    21,
      -1,   107,    24,   109,    -1,   111,    -1,    -1,   114,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,   104,    -1,    -1,   107,    24,   109,    -1,   111,
      -1,    -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   107,
      24,   109,   110,   111,    -1,    -1,   114,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,
     104,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,    -1,
     114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,   107,   108,    24,
      -1,   111,    -1,    -1,   114,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,   107,    24,    -1,    -1,   111,   112,    -1,   114,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,   107,   108,    24,    -1,
     111,    -1,    -1,   114,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,   107,   108,    24,    -1,   111,    -1,    -1,   114,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,   107,    24,    -1,    -1,
     111,   112,    -1,   114,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
     107,    24,    -1,    -1,   111,   112,    -1,   114,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,   104,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,
      -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,   107,    24,
     109,    -1,   111,    -1,    -1,   114,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,   104,
      -1,    -1,   107,    24,    -1,    -1,   111,    -1,    -1,   114,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,   104,    -1,    -1,   107,    24,    -1,    -1,
     111,    -1,    -1,   114,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,   104,    -1,    -1,
     107,    24,    -1,    -1,   111,    -1,    -1,   114,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,   107,    24,    -1,    -1,   111,    -1,
      -1,   114,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    71,    72,    12,    -1,    14,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    42,   104,    -1,    -1,   107,    -1,
      -1,    49,   111,    -1,    52,   114,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    71,    72,    12,    -1,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    42,   104,    -1,    -1,   107,
      -1,    -1,    49,   111,    -1,    52,   114,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    71,    72,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
     107,   108,    -1,    49,   111,    -1,    52,   114,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    71,    72,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,   107,   108,    -1,    49,   111,    -1,    52,   114,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    71,    72,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,   107,   108,    -1,    49,   111,    -1,    52,   114,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    71,    72,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,   107,   108,    -1,    49,   111,    -1,    52,
     114,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    71,    72,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,   107,   108,    -1,    49,   111,    -1,
      52,   114,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    71,
      72,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,   107,   108,    -1,    49,   111,
      -1,    52,   114,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      71,    72,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,   107,    -1,    -1,    49,
     111,    -1,    52,   114,    -1,    55,    68,    69,    70,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,   111,    -1,    -1,   114
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
      81,    85,   104,   107,   110,   111,   114,   120,   121,   122,
     123,   124,   126,   127,   132,   133,   135,   136,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   174,   175,
     176,   177,   178,   179,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   202,   104,   114,   104,   114,   107,
      25,    32,    34,   107,   124,   125,   126,   134,   137,   147,
     185,   191,   175,   177,   185,   104,   107,   147,   148,   163,
     164,   168,   169,   179,   106,   107,   124,   162,   178,   182,
     191,   162,   162,   162,   162,   162,   108,   147,   185,   191,
     112,   147,   110,   122,   104,   104,    25,   108,   124,   125,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   150,    80,   102,    79,    83,    84,    82,    73,
      74,    75,    76,    77,    78,   101,    66,    67,    68,    69,
      70,    71,    72,   106,   111,   176,   177,   111,   106,   107,
     114,   128,   129,   130,   111,   175,   177,   111,   111,   104,
     104,   104,   107,   127,   138,   140,   146,   148,   163,   164,
     166,   124,   107,   107,   108,   147,    25,    25,   108,   124,
     125,   111,   177,   175,   177,   147,   104,   114,   147,    25,
     124,   125,    25,   108,   124,   125,   108,   177,   111,   177,
     112,   124,    25,   124,   125,    25,   147,   153,   147,   154,
     155,   156,   157,   158,   158,   159,   159,   159,   159,   185,
     189,   191,   161,   161,   162,   162,   162,   114,   147,   112,
     191,   108,   147,   180,   105,    89,   111,   112,   177,   112,
     112,   147,   104,   147,   147,   104,   105,   104,   138,   147,
      25,   124,   125,    25,   108,   124,   125,   124,   124,    25,
     124,   125,    25,   177,   108,   108,   124,    25,   124,    25,
     124,   125,   165,    25,   162,   108,   108,   124,    25,   124,
     103,   111,   111,   112,   105,   108,   129,   109,   131,   147,
     172,   173,   201,   112,   112,   108,   139,   140,   104,   108,
     104,   147,   146,   104,   147,   104,   108,   124,    25,   124,
      25,   124,   125,    25,   124,    25,   124,   165,   124,   124,
     124,    25,   124,   162,   165,   124,   151,   112,   147,   105,
     110,   131,   173,   105,   124,   108,   108,   139,   108,   104,
     108,   139,   104,   104,   147,   125,   124,   124,    25,   124,
     124,   124,   110,   105,   110,   131,   124,   124,   108,   124,
     108,   139,   125,   108,   108,   139,   108,   104,    25,   124,
     110,   124,   124,   108,   125,   125,   108,   125,   108,   139,
     125,   124,   125,   125,   108,   125
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
    {printf("error: ';' esperado\n");}
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego sino es incorrecta\n");}
#line 2700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia si luego es incorrecta\n");}
#line 2706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 72 "parser.y" /* yacc.c:1646  */
    {printf("error : la sentencia mientras es incorrecta\n");}
#line 2712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("error: ';' esperado\n");}
#line 2742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("error: la sentencia creacion de arreglo es incorrecta\n");}
#line 2748 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2752 "parser.tab.c" /* yacc.c:1646  */
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
    fprintf(stderr, "A.Sintactico: %s\n", s);
    return 0;
}
