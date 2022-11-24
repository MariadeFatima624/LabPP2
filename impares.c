/*
Arquivo: impares.c
Data de criação: 24 de novembro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include <stdio.h>

int main(void){
    int a, b;
    printf("Escolha um os limites de um intervalo [a, b] (sendo a<b): ");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("O primeiro número deve ser menor que o segundo. Escolha um novo intervalo:");
        scanf("%d %d", &a, &b);
    }


    for(int i=a; i<=b; i++){
      
        if(i%2==1){
            printf("%d",i);   
        }
        
        
    }
    
    return 0;
}

