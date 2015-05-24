/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     T_PROGRAM = 258,
     T_BEGIN = 259,
     T_END = 260,
     T_VAR = 261,
     T_CONST = 262,
     T_REAL = 263,
     T_INTEGER = 264,
     T_PROCEDURE = 265,
     T_READ = 266,
     T_WRITE = 267,
     T_WHILE = 268,
     T_IF = 269,
     T_THEN = 270,
     T_ELSE = 271,
     T_FOR = 272,
     T_TO = 273,
     T_DO = 274,
     T_IGUAL = 275,
     T_DIFERENTE = 276,
     T_MAIORIGUAL = 277,
     T_MENORIGUAL = 278,
     T_MAIOR = 279,
     T_MENOR = 280,
     T_SOMA = 281,
     T_SUBTRACAO = 282,
     T_MULTIPLICACAO = 283,
     T_DIVISAO = 284,
     T_ATRIBUICAO = 285,
     T_PONTOEVIRGULA = 286,
     T_DOISPONTOS = 287,
     T_APARENTESES = 288,
     T_FPARENTESES = 289,
     T_VIRGULA = 290,
     T_PONTO = 291,
     T_INTEIROGRANDEDEMAIS = 292,
     T_IDGRANDEDEMAIS = 293,
     T_NUMEROMALFORMADO = 294,
     CARACTERINVALIDO = 295,
     T_NUMERO_INT = 296,
     T_NUMERO_REAL = 297,
     T_ID = 298,
     PALAVRARESERVADA = 299
   };
#endif
/* Tokens.  */
#define T_PROGRAM 258
#define T_BEGIN 259
#define T_END 260
#define T_VAR 261
#define T_CONST 262
#define T_REAL 263
#define T_INTEGER 264
#define T_PROCEDURE 265
#define T_READ 266
#define T_WRITE 267
#define T_WHILE 268
#define T_IF 269
#define T_THEN 270
#define T_ELSE 271
#define T_FOR 272
#define T_TO 273
#define T_DO 274
#define T_IGUAL 275
#define T_DIFERENTE 276
#define T_MAIORIGUAL 277
#define T_MENORIGUAL 278
#define T_MAIOR 279
#define T_MENOR 280
#define T_SOMA 281
#define T_SUBTRACAO 282
#define T_MULTIPLICACAO 283
#define T_DIVISAO 284
#define T_ATRIBUICAO 285
#define T_PONTOEVIRGULA 286
#define T_DOISPONTOS 287
#define T_APARENTESES 288
#define T_FPARENTESES 289
#define T_VIRGULA 290
#define T_PONTO 291
#define T_INTEIROGRANDEDEMAIS 292
#define T_IDGRANDEDEMAIS 293
#define T_NUMEROMALFORMADO 294
#define CARACTERINVALIDO 295
#define T_NUMERO_INT 296
#define T_NUMERO_REAL 297
#define T_ID 298
#define PALAVRARESERVADA 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

