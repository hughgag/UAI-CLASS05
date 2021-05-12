#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	// La variable resultadoDeLaDivision es
	// de tipo div_t
	div_t resultadoDeLaDivision;

	resultadoDeLaDivision = div(1988, 4);

	printf(
		"El cociente es %d y el residuo es %d\n", 
		resultadoDeLaDivision.quot, 
		resultadoDeLaDivision.rem
		);
	if (resultadoDeLaDivision.rem==0)
	{
		printf("reultado de la division %d\n",resultadoDeLaDivision.rem);
		printf("Año bisiesto\n");
	}
	else
	{
		printf("El año no es bisiesto\n");
	}

int ano=0,bisiesto=0;
printf("Ingrese año\n");
scanf("%d",&ano);
bisiesto=(ano%4);


if (bisiesto==0)
	{
	printf("Año bisiesto\n");
	}
else
	{
	printf("Año no bisiesto\n");
	}



/* 
printf("%d\n",(ano%2));

	return 0;

printf("%f",2/2); */

}