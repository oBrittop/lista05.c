#include<stdio.h>
int main(){
    int matriz [3] [3] ={0};
    int i, j;
    int soma, mult, det;
    printf("Digite 9 numeros para a matriz");
    for (i = 0; i < 3; i++)
    {
        for (j = 0 ; j < 3; j++)
        {

            printf("Valores para as poscoes [%d] eh [%d]", i, j);//mostra as posicoes
            scanf("%d", &matriz[i][j]);//captura os 9 numeros    
        }
        printf(" \n");
        
    }
    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
          matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
          matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
printf("A Determinante de uma matriz de 3° ordem eh:%d\n ", det);
    return 0;
}