#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
   
    int n; 

    bool valido = false;
    while (!valido){
        printf(" Informe quantos números deseja armazenar no vetor: ");
        scanf("%d",&n);

        if (n<=0){
           printf("\n Quantidade inválida! \n");
        }
        else{
           printf(" \n Quantidade válida! \n");
           valido = true;
        }
    }

    float *vetor = (float*) malloc(n*sizeof(float));
    if (vetor==NULL){
      printf(" Erro na alocação de memória! \n");
      return 1;
    }

    printf(" \n Preencha o vetor:\n\n");
    float media = 0.0;
    for (int i=0; i<n ;++i){
        printf(" Digite o %dº valor do vetor: ",i+1);
        scanf("%f",&*(vetor+i));
        media += *(vetor+i);
        printf("\n");
    }
     
    printf(" Valores do vetor: ");
    for (int i=0; i<n ;++i){
        printf("%.2f ",*(vetor+i));

        if(i<n-1){
           printf(","); 
        }
    }
    printf(" \n\n Média de valores do vetor: %.2f\n\n ",media/n);

    free(vetor);
    vetor = NULL;

    return 0;
    
}