#include<stdio.h>

int main(void){
    char nome[50]; 
    char c; 
    int i, pos;      
    
    printf("<<Vetor de char>>\n");
    printf("Digite um nome: ");  
    pos = 0;     
    c = getchar();  
   
    while (c != '\n') {           
        nome[pos] = c;         
        pos++;         
        c = getchar();     
    } 
    
    printf("O nome digitado é:");
    for (i=0; i < pos; i++){         
        printf("%c", nome[i]);     
    }
}