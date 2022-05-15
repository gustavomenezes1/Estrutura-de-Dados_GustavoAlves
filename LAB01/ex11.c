#include <stdio.h>

struct{
    char rua[50];
    char complemento[50];
    char bairro[50];
    int cep;
    char cidade[50];
    char estado[50];
    char pais[50];
}endereco;

struct telefone{
    int ddd;
    int numero;
};

struct data_aniversario{
    int dia;
    int mes;
    int ano;
};

struct agenda{
    char nome[50];
    char email[50];
    struct endereco end;
    struct telefone tel;
    struct data_aniversario data;
    char observasoes[100];

};


int main(void){
    struct agenda agenda[100];
    int n; //numero de pessoa na agenda
    int j;

    for(int i=0;i<n;i++){
        j=0;
        while(agenda[i].nome[j]!=' '){
            printf("%c",agenda[i].nome[j]);
        }
        printf("\n");    
    }

    


}



