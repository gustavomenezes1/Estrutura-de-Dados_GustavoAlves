#include<stdio.h>

int main(void){
   float a,b,c;
   float valor;
   float aux;

   printf("<< Loteria >>\n");
   printf("Bolão jogador 1 R$: ");
   scanf("%f",&a);
   printf("Bolão jogador 2 R$: ");
   scanf("%f",&b);
   printf("Bolão jogador 3 R$: ");
   scanf("%f",&c);
   printf("Informe o valor do prêmio:");
   scanf("%f",&valor);

   aux = valor/(a+b+c);

   printf("Jogador 1 receberá R$: %.1f\n",a*aux);
   printf("Jogador 2 receberá R$: %.1f\n",b*aux);
   printf("Jogador 3 receberá R$: %.1f\n",c*aux);

    return 0;
}
