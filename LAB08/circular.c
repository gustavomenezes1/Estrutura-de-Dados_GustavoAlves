#include<stdio.h>
#include<sdtlib.h>
#include"circular.h"


struct no{
    int info;
    struct no *prox;
};


Lista cria_lista(){
    return NULL;
}


int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_elem(Lista lst, int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;

    if(lista_vazia(*lst)){
        N->prox = N;
        *lst = N;
    }
    else{
        N->prox = (*lst)->prox;
        (*lst)->prox = N;
        *lst = N;
    }
    return 1;
}

int remove_elem(Lista *lst, int elem){
    if(lista_vazia(*lst))
        return 0;
    Lista aux = (*lst)->prox;

    while(aux->info != elem){
        aux = aux->prox;
    }

}
