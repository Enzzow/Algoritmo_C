#include <stdio.h>
int main (){

   int n = 3;
   int *p = &n; //Apontando para o endereço de memória de n

   printf("\n Valor que o ponteiro está apontando: %d",*p);
   printf("\n Endereço de memória que o ponteiro está guardando: %p \n\n",p);

}