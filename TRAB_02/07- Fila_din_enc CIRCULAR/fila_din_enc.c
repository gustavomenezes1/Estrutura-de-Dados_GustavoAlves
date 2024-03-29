#include<stdio.h>
#include<stdlib.h>
#include"fila_din_enc.h"

struct no{
    int info;
    struct no *prox;
};

Fila cria_fila(){
    return NULL;
}

int fila_vazia(Fila f){
    if(f == NULL)
        return 1;
    else
        return 0;
}

int insere_final(Fila *f, int elem){
    Fila N =(Fila)malloc(sizeof(struct no));
    if(N==NULL)
        return 0;

    N->info = elem;
    if(fila_vazia(*f)){
        N->prox = N;
        *f = N;
    }
    else{
        N->prox = (*f)->prox;
        (*f)->prox = N;
        *f = N;
    }
    return 1;
}

int remove_inicio(Fila *f, int *elem){
    if(fila_vazia(*f))
        return 0;
    Fila aux = (*f)->prox;
    *elem = aux->info;
    if(*f==(*f)->prox)
        *f=NULL;
    else
        (*f)->prox = aux->prox;
    free(aux);
    return 1;
}

int imprime_fila(Fila *f){
    if(fila_vazia(*f))
        return 0;

    Fila aux = (*f)->prox;
    do{
        printf("%d ",aux->info);
        aux =aux->prox;
    }while(aux != *f);
    return 1;
}
