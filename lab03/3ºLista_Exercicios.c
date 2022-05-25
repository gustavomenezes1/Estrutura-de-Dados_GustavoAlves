#include <stdio.h>
#include <stdlib.h>

struct individuo {
int codigo_genetico[10]; // valores binarios aleatorios
float aptidao_abs;// pontencial de cada individuo (0.0 <= aptidao <= 10.0)
float aptidao_relativa; // deve ser calculada em tempo de execu��o...
};

struct populacao {
struct individuo *pop; // um vetor de N individuos
int tamanho; // tamanho N da popula��o (N = 100)
};
typedef struct populacao populacao;


void aloca_populacao(struct individuo *aux,int tam){//funcao que aloca individuos na memoria;
    aux = (struct individuo*)malloc(tam*sizeof(struct individuo));
}


struct individuo roleta(struct individuo*aux,int tam){
    float apt_total=0, apt_aux=0, n_aleatorio;
    int j=0;

    for(int i=0;i<tam;i++){// for que descobre a soma de todas as apetidoes
        apt_total += aux[i].aptidao_abs;
    }

    for(int i=0;i<tam;i++){// for que descobre a apitidao relativa de toda a populacao
        aux[i].aptidao_relativa = aux[i].aptidao_abs/apt_total;
    }


    n_aleatorio = rand()% 1;// sorteia o numero aleatorio

    for(int i=0;i<tam;i++){// for para saber qual individuo eh o sorteado
        apt_aux += aux[i].aptidao_relativa;
        if(apt_aux<=n_aleatorio){
            return aux[i];
        }
    }
};


int main(void){//funcao principal
    int i = 0;
    populacao populacao;
    struct individuo ind_i;
    struct individuo ind_j;


    printf("Digite o tamanho da sua Popula�ao(numero par): ");
    while(i!=1){
        scanf("%d",&populacao.tamanho);
        if(populacao.tamanho%2==0){
            i=1;
        }else{
            printf("Apenas numeros pares: ");
        }
    }// while para conferir se o numero digitado � par;

    aloca_populacao(populacao.pop,populacao.tamanho);// aloca individuos da populacao;

     ind_i = roleta(populacao.pop,populacao.tamanho);

     ind_j = roleta(populacao.pop,populacao.tamanho);

    return 0;
}
