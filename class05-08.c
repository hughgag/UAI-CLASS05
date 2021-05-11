#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int Edad1=0,Altura1=0,Edad2=0,Altura2=0;
    printf("Ingrese Edad1: \n");
    scanf("%d",&Edad1);
    printf("Ingrese Altura1: \n");
    scanf("%d",&Altura1);
    printf("Ingrese Edad2: \n");
    scanf("%d",&Edad2);
    printf("Ingrese Altura2: \n");
    scanf("%d",&Altura2);
    
    if (Edad1>Edad2)
    {
        printf("Altura de Edad1 = %d.\n",Altura1);
 
    }
    if (Edad2>Edad1)
    {
        printf("Altura de Edad2 = %d.\n",Altura1);
 
    }
    if (Edad1==Edad2)
    {
        printf("Ambas edades iguales.\n");
    }

    return 0;
}
