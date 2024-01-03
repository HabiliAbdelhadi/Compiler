%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include <assert.h>
#include "bison.tab.h"
void addelt( char *name, char *code);
void addelement( char *name, char *code, char *type, float val, char *charVal);
int coll=1;
extern YYSTYPE yylval;
%}
%option noyywrap
%option yylineno
lettre [a-zA-Z]
chiffre [0-9]
Entier  0|[1-9]{chiffre}*
REEL    {Entier}(\.{chiffre}+)?
IDF {lettre}({lettre}|{chiffre})*
comment "%"[^;]*";"
STRING \"[^\"]*\"
AND_OP \.\s*AND\s*\.
OR_OP \.\s*OR\s*\.
GT_OP \.\s*GT\s*\.
GE_OP \.\s*GE\s*\.
LE_OP \.\s*LE\s*\.
LT_OP \.\s*LT\s*\.
EQ_OP \.\s*EQ\s*\.
NE_OP \.\s*NE\s*\.
%%
"PROGRAM" {printf("PROGRAM ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(PROGRAM);}
"END" {printf("END ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(END);}
"ROUTINE" {printf("ROUTINE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(ROUTINE);}
"ENDR" {printf("ENDR ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(ENDR);}
"CALL" {printf("CALL ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(CALL);}
"DIMENSION" {printf("DIMENSION ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(DIMENSION);}
"INTEGER" {printf("INTEGER ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(INTEGER);}
"REEL" {printf("REEL ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(REEL);}
"LOGICAL" {printf("LOGICAL ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(LOGICAL);}
"CHARACTER" {printf("CHARACTER ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(CHARACTER);}
"READ" {printf("READ ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(READ);}
"WRITE" {printf("WRITE " );coll+=strlen(yytext);addelt(yytext,"mot cle");return(WRITE);}
"IF" {printf("IF");coll+=strlen(yytext);addelt(yytext,"mot cle");return(IF);}
"THEN" {printf("THEN ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(THEN);}
"ELSE" {printf("ELSE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(ELSE);}
"ENDIF" {printf("ENDIF ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(ENDIF);}
"DOWHILE" {printf("DOWHILE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(DOWHILE);}
"ENDDO" {printf("ENDDO ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(ENDDO);}
"EQUIVALENCE" {printf("EQUIVALENCE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(EQUIVALENCE);}
{OR_OP} {printf(".OR.");coll+=strlen(yytext);addelt("OR","mot cle");return(OR);}
{AND_OP} {printf(".AND.");coll+=strlen(yytext);addelt("AND","mot cle");return(AND);}
{GT_OP} {printf(".GT.");coll+=strlen(yytext);addelt("GT","mot cle");return(GT);}
{GE_OP} {printf(".GE.");coll+=strlen(yytext);addelt("GE","mot cle");return(GE);}
{EQ_OP} {printf(".EQ.");coll+=strlen(yytext);addelt("EQ","mot cle");return(EQ);}
{NE_OP} {printf(".NE.");coll+=strlen(yytext);addelt("NE","mot cle");return(NE);}
{LE_OP} {printf(".LE.");coll+=strlen(yytext);addelt("LE","mot cle");return(LE);}
{LT_OP} {printf(".LT.");coll+=strlen(yytext);addelt("LT","mot cle");return(LT);}
"TRUE" {printf("TRUE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(TRUE);}
"FALSE" {printf("FALSE ");coll+=strlen(yytext);addelt(yytext,"mot cle");return(FALSE);}
{STRING} {coll+=strlen(yytext);printf("%s",yytext);addelement( yytext, "CST", "CHARACTER",0, yytext);return(cst_string);}
{IDF} {if(strlen(yytext)>10)printf("Warning : à la ligne %d collone %d : l'idf %s depasse 10 caracteres\n",yylineno,coll,yytext);
else printf("%s",yytext);
addelement(yytext,"IDF","\0",0,"\0");coll+=strlen(yytext);yylval.chaine=strdup(yytext);return(IDF);}
{Entier} {if(atoi(yytext)>=0 && atoi(yytext)<32768)  //0 <-> 32768 the '-' will be treated as an arethmetic expression
            printf("%s",yytext);
        else printf("Warning ,la ligne %d ,la colonne %d :entier %s depasse la limite! \n",yylineno,coll,yytext);
        addelement(yytext,"CST","INTEGER",atoi(yytext),"\0");coll+= strlen(yytext);yylval.e=atoi(yytext);return(cst_entier);}
{REEL}    {int intValue = atoi(yytext);char *decimalPart = strchr(yytext, '.');
if (intValue >= 0 && intValue < 32768) {
/*verifie les parties decimal et entierre separement 
un REAL est un INTEGER.INTEGER par definition
est un INTEGER doit etre <32768 par definition*/
if (decimalPart != NULL) {
int decimalValue = atoi(decimalPart + 1);
    if (decimalValue >= 0 && decimalValue < 32768) {
    printf("%s", yytext);
    coll += strlen(yytext);}
        else {
        printf("Warning, ligne %d, colonne %d : partie décimale du réel %s dépasse la limite!\n", yylineno, coll, yytext);}}
            else {printf("REEL %s\n", yytext);coll += strlen(yytext);}} 
                else {printf("Warning, ligne %d, colonne %d : partie entière du réel %s dépasse la limite!\n", yylineno, coll, yytext);}
                addelement(yytext,"CST","INTEGER",atof(yytext),"\0");yylval.f=atof(yytext);return(cst_reel);}
"=" {printf("=");coll+=1;addelt(yytext,"separateur");return('=');}
"*" {printf("*");coll+=1;addelt(yytext,"separateur");return('*');}
"/" {printf("/");coll+=1;addelt(yytext,"separateur");return('/');}
"+" {printf("+");coll+=1;addelt(yytext,"separateur");return('+');}
"-" {printf("-");coll+=1;addelt(yytext,"separateur");return('-');}
";" {printf(";");coll+=1;addelt(yytext,"separateur");return(';');}
"," {printf(",");coll+=1;addelt(yytext,"separateur");return(',');}
"(" {printf("(");coll+=1;addelt(yytext,"separateur");return('(');}
")" {printf(")");coll+=1;addelt(yytext,"separateur");return(')');}
"." {printf(".");coll+=1;addelt(yytext,"separateur");return('.');}
[ \t] {coll+=strlen(yytext);}
\n {printf("\n");coll=1;}
{comment} {printf(" commentaire\n");
int i=0;for(i =0;i<strlen(yytext);i++){ //coll counter supports multi lines comments
    if(yytext[i] == '\n') coll=1;else coll++;
}}
. {printf("erreur lexicale à la ligne %d collone %d : %s \n",yylineno,coll,yytext);
coll+=strlen(yytext);/*carry on without aborting just for testing*/}
%%
