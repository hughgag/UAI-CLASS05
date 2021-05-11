#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int Val1=0,Val2=0,Val3=0,Total=0,Promedio=0;
    printf("Ingrese el Val1: \n");
    scanf("%d",&Val1);
    printf("Ingrese el Val2: \n");
    scanf("%d",&Val2);
    printf("Ingrese el Val3: \n");
    scanf("%d",&Val3);
    Total=Val1+Val2+Val3;
    Promedio=Total/3;

    if (Val1>Promedio)
    {
        printf("Val1 es mayor que promedio.\n");
 
    }
    if (Val2>Promedio)
    {
        printf("Val2 es mayor que promedio.\n");
 
    }
    if (Val3>Promedio)
    {
        printf("Val3 es mayor que promedio.\n");
 
    }

    return 0;
}
