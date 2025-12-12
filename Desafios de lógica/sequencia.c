#include <stdio.h>
#include <stdbool.h>
#include <math.h> //Não é necessário mas tô usando pra relemebrar kkkkj

int verificador(int n){
   while(n<=0 || n>=100){
     printf("Inválido! Digite outro número: ");
     scanf("%d",&n);
   }
  return n;  
}
int sequencia(int n){
   int vet[100];

   int new_n = n; 

   int cont = 0;
   vet[cont++] = new_n;
   
   bool repet = false;

   for (int i=0; !repet ;++i){
     int dezena = new_n/10;
     int unidade = new_n%10;

     new_n = (dezena*dezena*10) + (unidade*unidade);
       if (new_n>=100) 
         new_n/=2;

       for (int ii=0; ii<cont ;++ii){
           if (vet[ii]==new_n)
             repet = true; 
        }
       
        if(!repet) 
         vet[cont++] = new_n;
   } 

    printf(" Sequência: ");
    for (int i=0; i<cont ;++i){
       printf("%d ",vet[i]); 
    }

   return 0;
}

int main(){
    int num;
    scanf("%d",&num);

    num = verificador(num);
    sequencia(num);
}