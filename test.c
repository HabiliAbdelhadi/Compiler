#include <stdio.h>
#include <stdlib.h>
int somme(int z, int b)
{
    int a = 5;
    return a + z + b;
}
int main()
{
    int a = 0;
    printf("%d", somme(2, 2));
}