#include<stdio.h>

double *to_double(int *vet_int,int n){
    double *aux;
    aux = (double *)malloc(n*sizeof(double));

    for(int i=0;i<n;i++){
        aux+i = (double * ) vet_int+i;
    }

    return aux;
}