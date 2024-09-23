#include<stdio.h>
int main(){
    float  A[10] = {0}, M[10] = {0};
    float X;
    int i;

    printf("Digite 10 numeros :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &A[i]);
    }
    printf("Digite um valor para multiplicar os 10 numeros ");
    scanf("%f", &X);
    for ( i = 0; i < 10; i++)
    {
        M[i] = (A[i] * X);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Os produtos sao :%2.f\n", M[i]);
    }
        

    







    return 0;
}