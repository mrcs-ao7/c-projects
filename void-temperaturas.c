#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarTemperaturas(int arr[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        arr[i] = rand() % 45 + 1 - 5;
    }
}

void mostrarTemperaturas(int arr[], int tamanho){
    for(int j = 0; j < tamanho; j++){
        {
            printf("| %d ", arr[j]);
        }
    }
}

void maiorTemp(int arr[], int tamanho){
    int maior = 0;
    for(int k = 0; k < tamanho; k++){
        if(maior < arr[k]){
            maior = arr[k];
        }
    }

    printf("%d °C", maior);
}

void menorTemp(int arr[], int tamanho){
    int menor = 40;
    for(int l = 0; l < tamanho; l++){
        if(menor > arr[l]){
            menor = arr[l];
        }
    }

    printf("%d °C", menor);
}

void mostrarMediaTemp(int arr[], int tamanho){
    int soma = 0;
    for(int m = 0; m < tamanho; m++){

        soma += arr[m];
    }

    int media = soma / tamanho;
    printf("%d °C", media);
}

void diasAcimaDaMedia(int arr[], int tamanho){
    int soma = 0;
    for(int n = 0; n < tamanho; n++){

        soma += arr[n];
    }

    int media = soma / tamanho;
    
    for(int n = 0; n < tamanho; n++){
        if(arr[n] > media){
            printf("%d | ", arr[n]);
        }
    }
}
   

int main(){
    int temperaturas[15];
    srand(time(0));
    gerarTemperaturas(temperaturas, 15);

    printf("Temperaturas dos Últimos 15 dias:\n");
    mostrarTemperaturas(temperaturas, 15);


    printf("\n \nMaior Temperatura Registrada: ");
    maiorTemp(temperaturas, 15);

    printf("\nMenor Temperatura Registrada: ");
    menorTemp(temperaturas, 15);


    printf("\n \nMédia das Temperaturas: ");
    mostrarMediaTemp(temperaturas, 15);

    printf("\nDias Acima da Média: ");
    diasAcimaDaMedia(temperaturas, 15);
    printf("\n");

    return 0;
}
