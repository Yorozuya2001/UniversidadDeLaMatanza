/*
Ejercicio 1.2

Desarrollar una función que inserte un elemento en un arreglo de enteros, ordenado en forma
ascendente, de forma de no alterar el orden.

*/


#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    int vector[] = {1,3,5,6,8,9,12,15};
    int ce = 8;

    insertarSinAlt(vector,&ce);
    mostrarVector(vector,ce);
    return 0;
}
