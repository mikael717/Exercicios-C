#include<stdio.h>

int main (){

    double p1,din,troco,valor;
    int qntd;

    printf("Preco unitario do produto: ");
    scanf("%lf",&p1);
    printf("Quantidade comprada: ");
    scanf("%d",&qntd);
    printf("Dinheiro recebido: ");
    scanf("%lf",&din);

    valor= p1*qntd;

    if(din>valor){
        troco=din-valor;
        printf("TROCO = %.2lf", troco);
    }
    else{
        troco=valor-din;
        printf("DINHEIRO INSUFICIENTE! FALTAM %.2lf REAIS",troco);
    }


    return 0;
}