#include <stdio.h>
#include <math.h>

int main(void){
   int x,y;
   float d;

   printf("<< Distância >>\n");
   printf("Entre com a coordenada x:");
   scanf("%d",&x);
   printf("Entre com a coordenada y:");
   scanf("%d",&y);

   d = sqrt((x*x)+(y*y));
   printf("A distância entre os pontos (%d,%d) e (0,0) eh %.1f\n",x,y,d);

   return 0;
}
