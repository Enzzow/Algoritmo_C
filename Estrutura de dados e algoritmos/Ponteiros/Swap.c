#include <stdio.h>

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}


int main (){

    int x=5;
    int z=10;

    printf(" \n Antes: x = %d e z = %d\n",x,z);

    swap(&x,&z);

    printf(" Depois: x = %d e z = %d\n\n",x,z);
}