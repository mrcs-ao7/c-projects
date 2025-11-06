#include <stdio.h>

struct song{
    char titulo[100], artista[100];
    int duracaoS, duracaoM, ano;

};


int main(){
    int opcao, volta, contagem = 0;
    struct song musica[1000];

    do
    {
        printf("\n=== PLAYLIST: *FAVORITAS* ===\n");
        printf("1> Adicionar Música\n");
        printf("2> Ver Playlist Completa\n");
        printf("3> Sair ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            printf("\nTítulo da Faixa: ");
            scanf(" %99[^\n]", musica[contagem].titulo);

            printf("Nome do Artista/ Banda: ");
            scanf(" %99[^\n]", musica[contagem].artista);

            printf("Duração da Faixa (Minutos Apenas): ");
            scanf("%d", &musica[contagem].duracaoM);

            printf("Duração da Faixa (Segundos Apena): ");
            scanf("%d", &musica[contagem].duracaoS);

            printf("Ano de Lançamento: ");
            scanf("%d", &musica[contagem].ano);

            printf("\nSua Música foi Adicionada! Aperte Enter para Voltar ao Menu ");
            getchar();
            getchar();
            
            contagem++;
            break;
            
        case 2:
            printf("\nVocê tem %d Músicas na Playlist!\n", contagem);

            for(int i = 0; i != contagem; i++){

                printf("\n%d. %s - ", i + 1, musica[i].titulo);
                printf("%d:%.2d | ", musica[i].duracaoM, musica[i].duracaoS);
                printf("%s - ", musica[i].artista);
                printf("%d", musica[i].ano);
            }

            printf("\nAperte Enter para Voltar ao Menu ");
            getchar();
            getchar();

            break;

        default:

            printf("\nVocê Fechou a Playlist!\n\n");
            break;
    }

    } while (opcao > 0 && opcao < 3);
    
    return 0;
}