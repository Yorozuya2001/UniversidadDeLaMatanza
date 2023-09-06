/*
Ejercicio 1.3
Desarrollar una función que elimine el elemento que ocupa una determinada posición de un arreglo
de enteros.
*/

#include "header.h"

int main()
{
    int vector[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ce=15;
    int pos;

    printf("Arreglo de 0 a %d elementos\n",ce);
    printf("Ingresar posicion a eliminar: ");
    scanf("%d",&pos);
    printf("\nSin posicion eliminada\n");
    mostrarVector(vector,ce);
    printf("\nCon posicion eliminada\n");
    eliminarXPos(vector,&ce,pos);
    mostrarVector(vector,ce);
    return 0;
}
