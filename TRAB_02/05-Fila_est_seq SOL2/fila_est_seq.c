#include<stdio.h>
#include"fila_est_seq.h"
#define max 20

struct fila{
    int no[max];
    int ini,cont;
};

Fila cria_fila(){
    Fila f;
    f=(Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini=0;
        f->cont=0;
    }
    return f;
}

int fila_vazia(Fila f){
    if(f->cont==0)
        return 1;
    else
        return 0;
}

int fila_cheia(Fila f){
    if(f->cont==max)
        return 1;
    else
        return 0;
}

int insere_final(Fila f,int elem){
    if(fila_cheia(f))
        return 0;

    f->no[(f->ini+f->cont)%max] = elem;
    f->cont++;
    return 1;
}

int remove_inicio(Fila f, int *elem){
    if(fila_vazia(f))
        return 0;
    *elem = f->no[f->ini];
    f->ini=(f->ini+1)%max;
    f->cont--;
}

int imprime_fila(Fila f){
    if(fila_vazia(f) == 1)
        return 0;
    int j=f->ini;

    for(int i=f->ini;i<f->cont;i++){
        printf("%d ",f->no[j]);
        j = (j+1)%max;
    }
}
