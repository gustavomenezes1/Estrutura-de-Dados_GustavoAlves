#include<stdio.h>

int main(void){
    double fat=1;

    printf("<<Fatorial>>\n");

    for(int i=1;i<=15;i++){
        fat=fat*i;
        if(i>10){
            printf("%d! = %.0lf\n",i,fat);
        }
    }
    return 0;
}
