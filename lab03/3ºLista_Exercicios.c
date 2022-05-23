#include<stdio.h>

struct individuo {
int codigo_genetico[10]; // valores binarios aleatorios
int aptidao_abs;// pontencial de cada individuo (0.0 <= aptidao <= 10.0)
int aptidao_relativa; // deve ser calculada em tempo de execução...
};

struct populacao {
struct individuo *pop; // um vetor de N individuos
int tamanho; // tamanho N da população (N = 100)
};
typedef struct populacao populacao;


void aloca_populacao(struct individuo *aux,int tam){//funcao que aloca individuos na memoria;
    aux = (struct individuo*)malloc(tam*sizeof(struct individuo));
}



struct individuo roleta(struct individuo*aux,int tam){
    int apt_total


};


int main(void){//funcao principal
    int i = 0;
    populacao populacao;
    struct individuo ind-i;
    struct individuo ind-j;


    printf("Digite o tamanho da sua Populaçao(numero par): ");
    while(i!=1){
        scanf("%d",&populacao.tamanho);
        if(populacao.tamanho%2==0){
            i=1;
        }else{
            printf("Apenas numeros pares: ");
        }
    }// while para conferir se o numero digitado é par;

    aloca_populacao(populacao.pop,populacao.tamanho);// aloca individuos da populacao;


     ind-i = roleta(populacao.pop,populacao.tamanho);

     ind-j = roleta(populacao.pop,populacao.tamanho);




    return 0;
}
