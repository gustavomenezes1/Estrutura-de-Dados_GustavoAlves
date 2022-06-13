#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include"TAD_Lista.h"
#define MAX 20

struct lista{
    int x;
    int tam;
    struct lista *prox;
};


lista *criar_lista(){
    return NULL;
}


int lista_vazia(lista *l){
    if(l==NULL)
        return 1;
    else
        return 0;
}

int lista_cheia(lista *l){
    if(l!=NULL){
        if(l->tam<=MAX)
            return 1;
    }else
        return 0;
}

int insere_elem(lista *l,int x){
    if(lista_vazia(l)==1)
        return 0;

    if(l->tam==MAX)
        return 0;

    lista *aux;

    aux = (lista *)malloc(sizeof(lista));

    aux->x = x;
    aux->tam = l->tam;
    aux->prox = l;
    l = aux;
    if(l->tam==NULL)
        l->tam = 1;
    else
        l->tam++;

    return 1;
}

int remove_elem(lista *l, int x){
    if(lista_vazia(l)==1)
        return 0;

    lista *aux = l;

    if(x==l->x){
        l = aux->prox;
        free(aux);
        l->tam--;
    }
    while(aux->prox != NULL && aux->prox->x != x)
        aux = aux->prox;
    if(aux->prox == NULL)
        return 0;

    lista *aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    l->tam--;
    return 1;
}


int obtem_valor_elem(lista *l,int x,int *valor){
    if(lista_vazia(l)==1)
        return 0;
    lista *aux = l;
    for(int i = 0; i<x; i++){
        aux = aux->prox;
    }
    *valor = aux->x;
    return 1;
}






















