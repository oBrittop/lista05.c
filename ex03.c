#include<stdio.h>

int main(){

    int Q[5];
     
    int i, numeros, menor, posicao = 0;

    printf("Digite Vinte numeros positivos :\n ") ;
    for ( i = 0; i < 5; i++)
    {   
        do
        {
            printf("Numero %d:", i + 1 );
            scanf("%d", &numeros);
            if (numeros < 1)
            {
                printf("Digite apenas numeros positivos");
            }
            

        } while (numeros < 1);// continua pedindo para o numero ser negativo
        Q[i] = numeros;
        printf("\n");
        
    }
        menor = Q[0];
    for (i = 1; i < 5; i++)
    {
        if (Q[i] < menor )// se vetor no loop maior q valor loop -1 atualiza o valor
        {
            menor = Q[i];
            posicao = i;// recebe a posisao 
        }
        
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("Os numeros digitados sao :%d\n", Q[i]);
  
    }
    printf("E o maior numero eh %d, e se encontra na posisao :%d\n", menor, posicao + 1);

    return 0;
}