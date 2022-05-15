#include<stdio.h>

int main(void){
    int fat=1;

    printf("<<Fatorial>>\n");

    for(int i=1;i<=10;i++){
        fat=fat*i;
        printf("%d! = %d\n",i,fat);
    }
    return 0;
}
