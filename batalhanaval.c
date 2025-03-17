#include <stdio.h>
void tabuleiro()
{
    int tabuleiro[10][10] = {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int navio[1] = {3};

    // Posições do navio
    // Mostra o navio na Horizontal
    tabuleiro[2][3] = navio[0];
    tabuleiro[2][4] = navio[0];
    tabuleiro[2][5] = navio[0];
    // Mostra o navio na Vertical
    tabuleiro[7][6] = navio[0];
    tabuleiro[8][6] = navio[0];
    tabuleiro[9][6] = navio[0];
    // Mostra o navio na Diagonal Baixo Direita
    // tabuleiro[7][1] = navio[0];
    // tabuleiro[8][2] = navio[0];
    // tabuleiro[9][3] = navio[0];

    printf("\n");
    printf("================================\n");
    printf(" BATALHA NAVAL - DESAFIO NO MAR \n");
    printf("================================\n");
    printf("   ");               // espacamento perto dos caracteres
    for (int i = 0; i < 10; i++) // exibicao dos caracteres na horizontal
    {
        printf("%c ", coluna[i]); // exibicao dos caracteres
    }

    printf("\n");

    for (int i = 0; i < 10; i++) // Exibição do numero de 1 a 10 na vertical e linhas do 0
    {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++) // Exibição dos zeros da coluna
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
};

int main()
{
    int opcao, escolhaColuna, escolhaLinha;

    do
    {
        // Menu principal
        printf("\n");
        printf("================================\n");
        printf(" BATALHA NAVAL - DESAFIO NO MAR  \n");
        printf("================================\n");
        printf("1) Regras \n");
        printf("2) Jogar \n");
        printf("3) Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            printf("\nRegras do Jogo: \n"); // regras do jogo
            printf("1) Acerte onde esta o navio \n");
            printf("2) Ganha quem acerta o navio todo primeiro \n");
            printf("3) Boa sorte! \n");
            printf("\nPressione 'ENTER' para voltar ao menu principal... ");
            getchar();
            break;
        case 2:
            printf("\n");
            tabuleiro();
            printf("\nPressione 'ENTER' para voltar ao menu principal... ");
            getchar();
            break;
        case 3:
            printf("Pressione 'ENTER' para sair... \n");
            getchar();
            break;
        default:
            printf("Opcao invalida, Tente Novamente... \n");
            break;
        }
    } while (opcao != 3);

    return 0;
}