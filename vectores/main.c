#include "cabecera.h"

int main()
{
    int vector[TAM];
    int ce=0;
    int param;

    cargarVector(vector,&ce);
    ordenarVector(vector,ce);
    mostrarVector(vector,ce);
    printf("\n Ingresar parametro: ");
    scanf("%d",&param);
    printf("\n");
    //eliminarPrimeraOcurrencia(vector,&ce,param);
    mostrarVector(vector,ce);
    printf("\n");
    eliminarTodasLasOcurrnecias(vector,&ce,param);
    mostrarVector(vector,ce);
    return 0;
}
