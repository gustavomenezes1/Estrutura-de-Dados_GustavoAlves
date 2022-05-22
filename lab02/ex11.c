#include<stdio.h>

void maior_menor(double *vet,double *maior,double *menor,int tam){
    *menor = vet[0];
    *maior = vet[0];

    for(int i=0;i<tam;i++){
        if(*maior<vet[i]){
            *maior = vet[i];
        }

        if(*menor>vet[i]){
            *menor = vet[i];
        }
    }

}

int main(void){
    double vet[5]={1,2,3,4,5};
    double maior,menor;
    int tam=5;

    maior_menor(vet,&maior,&menor,tam);

    printf("\n\nVetor = ( ");
    for(int i=0;i<tam;i++){
        printf("%.0lf ",vet[i]);
    }
    printf(")\nMaior numero = %.0lf\nMenor numero = %.0lf",maior,menor);

    return 0;
}