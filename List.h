
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct size {
    int nature; //0 si tableau 1 si matrice
    int x;
    int y;
}size;
typedef struct element // no need for a 'state'
{
    char name[20];
    char code[20];
    char type[20];
    float val;
    char charVal[20];
    int locality; 
    //locality = 0 <==> variable globale, locality = 1 <==> variable locale dans la 1ere fnc, locality = 2 <==> variable locale dans la 2eme fnc...
    size taille;
    struct element *next;
} element;

element *TS = NULL;

element *searchByState(char *name)
{
    element *current = TS;

    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void addelement( char *name, char *code, char *type, float val, char *charVal) //si ca n'existe pas encore
{
    element *newelement = searchByState( name);
    if (!newelement)
    {
        newelement = (element *)malloc(sizeof(element));
        newelement->next = TS;
        strcpy(newelement->name, name);
        strcpy(newelement->code, code);
        strcpy(newelement->type, type);
        newelement->locality=0;
        if (strcmp(type, "INTEGER") == 0 || strcmp(type, "REEL") == 0)
            newelement->val = val;
        if (strcmp(type, "CHARACTER") == 0)
            strcpy(newelement->charVal, charVal);
        newelement->taille.nature = 0;
        newelement->taille.x = 0;
        newelement->taille.y = 0;
        TS = newelement;
    }

}

void Forceaddelement( char *name, char *code, char *type, float val, char *charVal) //si ca n'existe pas encore
{
    element *newelement = searchByState( name);
        newelement = (element *)malloc(sizeof(element));
        newelement->next = TS;
        strcpy(newelement->name, name);
        strcpy(newelement->code, code);
        strcpy(newelement->type, type);
        newelement->locality=0;
        if (strcmp(type, "INTEGER") == 0 || strcmp(type, "REEL") == 0)
            newelement->val = val;
        if (strcmp(type, "CHARACTER") == 0)
            strcpy(newelement->charVal, charVal);
        newelement->taille.nature = 0;
        newelement->taille.x = 0;
        newelement->taille.y = 0;
        TS = newelement;

}

void printList()
{
    if (TS == NULL)
        printf("\n-------------------------list vide-------------------------\n");

    else
    {
        printf("\n/***********************Table des symboles IDF**********************/\n");
        printf("_________________________________________________________________________________________\n");
        printf("| Nom_Entite |  Code_Entite  |  Type_Entite |   Val_Entite |   Block      |   Taille  \n");
        printf("_________________________________________________________________________________________\n");
        element *current = TS;
        while (current != NULL)
        {
            if (strcmp(current->code, "IDF") == 0)
                printf("|%10s |%15s | %12s | %12s | %12d |   %d * %d \n", current->name, current->code, current->type,"\0",current->locality,current->taille.x,current->taille.y);
            else if (strcmp(current->type, "CHARACTER") == 0)
                printf("|%10s |%15s | %12s | %12s | %12d |   %d * %d\n", current->name, current->code, current->type, current->charVal,current->locality,current->taille.x,current->taille.y);
            else
                printf("|%10s |%15s | %12s | %12f | %12d |   %d * %d\n", current->name, current->code, current->type, current->val,current->locality,current->taille.x,current->taille.y);
            current = current->next;
        }
    }
}

void *freeList()
{
    element *current = TS;
    element *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
void Edit(char* name,char*type,int locality){
    element* pointer = searchByState(name);
    strcpy(pointer->type,type);
    pointer->locality=locality;
}
void EditTaille(char* name,char * size){
    element* pointer = searchByState(name);
    char * token;
    if(strchr(size,'*')){token = strtok(size,"*");pointer->taille.x=atoi(token);token=strtok(NULL,"*");pointer->taille.y=atoi(token);pointer->taille.nature = 1;}
    else {pointer->taille.x=atoi(size);}
}
void EditTailleRadic(char* name,int size){
    element* pointer = searchByState(name);
    pointer->taille.x=size;
}