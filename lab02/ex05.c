#include<stdio.h>

int main(void){
   int *array;

   array = (int *) malloc(5*sizeof(int));

   printf("Digite 5 numeros inteiros : ");

   for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
   }

   printf("Numeros digitados: ");
   for(int i=0;i<5;i++){
        printf("%d ",array[i]);
   }

   free(array);

   return 0;
}
