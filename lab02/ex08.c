#include<stdio.h>

struct ponto{
    int x;
    int y;
};

float calc_area(struct ponto *p1,struct ponto *p2){
    int l,a;
    float area;

    if( p1->x > p2->y){
        l=p1->x-p2->x;
    }else{
       l=p2->x-p1->x;
    }

    if(p1->x>p2->x){
        l=p1->y-p2->y;
    }else{
       l=p2->y-p1->y;
    }

    area = l*a;
    printf("%d   %d  %f",l,a,area);
    return area;
}

int main(void){
    float area;
    struct ponto p1,p2;

    printf("Coordenada x do ponto 1: ");
    scanf("%d",&p1.x);
    printf("Coordenada y do ponto 1: ");
    scanf("%d",&p1.y);
    printf("Coordenada x do ponto 2: ");
    scanf("%d",&p2.x);
    printf("Coordenada y do ponto 2: ");
    scanf("%d",&p2.y);

    area = calc_area(&p1,&p2);

    printf("A area do retangulo definido por (%d,%d) e (%d,%d) eh %.0f. ",p1.x,p1.y,p2.x,p2.y,area);
}
