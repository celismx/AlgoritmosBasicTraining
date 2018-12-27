#include<stdio.h>

long result;
int n;

long factorial(int n){
    if(n == 0)
        return 1;
    else
        return (n* factorial(n-1));
}

main(int argc, char const *argv[])
{
    printf("ingreso el numero a calcular\n");
    scanf("%d",&n);
    if (n<0)
    {
        printf("el numero debe ser positivo\n");
    }
    else
    {
        result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }

    return 0;
}
