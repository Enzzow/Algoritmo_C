#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main (){
   
    int n;
    bool permitido = false;

    while(!permitido){
        printf(" Informe quantos números deseja armazenar: ");
        scanf("%d",&n);

        if (n<=0){
          printf("\n Tamanho inválido! \n");
        }else{
          printf("\n Tamanho aceito! \n");
          permitido = true;
        }
    }

    int *vetor = (int*) malloc(n* sizeof(int)); //Reservando memória
    if (vetor==NULL){
        printf("\n Erro na alocação de memória!\n");
        return 1;
    }
      

    for (int i=0; i<n ;++i){
        *(vetor+i) = i*3;
    }

    printf(" \n Valores do vetor: ");
    for (int i=0; i<n ;++i){
        printf("%d ",*(vetor+i));
    }
    printf("\n");

    //*(vetor+i) --> dinâmica de vetor

    free(vetor);
    vetor = NULL;

    return 0;
}