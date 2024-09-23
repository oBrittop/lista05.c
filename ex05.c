#include<stdio.h>
int main(){
    int vetor[20];
    int i;

    printf("Digite 20 numeros\n");
    
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    } printf("Os nuemro em ordem inversa eh(ignore o termo repitido !):\n ");
    for (i = 20; i > -1; i--)// coloquei menos um pois tava com erro no primeiro termo, ta certo mas agr ele repete 1 vez
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}