#include<stdio.h>
#include<string.h>

int main (){

    int min;
    double valor;

    printf("Digite a quantidade de minutos: "),
    scanf("%d", &min);

    if(min>100){
        valor=50.0 + (2.0*(min -100));
    }
    else{
        valor =50.00;
    }
    printf("Valor a pagar: R$%.2lf",valor);

    return 0;
}