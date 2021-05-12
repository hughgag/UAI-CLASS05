#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int ValorHora=0,HorasTrabajadas=0,TotalHoras=0;
	printf("Ingrese el ValorHora: ");
    scanf("%d",&ValorHora);
    printf("Ingrese HorasTrabajadas: ");
    scanf("%d",&HorasTrabajadas);
    
    if (HorasTrabajadas>=50 && HorasTrabajadas<150)
    {
        TotalHoras=ValorHora*HorasTrabajadas+100;
        printf("Sueldo = %d\n",TotalHoras);
    }
    else if (HorasTrabajadas>=150)
    {
        TotalHoras=ValorHora*HorasTrabajadas+200;
        printf("Sueldo = %d\n",TotalHoras);
    }
    else
    {
        TotalHoras=ValorHora*HorasTrabajadas;
        printf("Sueldo = %d\n",TotalHoras);
    }
 
    
    return 0;
}
