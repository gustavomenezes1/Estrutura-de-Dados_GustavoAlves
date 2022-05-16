#include<stdio.h>

int main(void){
    char nome[20] = "Jose Augusto";
    char *p;

    p = &nome[0];

    for(int i=0;i<20;i++){
        printf("%c",p[i]);
    }

    return 0;
}
