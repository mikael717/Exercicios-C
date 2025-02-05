#include<stdio.h>
#include<math.h>

int main (){

    int idade,soma,contagem;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma=0;
    contagem=0;
   
    while(idade>=0){
        soma= soma+ idade;
        contagem = contagem +1;
        scanf("%d", &idade);
    }

    if(contagem == 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
        media= (double) soma/contagem;
        printf("MEDIA = %.2lf\n",media);
    }


    return 0;
}