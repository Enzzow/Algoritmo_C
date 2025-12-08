#include <stdio.h>
int main()
{
  int k; //Tamanho da área do campo
  
  printf(" Informe o tamanho da área da quadra: ");
  scanf("%d",&k);
  
  int x,y;
  printf(" Informe as coordenadas x e y: ");
  scanf("%d %d",&x,&y);
  
   printf(" \n Situação: ");
  
   if (y<=0 || y>k || x>k || x<-k){
     printf("Fora de campo!\n");
   }else{
     printf("Dentro de campo.\n");  
   }
  
  return 0;
}