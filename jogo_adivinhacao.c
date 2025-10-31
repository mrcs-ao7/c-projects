#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int randomNumber, myGuess, tries = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("\n| Jogo de Advinhação | Tente adivinhar o meu número! \n");

    do
    {

        if(tries == 0){
            printf("Digite um número entre 1 e 100> ");

        } else if(tries >= 1 && myGuess > randomNumber){
            printf("\nO meu número é menor. Tente de novo> ");
            
        } else if(tries >= 1 && myGuess < randomNumber){
            printf("\nO meu número é maior. Tente de novo> ");
        }

        scanf("%d", &myGuess);
        tries++;
    } while (myGuess != randomNumber);

    if(tries == 1){
        printf("\nParabéns! Você acertou na primeira tentativa!!\n");
    } else{
        printf("\nParabéns! Você acertou em %d tentativas!!\n", tries);
    }

    return 0;
}