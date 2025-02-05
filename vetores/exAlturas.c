#include<stdio.h>
#include <string.h>

void limparEntrada(){//função para limpar entra de string composta
    char c;
    while((c=getchar())!= '\n' && c!= EOF) {}
}
void lerTexto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer,"\n");
}

int main (){

    int n, nMenor;
    double soma,media, porcent;

    printf("Quantas pessoas serao digitadas?");
    scanf("%d",&n);

    char nomes [n][50];// nome do vetor = "nomes"; quantidade de elementos do vetor = "n"; [50]descreve a quantidade max. de texto 
    int idades [n];
    double alturas[n];

    for(int i=0;i<n;i++){
        printf("Dados da %d pessoa\n", i+ 1);

        printf("Nome: ");
        limparEntrada();
        lerTexto(nomes[i],50);
    
        printf("Idade: ");
        scanf("%d", &idades[i]);//a leitura do vetor se dará de acordo com a posição "i";

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    soma =0;
    for (int i=0; i<n; i++){
        soma = soma + alturas[i];
        }
    media = soma / n;
    printf("\nAltura media: %.2lf\n",media);
    
    nMenor = 0;
    for(int i=0; i<n; i++){
        if(idades[i]<16){
            nMenor++; //contagem de quantas pessoas são menores que 16, somando-se 1 
        }
    }
    porcent= nMenor *100.0/n;//100'.0' para específicar a execução dos calculos trazendo resultado em Double
    printf ("Pessoas com menos de 16 anos: %.1lf%%\n",porcent);

    for(int i=0; i<n; i++){
        if(idades[i]<16){
            printf("%s\n",nomes[i]);
        }

    }
    return 0;
}