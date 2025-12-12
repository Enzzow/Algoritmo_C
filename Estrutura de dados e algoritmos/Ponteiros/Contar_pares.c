#include <stdio.h>
#include <stdbool.h>

int contar_par(int *vet,int n){

    int qntd = 0;
    for (int i=0; i<n ;++i){
        if ( *(vet+i)%2==0)
          ++qntd;
          
    }

    return qntd;
}

int main(){

    bool aprovado = false;
    int tam;

    while (!aprovado){
        printf(" Informe o tamanho do vetor: ");
        scanf("%d",&tam);

        if(tam>0 && tam<=10){
           printf(" \n Tamanho válido!\n");
           aprovado = true; 
        }else{
            printf(" \n Tamanho inválido!\n");
        }
    }

    int vetor[tam];
    printf(" \n Preencha o vetor: \n\n");

    for (int i=0; i<tam ;++i){
       printf(" Informe o %dº elemento do vetor: ",i+1);
       scanf("%d",&vetor[i]);
       printf("\n");
    }
    
    int qntd_pares = contar_par(vetor,tam);
    if(qntd_pares>1)
     printf(" %d números pares\n\n",qntd_pares);
    else
     printf(" %d número par\n\n",qntd_pares);
  
   return 0;
}