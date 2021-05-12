#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int DIA=0,MES=0,ANO=0,BISIESTO=0;
	printf("Ingrese Dia (No iniciar con 0): ");
    scanf("%d",&DIA);
    printf("Ingrese Mes (No iniciar con 0): ");
    scanf("%d",&MES);
    printf("Ingrese Año (No iniciar con 0): ");
    scanf("%d",&ANO);
    BISIESTO=ANO%4;
    

    if (BISIESTO==0)
    {
        
        if (MES==2 && DIA>=1 && DIA<=29)
        {
            printf("Fecha Válida\n");
            return 0;
        }
        else if (MES==1 || MES==3 || MES==5 || MES==7 || MES==8 || MES==10 || MES==12)
        {
        
            if (DIA>=1 && DIA<=31)
            {
                printf("Fecha Válida\n");
                return 0;
            }
        }
        else if (MES==4 || MES==6 || MES==9 || MES==11)
        {
        
            if (DIA<=30 && DIA>=1)
            {
                printf("Fecha Válida\n");
                return 0;   
            }
        }
        else
        {
            printf("Fecha inválida\n");
        }
        return 0;
    }
    else if (BISIESTO>0)
    {
        
        if (MES==2 && DIA>=1 && DIA<=28)
        {
            printf("Fecha Válida\n");
            return 0;
        }
        else if (MES==1 || MES==3 || MES==5 || MES==7 || MES==8 || MES==10 || MES==12)
        {
            
            if (DIA>=1 && DIA<=31)
            {
                printf("Fecha Válida\n");
                return 0;
            }
            else
            {
                printf("Fecha Inválida\n");
                return 0;
            }
        }
        else if (MES==4 || MES==6 || MES==9 || MES==11)
        {
            
            if (DIA<=30 && DIA>=1)
            {
                printf("Fecha Válida\n");
                return 0;   
            }
            else
            {
                printf("Fecha Inválida\n");
                return 0;
            }
        }
        else
        {
            printf("Fecha inválida\n");
        }
        return 0;
    }
    return 0;
}
