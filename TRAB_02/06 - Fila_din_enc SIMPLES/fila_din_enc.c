#include<stdio.h>
#include<stdlib.h>
#include"fila_din_enc.h"

struct no{
    int info;
    struct no *prox;
};

struct fila{
    struct no *ini;
    struct no *fim;
};


Fila cria_fila(){
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini = NULL;
        f->fim = NULL;
    }
    return f;
}

int fila_vazia(Fila f){
    if(f->ini == NULL)
        return 1;
    else
        return 0;
}

int insere_final(Fila f, int elem){
    struct no *N;
    N = (struct no*)malloc(sizeof(struct no));
    if(N == NULL)
        return 0;
    N->info = elem;
    N->prox = NULL;
    if(fila_vazia(f))
        f->ini = N;
    else
        (f->fim)->prox = N;
    f->fim = N;
    return 1;
}

int remove_inicio(Fila f, int *elem){
    if(fila_vazia(f))
        return 0;
    struct no*aux = f->ini;
    *elem = aux->info;
    if(f->ini==f->fim)
        f->fim = NULL;
    f->ini = aux->prox;
    free(aux);
    return 1;
}

int le_final(Fila f, int *elem){
    if(fila_vazia(f))
        return 0;
    else{
        *elem = (f->fim)->info;
        return 1;
    }
}

int imprime_fila(Fila f){
    if(fila_vazia(f)){
        printf("\n\nFILA VAZIA\n\n");
        return 0;
    }
    struct no *aux = f->ini;
    do{
        printf("%d ",aux->info);
        aux = aux->prox;
    }while(aux!=NULL);
    return 1;
}

