#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include"ponto.h"


struct ponto{// estrutura de um ponto
    int x,y;
};


ponto *gera_pto(){// aloca na memoria um ponto
    ponto *p;

    p = (ponto *)malloc(sizeof(ponto));

    return p;
}

int set_pto(ponto *p,int x,int y){// define os valores do ponto
    if(p==NULL){
        return 1;
    }else{
        p->x = x;
        p->y = y;
        return 0;
    }
}

int get_pto(ponto *p, int *x, int *y){// informa os valores do ponto
    if(p==NULL){
        return 1;
    }else{
        *x = p->x;
        *y = p->y;
        return 0;
    }
}

void libera_pto(ponto *p){//Libera a memoria de um ponto
    free(p);
}

float distancia_pto(ponto *p, ponto *b){// calcula a distancia entre dois pontos e retorna o resultado
    float distancia;

    distancia = sqrt(pow(p->x - b->x,2) + pow(p->y - b->y,2));//calculo distancia
    return distancia;//returna valor calculado
}
