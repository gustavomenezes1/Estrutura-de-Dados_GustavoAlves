#include<stdio.h>

int *aloca_inteiro(int n){
    int *aux;
    aux = (int *) malloc (n*sizeof(int));

    return aux;
}

int main(void){
    int *p;

    p = aloca_inteiro(10);


    return 0;
}