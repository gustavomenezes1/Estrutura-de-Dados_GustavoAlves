#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int main(void){
    int vet[12] = {4, 8, -1, 19, 2, 7, 8, 5, 9, 22, 45};
    Lista lst;
    int tam,aux;

    lst = cria_lista();

    tamanho_lista(lst,tam);

    if(lista_vazia(lst)!=1){
        printf("{ ");
        for(int i=0;i<tam;i++){
            obtem_valor_posicao(lst,i,aux);
            printf("%d ",aux);
        }
        printf("{ ");
    }else{
        printf("Lista Vazia!\n");
    }

    for(int i=0;i<11;i++){
        insere_elem(lst,vet[i]);
    }

    tamanho_lista(lst,tam);
    if(lista_vazia(lst)!=1){
        printf("{ ");
        for(int i=0;i<tam;i++){
            obtem_valor_posicao(lst,i,aux);
            printf("%d ",aux);
        }
        printf("} ");
    }else{
        printf("Lista Vazia!");
    }

    return 0;
}
