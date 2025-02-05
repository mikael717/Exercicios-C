#include <stdio.h>

int main(){

    int x,y,soma,troca;

    printf("Digite dois numeros:\n");
    scanf("%d %d",&x,&y);

    //garantido de o numero x seja o menor para o começo da contagem
    if(x>y){
        troca=x;
        x=y;
        y=troca;
    }
    soma=0;

    for(int i=x+1;i<y;i++){// i= x+1 pois a contagem deve começar do número sequencial ao numero x 
        if(i%2 != 0 ){
            soma=soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %d", soma);
    
    return 0;
}