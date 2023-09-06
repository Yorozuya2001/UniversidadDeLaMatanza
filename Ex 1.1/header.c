#include "header.h"

void mostrarVector(int* vector,int ce)
{
    int i = 0;
    printf("\n\nVector de %d posiciones\n",ce);
    for(i=0; i<ce; i++)
    {
        printf("\nPosicion: %d | Valor: %d",i,*vector);
        vector++;
    };

}


void insertarEnXPos(int* vector,int ce)
{
    int elem;
    int pos;
    int i;
    printf("Ingresar elemento: ");
    scanf("%d",&elem);
    printf("\nIngresar posicion: ");
    scanf("%d",&pos);

    if(pos < 0 || pos > 7){
        printf("\nPosicion invalida\n");
        return;
    }

    for(i=0; i<=ce - 1; i++)
    {
        if(i==pos)
        {
            *(vector + i) = elem;
            printf("\n El elemento se ha ingresado correctamente");
            break;
        }
    }




}
