#include <stdio.h>

int verificador(int n){
    int grupo = n/100;
    int dezena = n%100;

    int max_gp = grupo*4;
    int min_gp = (max_gp-4) + 1;

    if ( dezena>=min_gp && dezena<=max_gp){
     return printf(" Válido!\n"); 
    }else{
     return printf(" Inválido!\n");   
    }
}

int main(){

    int num;
    scanf("%d",&num);

    verificador(num);
}