/* 1.- Comenzamos a hacer la comparación de elementos adyacentes
2.- repetimos hasta tener una pasada completa sin ningún swap
 */
#include<stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int n)
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

int print_array(int vector_entrada[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
        printf("%d ,", vector_entrada[i]);
    printf("\n fin del ordenamiento");
}

main(int argc, char const *argv[])
{
    int vector_entrada[]={100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
    bubbleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");
    return 0;
}
