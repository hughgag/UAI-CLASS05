#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int A=0,B=0,RESULTADO=0;
	printf("Ingrese el valor de A: ");
    scanf("%d",&A);
    if (A==0)
	{
		printf("A = 0\n");
		return 0;
	}
	else
    {
        if (A>0)
        {
            printf("A es positivo\n");
        }
        else
        {
            printf("A es negativo\n");
        }
    }

	return 0;
}
