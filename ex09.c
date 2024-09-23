#include<stdio.h>
int main(){
    int i, j, aux, num[11]={0};
    int novonum;
    
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
    printf("Digite um valor extra :\n");
    scanf("%d", &novonum);

    num[10] = novonum;
    for (i = 0; i < 11; i++)
    {
        for (j = i + 1; j < 11 ; j++)
        {
            if (num[j] < num[i])
            {
                aux = num[i];
                num[i] = num[j];
                num [j] = aux;
            }           
        }     
    }
        printf("O vetor em ordem cresente :\n");
    for (i = 0; i < 11; i++)
    {
        printf("locacao [%d] tem o valor = %d\n", i, num[i]);
    }



    
    
    




    return 0;
}