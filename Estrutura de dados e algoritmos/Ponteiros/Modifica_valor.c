#include <stdio.h>
int main(){

    int valor = 10;
    
    int *modf = &valor;
    printf("\n Antes: %d\n",*modf);

    *modf = 100;
    printf(" Depois: %d\n",*modf);
    
}