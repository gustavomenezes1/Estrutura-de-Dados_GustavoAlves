#include<stdio.h>

int main(void){
    float imc, m, a;

    printf("<< Calculadora IMC >>\n");
    printf("Digite a massa em Kg: ");
    scanf("%f",&m);
    printf("Digite a altura em m: ");
    scanf("%f",&a);

    imc = m/(a*a);

    printf("\n Classificacao IMC: %.1f ->",imc);
    if(imc<18.5){
        printf("Magreza \n");
    }else if(imc>=18.5 && imc<=24.9 ){
        printf("Saudavel \n");
    }else if(imc>=25 && imc<=29.9 ){
        printf("Sobrepeso \n");
    }else if(imc>=18.5 && imc<=34.9 ){
        printf("Obesidade Grau I \n");
    }else if(imc>=18.5 && imc<=39.9 ){
        printf("Obesidade Grau II(severa) \n");
    }else if(imc>=40){
        printf("Obesidade Grau III(morbida)  \n");
    }

    return 0;

}

