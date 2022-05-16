#include<stdio.h>

int main(void){
    int a = 40;
    int *p;

    p = &a;

    //letra a
    printf("Endereco da variavel a com p = %lu\n",p);
    printf("Endereco da variavel a com &a = %lu\n",&a);

    //letra b
    scanf("%d",p);
    printf("\nNovo valor de a: %d",a);


    return 0;
}
