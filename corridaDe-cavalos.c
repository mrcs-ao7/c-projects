#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void corridas(int arr[8][7]){
    int numeracao;

    for(int a = 0; a < 8 ; a++){
        printf("Cavalo %d: ", numeracao = a + 1);

        for(int b = 0; b < 7; b++){
            arr[a][b] = rand() % 70 + 50;

            printf("%3d | ", arr[a][b]);
        }

        printf("\n");
    }
}

void melhorTempoCd(int arr[8][7]){
    int numeracao;
    int melhorTempo = 120;

    for(int a = 0; a < 8; a++){
        printf("Cavalo %d: ", numeracao = a + 1);

        for(int b = 0; b < 7; b++)
        {
            if(arr[a][b] < melhorTempo){
                melhorTempo = arr[a][b];
            }   
        }

        printf("%d segundos", melhorTempo);
        melhorTempo = 120;
        printf("\n");
    }

}

void melhorTempoTl(int arr[8][7]){
    int melhorTempo = 120;
    int numeracao = 1;

    for(int a = 0; a < 8; a++){

        for(int b = 0; b < 7; b++)
        {
            if(arr[a][b] < melhorTempo){
                melhorTempo = arr[a][b];
                numeracao = a;
            }  
        }
    }

    printf("Cavalo %d com %d segundos", numeracao + 1, melhorTempo);
}

void temposAbaixo(int arr[8][7]){
    int numeracao;
    int contagem = 0;

    for(int a = 0; a < 8; a++){

        for(int b = 0; b < 7; b++)
        {
            if(arr[a][b] < 60){
                contagem++;
            }
        }

        printf("Cavalo %d tem %d corridas\n", numeracao = a + 1, contagem);
        contagem = 0;
    }
}

int main(){
    char tempos[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int cavalosCorrida[8][7];
    srand(time(0));

    printf("\n             ");
    printf("< CORRIDA DE CAVALOS >\n");

    printf("\nTempo(s):");
    for(int i = 0; i < 7; i++){
        printf("%3c   ", tempos[i]);
    }
    
    printf("\n");
    corridas(cavalosCorrida);
    printf("\n");

    printf("\nMelhor Tempo de cada Cavalo:\n");
    melhorTempoCd(cavalosCorrida);
    printf("\n");

    printf("O Melhor Tempo: ");
    melhorTempoTl(cavalosCorrida);
    printf("\n");

    printf("\nCorridas Abaixo de 1 Minuto:\n");
    temposAbaixo(cavalosCorrida);
    printf("\n");

    return 0;
}
