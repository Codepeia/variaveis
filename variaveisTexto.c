#include<stdio.h>

main(){

    //declaração e atribuição de uma variável de texto
    //tipo nome tamanho
    char nome[10] = "Ana Julia";
    char nome2[20];
    char nome3[20];

    printf("Nome: %s", nome);

    //recebendo dados de texto com scanf
    printf("\nDigite o nome: ");
    scanf("%[^\n]", nome2);
    fflush(stdin);
    printf("\nNome: %s", nome2);

    //recebendo dados de texto com fgets
     printf("\nDigite o nome3: ");
     fgets(nome3, 20, stdin);
    printf("\nNome: %s", nome3);

}