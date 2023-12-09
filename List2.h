
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elt // no need for a 'state'
{
    char name[20];
    char code[20];
    struct elt *next;
} elt;
elt *TS2= NULL;

elt *searchByState2( char *name)
{
    elt *current = TS2;

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

void addelt( char *name, char *code) //si ca n'existe pas encore
{
    elt *newelt = searchByState2( name);
    if (!newelt)
    {
        newelt = (elt *)malloc(sizeof(elt));
        newelt->next = TS2;
        strcpy(newelt->name, name);
        strcpy(newelt->code, code);
        TS2 = newelt;
    }

}

void printList2()
{
    if (TS2 == NULL)
        printf("\n---------list vide---------\n");

    else
    {
        printf("\n/Table des mots cles et des separateurs /\n");
        printf("___________________________\n");
        printf("| NomEntite |  CodeEntite | \n");
        printf("___________________________\n");
        elt *current = TS2;
        while (current != NULL)
        {
            printf("|%10s |%12s | \n", current->name, current->code);
            current = current->next;
        }
    }
}

void *freeList2()
{
    elt *current = TS2;
    elt *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

