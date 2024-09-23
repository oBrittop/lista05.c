#include<stdio.h>

int main()
{
int vetor1[60] = {0};
int i, j;
int num = 0;
     
     printf("Digite 60 numeros para o vetor  :\n");
     for (i = 0; i < 60; i++)
     {
        scanf("%d", &vetor1[i]);
     } 
     for (i = 0; i < 60; i++)
    {
        for (j = (i + 1); j < 60; j++)
      {
        if (vetor1[i] == vetor1[j]){
            num++;
             printf("O numero %d se repete nas posicoes [%d] e [%d]\n", vetor1[i], i, j);
            break;  
        }
      }
        printf("\n");     
    }
    printf("Total geral :%d",num);

       return 0;
}
