#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int Sueldo=0,Categoria=0,Antiguedad=0,Total=0;
	printf("Ingrese el sueldo: ");
    scanf("%d",&Sueldo);
    printf("Ingrese Categoría: ");
    scanf("%d",&Categoria);
    printf("Ingrese Antigüedad: ");
    scanf("%d",&Antiguedad);
    
    if (Categoria==1)
    {
        Total=Sueldo*Antiguedad+Antiguedad*50;
        
    }
    else
    {
        Total=Sueldo*Antiguedad;
        
    }
    
        
    return 0;
}
