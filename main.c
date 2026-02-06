#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Pedra/papel/tesoura

    char player1[256];
    char player2[256];

    printf("\nPlayer1... Sua vez!\n");
    scanf("%s",player1);

    printf("\nPlayer2... Sua vez!\n");
    scanf("%s",player2);

    printf("\nAguarde, estamos calculando o resultado...\n");

    if(strcmp(player1, "papel") == 0){
                    if(strcmp(player2,"papel") == 0){
                        printf("Empate!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("Player2 Ganhou!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("Player1 ganhou!");
                    }else{
                        printf("Player2 jogou uma informacao invalida!");
                    }

    }else if(strcmp(player1,"tesoura") == 0){
                     if(strcmp(player2,"papel") == 0){
                        printf("Player1 ganhou!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("Empate!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("Player2 ganhou!");
                    }else{
                        printf("Player2 jogou uma informacao invalida!");
                    }
    }else if(strcmp(player1,"pedra") == 0){
                    if(strcmp(player2,"papel") == 0){
                        printf("Player2 Ganhou!");
                    }else if(strcmp(player2,"tesoura") == 0){
                        printf("Player1 ganhou!");
                    }else if(strcmp(player2,"pedra") == 0){
                        printf("Empate!");
                    }else{
                        printf("Player2 jogou uma informação inválida!");
                    }
    }else{
        printf("Voce jogou uma informação inválida!");
    }





    return 0;
    }

