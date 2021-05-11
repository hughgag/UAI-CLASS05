#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int A=0,B=0,R=0;
	printf("Ingrese el valor de A: ");
    scanf("%d",&A);
    printf("Ingrese el valor de B: ");
    scanf("%d",&B);
	if (A>B)
	{
        R=A*B;
		printf("A * B =%d\n",R);
		return 0;
	}
    else { 
        if (A==B)
        {
            printf("A y B son iguales.\n");
        }
    }
	
	return 0;
}
