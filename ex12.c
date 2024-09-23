#include<stdio.h>
int main(){
int num = 0, vetor[30] = {0}, x;
int i;
    printf("Digite 30 numeros :\n");
    for (i = 0; i < 30; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Escreva outro numero :\n");
    scanf("%d", &x);

    for (i = 0; i < 30; i++)
    {
        if (vetor[i] == x)
        {
            num++;
        }
         
    }
    printf("A quantidade de vezes que o numero reperte eh :%d\n", num);

    return 0;
}       