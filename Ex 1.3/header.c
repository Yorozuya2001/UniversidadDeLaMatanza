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

void eliminarXPos (int *vector, int *ce,int pos)
{
    int i;
    int j;
    int aux;

    if(pos == *ce-1){
        (*ce)--;
        return;
    }

    for(j=pos; j<=*ce-1; j++)
    {
        *(vector + j) = *(vector + j + 1);
    }
    (*ce)--;

}


