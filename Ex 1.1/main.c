 /*

Ejercicio 1.1

Desarrollar una función que inserte un elemento en un arreglo de enteros, dada la posición de
inserción.

*/


#include "header.h"

int main()
{
    int vector[TAM] = {0};
    insertarEnXPos(vector,TAM);
    mostrarVector(vector,TAM);
    return 0;
}
