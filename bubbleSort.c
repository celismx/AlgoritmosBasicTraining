/* 1.- Comenzamos a hacer la comparacioin de elementos adyacentes
2.- repetimos hasta tener una pasada completa sin ningun swap */

#include<stdio.h>

void cambiar_pos(int *n1, int  *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int array_entrada[], int n){
    int i, j;
    for(i=0; i < n-1; i++ )
    {
        for(j=0; j< n-i-1; j++ )
        {
            if(array_entrada[j] > array_entrada[j+1])
            cambiar_pos(&array_entrada[j], &array_entrada[j+1]);
        }
    }
}

void imprimir(int array_entrada[], int n)
{
    int i;
    for(i=0; i < n; i++)
        printf("%d \n ", array_entrada[i]);
    printf(" fin del ordenamiento, adios\n");
}

main(int argc, char const *argv[])
{
    int array_entrada[]={10,11,1,5,19,1992};
    int n = sizeof(array_entrada)/sizeof(array_entrada[0]);
    bubbleSort(array_entrada, n);
    imprimir(array_entrada, n);
    printf("\n");

    return 0;
}



