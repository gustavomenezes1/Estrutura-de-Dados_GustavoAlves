#include<stdio.h>

struct ponto{
    int x;
    int y;
};

void altere_valor(struct ponto *p,int c){
    p->x = p->x * c;
    p->y = p->y * c;
}

int main(void){
    struct ponto p1;
    int c;

    printf("Coordenada x do ponto: ");
    scanf("%d",&p1.x);
    printf("Coordenada y do ponto: ");
    scanf("%d",&p1.y);
    printf("Digite a constante: ");
    scanf("%d",&c);

    printf("Resultado (%d,%d)*%d = ", p1.x,p1.y,c);
    altere_valor(&p1,c);

    printf("(%d,%d)",p1.x,p1.y);

    return 0;
}