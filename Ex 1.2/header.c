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


void insertarSinAlt(int *vector,int *ce)
{
    int elem;
    int i;
    int j;

    printf("Ingresar elemento: ");
    scanf("%d",&elem);

    if(elem <= *(vector + (*ce-1))){
       (*ce)++;
       *(vector + *(ce-1)) = elem;
        return;
       }

    for(i=0; i<= *ce-1; i++)
    {
        if(elem <= *(vector + i)){
            printf("%d",i);
            //{1,3,5,6,8,9,12,15};
            (*ce)++;
            for(j = *ce-1; j > i ;j--){
               *(vector + j) = *(vector + j -1);
            }
            *(vector + i) = elem;

            break;
        }
    }




}
