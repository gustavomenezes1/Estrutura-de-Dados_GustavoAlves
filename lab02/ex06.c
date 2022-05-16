#include<stdio.h>

int main(void){
    int *array;
    int n,par=0,impar=0;

    printf("Quantos inteiros serao lidos: ");
    scanf("%d",&n);

    array = (int *) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("%dº inteiro: ",i+1);
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        if(array[i]%2!=0){
            impar++;
        }
    }

    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            par++;
        }
    }

    printf("\n\nSao pares: %d dos %d inteiros lidos.\n",par,n);
    printf("Sao impares: %d dos %d inteiros lidos.\n",impar,n);
}
