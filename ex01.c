#include<stdio.h>
int main(){
    float soma = 0, nota[5], media ;
    int i, j;
    int acima = 0, abaixo = 0;

    for ( i = 0; i < 5; i++)
    {
           printf("---Software de notas, digite a nota");
           scanf("%f", &nota[i]);
                 soma = soma + nota[i];  
           for ( j = 0; j < 5; j++)
           {
            printf("As notas digitadas sao : %2.f \n", nota[j]);
           }
           
    }


    for (i = 0; i < 5; i++)
    {
        if (nota[i] < 5)
        {
            printf("aluno nao consegui a media \n"); 
            abaixo++;
        }
        else if (nota[i] >= 5)
        {  printf("Ele obteve a media com sucesso \n");
        acima++;
        }else printf("ERRO! tente novamente!");
      
    }
    
    media = soma / 5;
    printf("A media da turma eh: %2.f\n", media);
    printf(" E %d conseguiram fiar acima da meida, ja %d nao conseguiram \n", acima, abaixo);




    return 0;
}