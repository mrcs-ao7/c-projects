#include <stdio.h>

// Funções de operação retornam o resultado da operação
int Soma(int i, int j){
    return i + j;
}

int Subtracao(int i, int j){
    return i - j;
}

int Multiplicacao(int i, int j){
    return i * j;
}

int Divisao(int i, int j){
    if(j != 0)
        return i / j;
    else {
        printf("Erro: divisão por zero! Ignorado.\n");
        return 0;
    }
}

// Função para mostrar resultado
void ResultadoFinal(int y){
    printf("\nResultado final: %d\n", y);
}

int main(){
    int numero1, numero2;
    int total = 0;  // total acumulado
    char operacao;

    printf("\n| CALCULADORA ACUMULATIVA | (Digite F para finalizar)\n");

    while(1){
        printf("\nDigite o primeiro número (ou F para finalizar): ");
        if(scanf("%d", &numero1) != 1){ // se não for número
            char c;
            scanf(" %c", &c); // lê o caractere digitado
            if(c == 'F' || c == 'f') break; // encerra o loop
            else {
                printf("Entrada inválida!\n");
                continue;
            }
        }

        printf("Digite a operação (+, -, *, /): ");
        scanf(" %c", &operacao); // espaço antes do %c para ignorar '\n'

        printf("Digite o segundo número: ");
        if(scanf("%d", &numero2) != 1){
            printf("Número inválido! Operação ignorada.\n");
            while(getchar() != '\n'); // limpa buffer
            continue;
        }

        switch (operacao){
            case '+':
                total += Soma(numero1, numero2);
                break;
            case '-':
                total += Subtracao(numero1, numero2);
                break;
            case '*':
                total += Multiplicacao(numero1, numero2);
                break;
            case '/':
                total += Divisao(numero1, numero2);
                break;
            default:
                printf("Operação inválida! Ignorada.\n");
                break;
        }

        printf("Total acumulado até agora: %d\n", total);
    }

    ResultadoFinal(total);

    return 0;
}
