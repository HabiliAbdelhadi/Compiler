%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "List.h"
#include "List2.h"
extern int yylineno;
extern int coll;

extern FILE * yyin;
int yylex(void);
int yyerror();
int locality = 1;
char tmp_save[10] = "\0";
char tmp_return[10] = "\0";
%}
%union
{char *chaine ;
 int e ; 
 float f;
 char c;
 }
%token INTEGER REEL CHARACTER LOGICAL
%token PROGRAM END ROUTINE ENDR CALL DIMENSION READ WRITE IF THEN ELSE ENDIF DOWHILE ENDDO EQUIVALENCE TRUE FALSE 
%token <e> cst_entier
%token <f> cst_reel
%token <chaine> IDF
%token <chaine> cst_string
/* %type <f> EXPR_ARTH */
%type <chaine> TYPE
%left '+' '-'
%left '*' '/'
%left NEG
%left EQ GE GT LE LT NE 
%left OR
%left AND
%left '(' ')'


%%
S: FNC TITRE MAIN {printf("------------------------------Syntax correcte---------------------------------"); YYACCEPT;}
TITRE : PROGRAM IDF ';' {locality=0;}
MAIN :  DEC INST END {locality=0;}
ListIdf : IDF {element *p =searchByState($1);if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",$1,yylineno,coll);else {Forceaddelement($1,"IDF",p->type,p->val,p->charVal);Edit($1,tmp_save,locality);}}else Edit($1,tmp_save,locality);}
    |IDF  DIMENSION '('Taille')'{element *p =searchByState($1);if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",$1,yylineno,coll);else {Forceaddelement($1,"IDF",p->type,p->val,p->charVal);Edit($1,tmp_save,locality);}}else Edit($1,tmp_save,locality);}
    | ListIdf ',' IDF {element *p =searchByState($3);if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",$3,yylineno,coll);else {Forceaddelement($3,"IDF",p->type,p->val,p->charVal);Edit($3,tmp_save,locality);}}else Edit($3,tmp_save,locality);}
    |ListIdf ',' IDF  DIMENSION '('Taille')'{element *p =searchByState($3);if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",$3,yylineno,coll);else {Forceaddelement($3,"IDF",p->type,p->val,p->charVal);Edit($3,tmp_save,locality);}}else Edit($3,tmp_save,locality);}
//the above code is a sample of the fuckfests i make at 2am \_('-')_/
Taille : Taille '*' cst_entier| cst_entier ;

TYPE : INTEGER {strcpy(tmp_save,"INTEGER");$$=strdup("INTEGER");}| REEL {strcpy(tmp_save,"REEL");$$=strdup("REEL");}| LOGICAL {strcpy(tmp_save,"LOGICAL");$$=strdup("LOGICAL");}| CHARACTER{strcpy(tmp_save,"CHARACTER");$$=strdup("CHARACTER");}

FNC : /*empty*/
    |FNC TYPE ROUTINE IDF PARAMS ')' DEC INST RETURN ENDR {locality++;element *p =searchByState($4);
    if(strlen(p->type)&& p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",$4,yylineno,coll);
    else {char *strtmp;strcpy(strtmp,"\0");strcat(strtmp,$2);strcat(strtmp,"_FNC");Edit($4,strtmp,0);}
    if(strcmp(tmp_return,$4))printf("\n erreur semantique: valeur retourne =/= nom de la fnc: %s , ligne %d colonne %d\n",$4,yylineno,coll);};
RETURN : IDF '=' EXPR_ARTH {strcpy(tmp_return,$1);/*check type*/}| IDF '=' cst_string{strcpy(tmp_return,$1);/*check type*/} | IDF '=' EXP_LOG {strcpy(tmp_return,$1);/*check type*/}
PARAMS :  '(' IDF {element *p =searchByState($2); Edit($2,"\0",locality);}
    |'(' IDF  DIMENSION '('Taille')'{element *p =searchByState($2); Edit($2,"\0",locality);}
    | PARAMS ',' IDF {element *p =searchByState($3); Edit($3,"\0",locality);}
    |PARAMS ',' IDF  DIMENSION '('Taille')'{element *p =searchByState($3); Edit($3,"\0",locality);}
DEC: /* empty */
    | DEC TYPE ListIdf ';' 

INST : /*empty*/
    |INST IDF '(' Taille ')' '=' EXPR_ARTH ';' 
    |INST IDF '(' Taille ')' '=' cst_string ';' {/*maj ts idf*/};
    |INST IDF '=' EXPR_ARTH ';' {element *idf = searchByState($2);
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",$2,yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 || strcmp(idf->type,"REEL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",$2,yylineno,coll);}}};
    |INST IDF '=' cst_string ';' {element *idf = searchByState($2);
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",$2,yylineno,coll);}
                            else{if(strcmp(idf->type,"CHARACTER")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",$2,yylineno,coll);}}};
    |INST IDF '=' EXP_LOG';' {element *idf = searchByState($2);
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",$2,yylineno,coll);}
                            else{if(strcmp(idf->type,"LOGICAL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",$2,yylineno,coll);}}};
    |INST READ '(' IDF ')' ';' {element *idf = searchByState($2);
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",$2,yylineno,coll);}};
    |INST WRITE '(' StringEtIdf ')' ';' ;
    |INST IF_BLOCK ;
    |INST WHILE_BLOCK; 
    |INST CALL_FNC;
    |INST EQUIV;

StringEtIdf: cst_string | IDF {/*check si ca existe*/}| IDF '(' Taille ')'| StringEtIdf ',' IDF {/*check si ca existe*/}|StringEtIdf ',' cst_string|StringEtIdf ',' IDF '(' Taille ')';

EQUIV : EQUIVALENCE '(' ListIdf ')' ',' '(' ListIdf ')' ';'
CALL_FNC : IDF '=' CALL IDF /*check si fnc*/ '(' ListIdf ')' ';' |  IDF '(' Taille ')' '=' CALL IDF /*check si fnc*/ '(' ListIdf ')' ';' 

IF_BLOCK : IF '(' EXP_LOG ')' THEN INST IF_CLOSURE;
IF_CLOSURE : ENDIF | ELSE INST ENDIF;
WHILE_BLOCK : DOWHILE '(' EXP_LOG ')' THEN INST ENDDO;

//EXPRESSION ARETHMETIC: 
EXPR_ARTH : cst_entier | cst_reel | IDF | IDF '(' Taille ')' 
    | EXPR_ARTH '+' EXPR_ARTH | EXPR_ARTH '-' EXPR_ARTH | EXPR_ARTH '/' EXPR_ARTH | EXPR_ARTH '*' EXPR_ARTH
    | '-' EXPR_ARTH %prec NEG
    | '(' EXPR_ARTH ')' ; 

//EXPRESSION LOGIQUE:
LOG_TERM : COMPAR | TRUE | FALSE ;
COMPAR :EXPR_ARTH EQ EXPR_ARTH |EXPR_ARTH NE EXPR_ARTH |EXPR_ARTH LE EXPR_ARTH|EXPR_ARTH LT EXPR_ARTH|EXPR_ARTH GE EXPR_ARTH|EXPR_ARTH GT EXPR_ARTH;
EXP_LOG : LOG_TERM | EXP_LOG AND EXP_LOG  |  EXP_LOG OR EXP_LOG|'('EXP_LOG')'

%%
int yyerror(char* msg)
{
printf("\n erreur syntaxique dans la ligne %d colonne %d\n",yylineno,coll);  
return 1; 
}  
int main()
{

yyin = fopen( "programme.txt", "r" );
if (yyin==NULL) {printf("input file not found , compiling from the console input :\n");yyparse();}
else yyparse();
char rep='n';
printf("\nafficher la table syntaxique? Y/N\n");
scanf("%c",&rep);
if(rep=='y'||rep=='Y'){printList();printList2();}
freeList();freeList2();
return 1;
}
