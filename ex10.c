#include<stdio.h>
int main(){
    int vetor[3] = {0};
    int novovet[3] = {0};
    int num, i;

    printf("Digite 3 numeros para ocupar o vetor");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Os numeros sao :\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d", vetor[i]);
    }
    printf("Digite um numero para saber se ele estar no vetor ");
    scanf("%d", &num);
    for (i = 0; i < 3; i++)
    {
        novovet[i] = vetor[i];
    }
    
    for (i = 0; i < 3; i++)
    {
        if (vetor[i] == num)
        {
            novovet[i] = vetor[i] - num;
            printf("o numero [%d], foi removido( Um zero foi colocado no lugar)", vetor[i]);
        }
        
    }
    printf("O vetor eh :\n");
    for (i = 0; i < 3; i++)
    {
        if (vetor[i] == novovet[i])
        {
            printf("%d", vetor[i]);
        }else
            printf("%d", novovet[i]);
        
        
    }
    return 0;
}