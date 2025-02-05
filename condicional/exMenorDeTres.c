#include<stdio.h>



int main () {

    int v1,v2,v3,menorV;

    printf("Primeiro valor: ");
    scanf("%d", &v1);
    printf("Segundo valor: ");
    scanf("%d", &v2);
    printf("Terceiro valor: ");
    scanf("%d", &v3);
 
    if(v1<v2 && v1<v3){
        menorV =v1;
    }
    else if(v2<v3){
        menorV=v2;
    }
    else{
        menorV=v3;
    }

    printf("MENOR = %d", menorV);
    
    return 0;

}