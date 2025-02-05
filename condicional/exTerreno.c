#include <stdio.h>

void limparEntrada(){
    char c;
    while((c=getchar())!= 'n' && c != EOF){}
}

int main(){

    double larg,comp,area,preco, precot;

    printf("Digite a largura do terreno:  ");
    scanf("%lf", &larg);
   
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comp);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &preco);

    area= larg * comp;
    precot= area * preco;

    printf("Area do terreno: %.2lf\n", area );
    printf("Preco do terreno: %.2lf\n", precot);



    return 0;
}




