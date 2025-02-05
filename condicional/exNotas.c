#include<stdio.h>
#include<string.h>

int main(){

    double nota1,nota2,notaf;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaf=(nota1+nota2);
    printf("NOTA FINAL = %.2lf\n", notaf);
    
    if(notaf< 70.0){
       printf("REPROVADO\n"); 
    }

    return 0;
}