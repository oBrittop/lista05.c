#include<stdio.h>
int main(){
    int i, j, aux, num[10]={0};
    
    printf("Digite os 10 numeros :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);   
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10 ; j++)
        {
            if (num[j] < num[i])
            {
                aux = num[i];
                num[i] = num[j];
                num [j] = aux;
            }           
        }     
    }
    printf("O vetor em ordem decresente :\n");
    for (i = 0; i < 10; i++)
    {
        printf("locacao [%d] tem o valor = %d\n", i, num[i]);
    }
    
    
    




    return 0;
}