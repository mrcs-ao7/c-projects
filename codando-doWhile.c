#include <stdio.h>

int main(){
    int numero;

    do{
        printf("Digite número ímpar> ");
        scanf("%d", &numero);

        if(numero % 2 != 0){
            printf("\nÉ ímpar!\n");
        } else{
            printf("\nÉ par!\n");
        }


    } while (numero % 2 == 0);

    printf("Ótimo número!!\n \n");

    return 0;
}