#include<stdio.h>
int main(){
int vetor1[15] = {0};
int vetor2[15] = {0};
int i, num = 0;
     
     printf("Digite 15 numeros para o vetor 1 :\n");
     for (i = 0; i < 15; i++)
     {
        scanf("%d", &vetor1[i]);
     }    
     printf("Digite 15 numeros para o vetor 2 :\n");
     for (i = 0; i < 15; i++)
     {
        scanf("%d", &vetor2[i]);
     }
     for (i = 0; i < 15; i++)
     {
        if (vetor1[i] == vetor2[i])
        {
            num++;
        }   
     }
     printf("A quantidade de vezes que V1 e V2 possuem os mesmos numeros e nas mesmas posicoes eh: %d\n", num);
     


    return 0;
}