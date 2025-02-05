#include<stdio.h>
#include<string.h>

void limparEntrada(){
    char c;
    while((c=getchar())!= '\n' && c!=EOF){}
}

void lerTexto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer,"\n");
}

int main(){

    char nome1[50], nome2 [50];
    int idade1, idade2;
    double idMedia;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    lerTexto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    limparEntrada();
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    lerTexto(nome2, 50);
    printf("Idade: ");
    scanf("%d",&idade2);

    idMedia = (double)(idade1 + idade2)/2.0; //para resolver o resultado em double, basta colar o .0 no número da divisão que o compilador irá entender a necessidade do resultado em DOUBLE.
    
    printf("A idade media de %s e %s eh %.1lf anos.", nome1,nome2,idMedia);

    /*printf ("Dados da primeira pessoa: \n");
    printf("Nome: %s\n",nome1);
    printf("Idade: %d\n",idade1);
    printf("Dados da segunda pessoa: \n");
    printf("Nome %s\n", nome2);
    printf("Idade: %d\n", idade2);
    printf("A idade media de %s e %s e %.1lf anos.", nome1,nome2,idMedia);*/
      
    return 0;
}