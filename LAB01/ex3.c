#include <stdio.h>

int main(void){
    int a[4],n=0,aux;

    printf("== Conversor de numeros binarios ==\n");

    for(int i=0;i<4;i++){
        printf("Digite o %do. bit:",i+1);
        scanf("%d",&a[i]);
    }
    aux=1;
    for(int i=3; i>=0 ; i--){
        if(a[i]!=0){
            n=n+aux;
        }
        aux=aux*2;
    }

    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d\n",a[0],a[1],a[2],a[3],n);

    return 0;
}
