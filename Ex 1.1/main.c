 /*

Ejercicio 1.1

Desarrollar una funci�n que inserte un elemento en un arreglo de enteros, dada la posici�n de
inserci�n.

*/


#include "header.h"

int main()
{
    int vector[TAM] = {0};
    insertarEnXPos(vector,TAM);
    mostrarVector(vector,TAM);
    return 0;
}
