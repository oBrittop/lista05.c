#include<stdio.h>
#include<stdlib.h>
#define maximo 100

int main(){
    int v1[maximo], v2[maximo],soma[maximo], vn;// Essa deu trabalho ein
    int i;


    printf("Digite um numero para ser o tamanho dos vestores A e B :\n");// valor vn
    scanf("%d", &vn);
    if (vn > maximo || vn < 1)
    {
        printf("Tamanho inválido! Por favor, escolha um número entre 1 e %d.\n", maximo);
        return 1;
    }
    for (i = 0; i < vn; i++)// valor v1
    {
        printf("Digite um valor para v1[%d]\n", i);
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < vn; i++)// valor v2
    {
        printf("Digite um valor para v2{%d}\n", i);
        scanf("%d", &v2[i]);
    }
    
    for (i = 0; i < vn; i++)//soma
    {
        soma[i] = (v1[i] + v2[i]);
    }
    printf("A soma dos veotres eh: \n");
    for (i = 0; i < vn; i++)
    {
        printf("A soma e [%d] = %d\n", i, soma[i]);
    }
    
    return 0;
}