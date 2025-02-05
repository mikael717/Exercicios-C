#include <stdio.h>

int main (){

    int n;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    int vet[n];
    
    //fazer a leitura do vetor com um todo 

    for(int i=0; i<n;i++){//declarando a variavel e já chamando-a
    //zero(0) primeira posição do vetor i começando com 0

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    for(int i=0;i<n;i++){ //maneira padrão para percorrer todo o vetor de "n" elementos 
        if(vet[i]<0){
            printf("%d\n",vet[i]);
        }
    }

    return 0;

}