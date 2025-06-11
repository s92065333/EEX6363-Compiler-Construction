
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     YYEOF = 258,
     ERROR_TOKEN = 259,
     INTEGER_CONSTANT = 260,
     FLOATING_POINT_CONSTANT = 261,
     IDENTIFIER = 262,
     ELSE_TOKEN = 263,
     INTEGER_TOKEN = 264,
     SELF_TOKEN = 265,
     FLOAT_TOKEN = 266,
     ISA_TOKEN = 267,
     CONSTRUCT_TOKEN = 268,
     FUNC_TOKEN = 269,
     PRIVATE_TOKEN = 270,
     THEN_TOKEN = 271,
     IF_TOKEN = 272,
     PUBLIC_TOKEN = 273,
     LOCAL_TOKEN = 274,
     IMPLEMENT_TOKEN = 275,
     READ_TOKEN = 276,
     VOID_TOKEN = 277,
     AND_TOKEN = 278,
     CLASS_TOKEN = 279,
     OR_TOKEN = 280,
     RETURN_TOKEN = 281,
     WHILE_TOKEN = 282,
     ATTRIBUTE_TOKEN = 283,
     WRITE_TOKEN = 284,
     NOT_TOKEN = 285,
     ASSIGN_OP = 286,
     EQ_OP = 287,
     NE_OP = 288,
     LE_OP = 289,
     GE_OP = 290,
     ARROW = 291,
     PLUS_OP = 292,
     MINUS_OP = 293,
     MUL_OP = 294,
     DIV_OP = 295,
     LPAREN = 296,
     RPAREN = 297,
     LBRACE = 298,
     RBRACE = 299,
     LBRACKET = 300,
     RBRACKET = 301,
     SEMICOLON = 302,
     COMMA = 303,
     DOT = 304,
     COLON = 305,
     LT_OP = 306,
     GT_OP = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "parser.y"

    int iValue;
    double fValue;
    char *sValue;
    SymbolEntry *sEntry;



/* Line 1676 of yacc.c  */
#line 113 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

