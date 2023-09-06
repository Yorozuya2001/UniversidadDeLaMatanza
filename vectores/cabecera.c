#include "cabecera.h"

void cargarVector(int* vector,int *ce)
{
    printf("Ingresar valor en posicion %d de %d:  \n",*ce+=1,TAM);
    scanf("%d",vector);

    while(*vector != 0 && *ce<TAM)
    {

        *ce+=1;
        vector++;

        printf("\nIngresar valor en posicion %d de %d:  ",*ce,TAM);
        scanf("%d",vector);
    }
}

void mostrarVector(int* vector,int ce)
{
    int i = 0;
    for(i=0; i<ce; i++)
    {
        printf("\nPosicion: %d | Valor: %d",i,*vector);
        vector++;
    };

}

void ordenarVector(int* vector, int ce)
{
    int elementosNoOrdenados=ce -1;
    int i = 0,j=0;
    int auxiliar;

    for(i=0; i< elementosNoOrdenados; i++)
    {
        for(j=0; j< elementosNoOrdenados -i; j++)
        {
            if(*(vector + j) > *(vector+ j + 1))
            {
                auxiliar= *(vector + j);
                *(vector +j) = *(vector+ j + 1);
                *(vector+ j + 1) = auxiliar;
            }
        }
    }

}

void ordenarSinrepetidos (int* vector, int *ce)
{

}

void eliminarRepetido(int* vector,int *ce)
{
}

void eliminarPrimeraOcurrencia(int* vector, int *ce,int param)
{
    int i,j;
    for(i = 0; i <= *ce-1; i++)
    {
        if(*(vector + i) == param)
        {

            for(j = i; j< *ce-1; j++)
            {
                *(vector + j) = *(vector + j + 1);
            }

            (*ce)--;
            break;
        }
    }


}

void eliminarTodasLasOcurrnecias(int* vector, int *ce, int param)
{
    int i=0,j;

    while(i <= *ce-1)
    {
        if(*(vector + i) == param)
        {
            for(j = i; j< *ce-1; j++)
            {
                *(vector + j) = *(vector + j + 1);
            }
            (*ce)--;
        }else{
         i++;
        }

    }
}
