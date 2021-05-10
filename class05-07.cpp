#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int A=0,B=0,C=0,D=0,R1=0,R2=0;
	printf("Ingrese el valor de A: ");
    scanf("%d",&A);
    printf("Ingrese el valor de B: ");
    scanf("%d",&B);
    printf("Ingrese el valor de C: ");
    scanf("%d",&C);
    printf("Ingrese el valor de D: ");
    scanf("%d",&D);
    R1=A+B;R2=C+D;

    
    if (R1==R2)
    {
        printf("R1 y R2 son iguales\n");
    }
    else {
        if (R1>R2)
        {
            printf("Suma 1 es mayor que suma 2\n");
        }
        else 
        { 
            printf("Suma 2 es mayor que suma 1\n");
        }
    }
 
    
    return 0;
}
