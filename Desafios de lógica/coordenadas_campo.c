#include <stdio.h>
#define tam 8

void info(void){
  printf("\n\n #=== Limites ===#\n\n");
  printf(" Coordenada X entre -8 e 8 \n");
  printf(" Coordenada Y entre 1 e 8\n\n");
}

int var (float x, float y){

  printf(" \n Status da bola: ");

  if (x < -tam || x > tam || y<=0 || y>tam){
    printf("Fora de campo!\n\n");
  }else{
    printf("Dentro de campo.\n\n");
  }
  return 0;
}

struct coordenada{
  float X;
  float Y;
};

typedef struct coordenada coordenada;

int main(){
  coordenada p1;
  
  info();

  printf(" Informe a coordenada de X: ");
  scanf("%f",&p1.X);

  printf(" Informe a coordenada de Y: ");
  scanf("%f",&p1.Y);

  var(p1.X,p1.Y);
  
  return 0;
}