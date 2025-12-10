#include <stdio.h>
#include <stdbool.h>

int DDD (int n){
    char cidades[8][31] = {
     "Brasilia","Salvador","Sao Paulo",
     "Rio de Janeiro","Juiz de Fora","Campinas",
     "Vitoria","Belo Horizonte"
    };
    
    int ddd [8] = {61,71,11,21,32,19,27,31};
    
    bool achou = false;
    int p=-1;
    
    for (int i = 0; i<8 && !achou ;++i){
        if (n==ddd[i]){
         achou = true;
         p = i;
        }
    }
    
    if (!achou){
      return printf("DDD nao cadastrado\n");
    }else{
     return printf("%s\n", cidades[p]);  
    }
}
 
int main()
{
  int num;
  scanf("%d",&num);
  
  DDD(num);
  
  return 0;
}