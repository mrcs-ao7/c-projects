#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pedidosPratos(int arr[], int tamanho){
    for(int i = 0; i < tamanho; i++)
    {
        arr[i] = rand() % 21;
        printf("Prato %d: %d pedidos.\n", i + 1, arr[i]);
    }
}

void pedidosTotais(int arr[], int tamanho){
    int soma = 0;

    for(int j = 0; j < tamanho; j++){
        soma += arr[j];
    }

    printf("%d\n", soma);
}

void maisPedido(int arr[], int tamanho){
    int maior = arr[0];
    int indice = 0;
    
    for(int k = 1; k < tamanho; k++){
        if(arr[k] > maior){
            maior = arr[k];
            indice = k;
        }
    }

    printf("%d\n", indice + 1);
}

void receitaTotal(int arr1[], int arr2[], int tamanho){
    int soma = 0;
    for(int l = 0; l < tamanho; l++){
        soma += arr1[l] * arr2[l];
    }

    printf("R$ %d,00.", soma);
}

int main(){
    int pratos[5], precos[5] = {25, 32, 18, 40, 27};
    int dia, mes;

    srand(time(0));
    dia = rand() % 31 + 1;
    mes = rand() % 12 + 1;

    printf("\n< DADOS DO RESTAURANTE (%02d/%02d/2025) >\n \n", dia, mes);

    pedidosPratos(pratos, 5);

    printf("\nPRATO MAIS PEDIDO HOJE: ");
    maisPedido(pratos, 5);

    printf("\nTOTAL DE PEDIDOS: ");
    pedidosTotais(pratos, 5);

    printf("RECEITA TOTAL: ");
    receitaTotal(pratos, precos, 5);
    printf("\n");
    printf("\n");

    return 0;
}

