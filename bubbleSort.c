1.- Comenzamos a hacer la comparación de elementos adyacentes
2.- repetimos hasta tener una pasada completa sin ningún swap

#include<stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], n)
{
    int i, j;
    for(i=0; i < n-1; i++)
    {
        for(j=0; j < n-i-1; j++)
        {
            //[10, 5, 3, 3333]
            if(vector_entrada[j]>vector_entrada[j+1])
            cambiar_pos(&vector_entrada[j],&vector_entrada[j+1]);
        }
    }
}