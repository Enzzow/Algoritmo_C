#include <stdio.h>
#include <stdbool.h>

int operacao (int *ns,int qntd){
    
    int positiv = 0;
    int negativ = 0;

    for (int i=0; i<qntd ;++i){
        if( *(ns+i) >= 0)
            positiv++;
        else
            negativ++;
    }

    if(positiv > 1 && negativ > 1)
        printf(" %d números positivos e %d números negativos\n\n",positiv,negativ);
    else if (positiv <= 1 && negativ <= 1)
        printf(" %d número positivo e %d número negativo\n\n",positiv,negativ);
    else if (positiv > 1 && negativ <= 1)
        printf(" %d números positivos e %d negativo\n\n",positiv,negativ);
    else
        printf(" %d número positivo e %d números negativos\n\n",positiv,negativ);
    
    return 0;  
}

int main(){
    int tam;
    bool valido = false;

    while(!valido){
        printf(" Informe o tamanho do vetor: ");
        scanf("%d",&tam);

        if (tam <= 0)
            printf("\n Tamanho inválido!\n");
        else{
            printf(" \n Tamanho válido!\n");
            valido = true;
        }
    }
    
    int vetor[tam];

    printf("\n Preencha o vetor:\n\n");

    for (int i=0; i<tam ;++i){
        printf(" Informe o %dº valor: ", i+1);
        scanf("%d",&vetor[i]);
    }

    operacao(vetor, tam);

    return 0;
}