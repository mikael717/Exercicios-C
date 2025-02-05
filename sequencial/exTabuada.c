#include <stdio.h>

int main(){

    int n,i,produto; // i para ser usado na estrutura "for"

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&n);

    // a variável "i" vai ser o valor variavel da tabuada, somando 1 a mais todas as vezes até chegar a 10, começando com valor 1;

    for(i=1;i<=10;i++){
        produto = n * i;
        printf("%d x %d = %d\n",n,i,produto);
    }



    return 0;
}