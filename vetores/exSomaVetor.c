#include <stdio.h>

int main (){

    int n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

//os valores no array deve ser inteiros; as posições "i" devem ser de valores inteiros 
    for(int i=0; i<n; i++){
        printf("digite um numero: ");
        scanf ("%lf",&vet[i]);//vetor DOUBLE usa-se a placeholder %lf
        //ler o vetor na posição "i"
    }
    
    printf("\nVALORES = ");
    for(int i=0;i<n;i++){
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma=0;
    for(int i=0; i<n; i++){ //percorrer todo o vetor para somar os valores
        soma= soma +vet[i];//cada elemento do vetor será acumulado na variavel "soma"
    }
    printf("SOMA = %.2lf\n",soma);

    media = soma/n;
    printf("MEDIA = %.2lf\n",media);

    return 0;
}