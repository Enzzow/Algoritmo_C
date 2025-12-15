#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

float media_turma(float *vet, int tam){
    float media = 0.0;
    for (int i=0; i<tam ;++i){
      media += *(vet+i);
    }

    return media/tam;
    
} 

int main(){

    int n;

    bool valido = false;
    while(!valido){
        printf(" Informe a quantidade de alunos da sala: ");
        scanf("%d",&n);

        if (n<=0){
            printf("\n Falha ao registra a quantidade de alunos! \n");
        }else{
            printf("\n Quantidade de alunos registrada com sucesso! \n");
            valido = true;
        }
    }

    float *notas = (float*) calloc(n, sizeof(float));
    if (notas==NULL){
        printf(" \n Erro na alocação de memória! \n");
        return 1;
    }

    printf(" \n Informando notas: \n");
    for (int i=0; i<n ;++i){
      printf(" Informe a nota do %dº aluno: ",i+1);
      scanf("%f",&*(notas+i));
      printf("\n");
    }
     
   printf(" Notas da turma: ");
   for (int i=0; i<n ;++i){
      printf("%.2f",*(notas+i));
       if (i<n-1){
         printf(", ");
       }
   }
   
   float resultado  = media_turma(notas,n);
   printf("\n Media da turma: %.2f\n",resultado);

   free(notas);
   notas = NULL;

   return 0;
}