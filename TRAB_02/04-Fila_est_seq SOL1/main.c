#include<stdio.h>
#include<stdlib.h>
#include"fila_est_seq.h"


int main(void){
    int array[12] = {5,10,-15,8,9,20,40,4,3,2,-1,0};
    int aux;
    Fila f;

    //INICIALIZANDO FILA
    f = cria_fila();

    //INSERINDO ELEMENTOS {5,10,-15,8,9,20,40,4,3,2,-1,0}
    for(int i=0; i<12; i++){
        insere_final(f,array[i]);
    }

    //IMPRIMINDO FILA COM ELEMENTOS
    imprime_fila(f);
    printf("\n\n");

    //REMOVENDO E IMPRIMINDO TODOS OS ELEMENTOS
    while(fila_vazia(f) != 1){
        remove_inicio(f,&aux);
        printf("%d ",aux);
    }

    //LE O FINAL DA FILA
    le_final(f,&aux);

    //IMPRIME FILA DE NOVO
    imprime_fila(f);
}





