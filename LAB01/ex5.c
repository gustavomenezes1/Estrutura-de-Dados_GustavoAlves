#include<stdio.h>

int main(void){
    int n,x=1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
