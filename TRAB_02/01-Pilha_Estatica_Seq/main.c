#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pilha_est_seq.h"

//FUNCAO TESTA SE EH PALINDROMO
int eh_palindromo(char *vet){
    int len;
    char elem;
    int i;
    Pilha p;

    p = cria_pilha();
    len = strlen(vet)-1;
    for(i=0;i<len/2;i++){
        empilha(p,vet[i]);
    }
    if(len%2 != 0){
        i++;
    }

    for(i;i<len;i++){
        desempilha(p,&elem);
        if(vet[i] != elem){
            return 0;
        }
    }
    return 1;
}


//FUNCAO ELIMINA
int elimina(Pilha p, int elem){
    if(pilha_vazia(p))
        return 0;

    Pilha aux = cria_pilha();
    int x;

    while(pilha_vazia(p)!=1&&x!=elem){//while desempilha ate achar o numero ou acabar a pilha
        desempilha(p,&x);
        empilha(aux,x);
    }

    if(pilha_vazia(p)==1){//if determina se achou ou nao o elemento
        while(pilha_vazia(aux)!=1){
        desempilha(aux,&x);
        empilha(p,x);
        }
        return 0;
    }
    else{
        desempilha(aux,&x);
        while(pilha_vazia(aux)!=1){
        desempilha(aux,&x);
        empilha(p,x);
        }
    }
    return 1;
}//fim funcao elimina




//FUNCAO MAIN
int main(void){
    Pilha p;
    Pilha p2;
    Pilha par,impar,pilha_inteira;
    Pilha elimina_pilha;
    int array[10] = {1,1,4,1,2,1,6,4,3,1};
    char vet[20];
    int elem;
    int aux;

    //INICIALIZANDO AS PILHAS
    p = cria_pilha();
    p2 = cria_pilha();

    //EMPILHANDO A PILHA COM VETOR DE NUMEROS
    for(int i=0;i<10;i++){
        empilha(p,array[i]);
    }

    //g) IMPRIMINDO A PILHA
    aux = pilha_vazia(p);
    while(aux==0){
        desempilha(p,&elem);
        printf("%d ",elem);
        empilha(p2,elem);
        aux = pilha_vazia(p);
    }

    //h) IMPRIMINDO A PILHA REVERSA
    printf("\n\n");
    aux = pilha_vazia(p2);
    while(aux==0){
        desempilha(p2,&elem);
        printf("%d ",elem);
        empilha(p,elem);
        aux = pilha_vazia(p2);
    }

    //j) EH PALINDROMO
    printf("\n\n Digite uma palavra para saber se eh palindromo: ");
    fgets(vet,20,stdin);

    aux = eh_palindromo(vet);
    if(aux==1)
        printf("\n\nSIM, EH PALINDROMO\n\n");
    else
        printf("\n\nNAO, EH PALINDROMO\n\n");


    //k)elimina
    elimina_pilha = cria_pilha();
    for(int i=0;i<10;i++){
        empilha(elimina_pilha,array[i]);
    }
    elimina(elimina_pilha, 6);
    printf("\nPilha com elemento eliminado: ");
    aux = pilha_vazia(elimina_pilha);
    while(aux==0){
        desempilha(elimina_pilha,&elem);
        printf("%d ",elem);
        aux = pilha_vazia(elimina_pilha);
    }
    //FIM elimina


    //i)PAR E IMPAR
    par = cria_pilha();
    impar = cria_pilha();
    pilha_inteira = cria_pilha();

    printf("\n\nPAR E IMPAR\n");
    printf("Quantos numeros quer digitar? ");
    scanf("%d",&aux);

    //EMPILHA TODOS ELEMENTOS
    for(int i=0;i<aux;i++){
        printf("Digite o #%d N: ",i+1);
        scanf("%d",&elem);
        empilha(pilha_inteira,elem);
    }

    //DESEMPILHA OS ELEMENTOS E EMPILHA EM SUAS RESPECTIVAS PILHAS
    for(int i=0;i<aux;i++){
        desempilha(pilha_inteira,&elem);
        if(elem%2==0)
            empilha(par,elem);
        else
            empilha(impar,elem);
    }

    //PRINTA  PILHA PAR
    printf("\nPilha Par:");
    while(pilha_vazia(par)!=1){
        desempilha(par,&elem);
        printf(" %d",elem);
    }

    //PRINTA PILHA IMPAR
    printf("\nPilha Impar:");
    while(pilha_vazia(impar)!=1){
        desempilha(impar,&elem);
        printf(" %d",elem);
    }
    printf("\n\n");
}
