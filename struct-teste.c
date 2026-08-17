#include <stdio.h>

struct Contatos{
    char nome[50];
    char telefone[50];
    char email[50];
};

int main(){
    int quantidade;

    printf("\nDigite a quantidade de informações do Usuário você irá digitar: ");
    scanf("%d", &quantidade);
    printf("\n");

    struct Contatos cts[quantidade];

    for(int  i = 0; i < quantidade; i++)
    {
        printf("\nDados usuário %d\n", i + 1);

        printf("Digite o nome do Usuário: ");
        scanf("%s", cts[i].nome);

        printf("Digite o número telefônico: ");
        scanf("%s", cts[i].telefone);

        printf("Digite o email: ");
        scanf("%s", cts[i].email);
    }

    for(int j = 0; j < quantidade; j++)
    {
        printf("\n--- Lista de Contatos --- \n");
        printf("Contato %d: \n* Nome: %s \n*Tefelone: %s \n*Email: %s", j + 1, cts[j].nome, cts[j].telefone, cts[j].email);
    }

    return 0;
}
