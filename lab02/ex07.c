#include<stdio.h>

struct ponto{
    int x;
    int y;
};


int main(void){
    int n;
    struct ponto *pontos;

    printf("Quantos pontos deseja digitar: ");
    scanf("%d",&n);

    pontos = (struct ponto *) malloc(n*sizeof(struct ponto));

    for(int i=0;i<n;i++){
        printf("Entre com a coordenada x do ponto %d: ",i+1);
        scanf("%d",&pontos[i].x);
        printf("Entre com a coordenada y do ponto %d: ",i+1);
        scanf("%d",&pontos[i].y);
    }

    printf("Pontos digitados: ");

    for(int i=0;i<n;i++){
        printf("(%d,%d) ",pontos[i].x,pontos[i].y);
    }
}
