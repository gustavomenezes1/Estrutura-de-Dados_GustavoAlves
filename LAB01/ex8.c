#include <stdio.h>
#include <math.h>

int main(){
    double media, desvio, v[5],aux=0;
    
    printf("<< Media e desvio-padrao >>\n");

    for(int i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%lf",&v[i]);
    }

    media=(v[0]+v[1]+v[2]+v[3]+v[4])/5;

    for(int i=0;i<5;i++){
        aux=aux+((v[i]-media)*(v[i]-media));
    }
    aux=aux/(5-1);

    desvio=sqrt(aux);

    printf("A media eh %.0lf e o desvio-padrao eh %.2lf\n\n",media,desvio);
    return 0;
}