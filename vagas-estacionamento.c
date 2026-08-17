#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVagas(int arr[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        arr[i] = rand() % 2;
    }
}

void mostrarVagas(int arr[], int tamanho){
    for(int j = 0; j < tamanho; j++){
        arr[j] == 0 ? printf("A vaga %d está livre.\n", j + 1) :
                      printf("A vaga %d está ocupada.\n", j + 1);
    }
}

void contarVagasLivres(int arr[], int tamanho){
    int quantidade = 0;
    for(int k = 0; k < tamanho; k++){
        if(arr[k] == 0){
            quantidade++;
        }
    }

    printf("Tem %d vagas livres\n", quantidade);
}

void contarVagasOcupadas(int arr[], int tamanho){
    int quantidade = 0;
    for(int l = 0; l < tamanho; l++){
        if(arr[l] == 1){
            quantidade++;
        }
    }

    printf("Tem %d vagas ocupadas\n", quantidade);
}

int main(){
    int estacionamento[10];
    srand(time(0));
    preencherVagas(estacionamento, 10);

    printf("\n< ESTACIONAMENTO >\n \n");

    mostrarVagas(estacionamento, 10);
    printf("\n");

    contarVagasLivres(estacionamento, 10);
    contarVagasOcupadas(estacionamento, 10);
    printf("\n");


    return 0;
}
