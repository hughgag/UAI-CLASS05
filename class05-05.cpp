#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int A=0,B=0,C=0;
	printf("Ingrese el valor de A: ");
    scanf("%d",&A);
    printf("Ingrese el valor de B: ");
    scanf("%d",&B);
    printf("Ingrese el valor de C: ");
    scanf("%d",&C);
    
    
	if (A==B && A==C)
	{
        printf("Triángulo Equilatero\n");
		
	}
	else { 
        if ((A==B)||(B==C)||(A==C))
        {
            printf("Triángulo Isósceles.\n");
        }
        else {
            printf("Triángulo Escaleno.\n");
        }
    }
	return 0;
}
