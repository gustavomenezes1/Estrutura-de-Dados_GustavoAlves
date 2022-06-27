#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

struct no{
    int info;
    struct no *prox;
};

Lista cria_lista(){
    Lista aux;
    aux = (Lista)malloc(sizeof(struct no));
    if(aux!=NULL){
        aux->prox = NULL;
        aux->info = 0;
    }
    return aux;
}


int lista_vazia(Lista lst){
    if(lst->prox == NULL)
        return 1;
    else
        return 0;
}


int insere_elem(Lista lst, int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N==NULL)
        return 0;

    N->info = elem;
    N->prox = lst->prox;
    lst->prox = N;
    lst->info++;
    return 1;
}


int remove_elem(Lista lst, int elem){
    if(lista_vazia(lst)==1)
        return 0;

    Lista aux = lst;
    while(aux->prox != NULL && aux->prox->info != elem)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;

    Lista aux2 = aux->prox;
    aux->prox= aux2->prox;
    lst->info--;
    return 1;
}

int tamanho_lista(Lista lst,int tam){
    if(lista_vazia(lst)==1)
        return 0;
    else{
        tam = lst->info;
        return 1;
    }
}

int obtem_valor_posicao(Lista lst, int pos, int elem){
    if(lista_vazia(lst)==1)
        return 0;
    if(pos>lst->info||pos<lst->info)
        return 0;

    Lista aux = lst->prox;
    for(int i=0;i<pos;i++){
        aux = aux->prox;
    }

    elem = aux->info;
    return 1;
}


































