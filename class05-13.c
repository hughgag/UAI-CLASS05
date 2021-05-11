#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int HorasTrabajadas=0,Categoria=0,Total=0;
	printf("Ingrese horas trabajadas: ");
    scanf("%d",&HorasTrabajadas);
    printf("Ingrese Categoría: ");
    scanf("%d",&Categoria);
        
    switch (Categoria)
    {
    case 1:
        Total=50*HorasTrabajadas;
        break;
    case 2:
        Total=70*HorasTrabajadas;
        break;
    case 3:
        Total=80*HorasTrabajadas;
        break;    
    default:
        printf("Categoria no válida");
        break;
    }    
    
    return 0;
}
