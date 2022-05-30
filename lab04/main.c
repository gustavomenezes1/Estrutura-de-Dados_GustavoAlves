#include<stdio.h>
#include"ponto.h"

int main(void){
    int x,y;
    float distancia;
    ponto *p, *b;

    p = gera_pto();//aloca ponto p e b
    b = gera_pto();

    set_pto(p,0,0);//define valores de pontos p e b
    set_pto(b,3,4);

    get_pto(p,&x,&y);                    //confere valores de p e b
    printf("\nVALOR PONTO: (%d,%d)",x,y);
    get_pto(b,&x,&y);
    printf("\nVALOR PONTO: (%d,%d)\n\n",x,y);

    distancia = distancia_pto(p,b);// calcula distancia entre p e b

    printf("A distancia entre os dois pontos eh: %.1f\n",distancia);// printa distancia

    libera_pto(p);// libera memoria de p e b
    libera_pto(b);

    return 0;
}
