#include<stdio.h>

struct ponto{
    int x;
    int y;
};

void inc_dir(struct ponto *p, char c){
    if(c=='l'){
        p->x++;
    }else if(c=='o'){
        p->x--;
    }else if(c=='n'){
        p->y++;
    }else if(c=='s'){
        p->y--;
    }
}

int main(void){
    struct ponto p;

    p.x=5;
    p.y=6;

    printf("\n\nPonto inicial = (%d,%d)\n",p.x,p.y);
    inc_dir(&p,'l');
    printf("Ponto andou p/ leste = (%d,%d)\n",p.x,p.y);
    inc_dir(&p,'o');
    printf("Ponto andou p/ oeste = (%d,%d)\n",p.x,p.y);
    inc_dir(&p,'n');
    printf("Ponto andou p/ norte = (%d,%d)\n",p.x,p.y);
    inc_dir(&p,'s');
    printf("Ponto andou p/ o sul = (%d,%d)\n\n",p.x,p.y);
    
    return 0;
}