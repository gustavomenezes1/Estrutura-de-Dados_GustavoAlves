#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pilha_est_seq.h"


int main(void){
    Pilha p;
    Pilha aux;
    int x;

    p = cria_pilha();
    aux = cria_pilha();

    printf("<<Conversor decimal para binario>>\n");
    printf("Digite um numero decimal: ");
    scanf("%d",&x);

    while(x>=1){
        if(x%2==1)
            empilha(p,1);
        else
            empilha(p,0);
        x = x/2;
    }
    printf("\nNumero em binario: ");
    while(pilha_vazia(p)==0){
        desempilha(p,&x);
        printf("%d ",x);
    }
    printf("\n\n");
}
