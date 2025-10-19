/* Esse codigo foi criado para realizar a construção do jogo "War" */
// Para entrada e saida
#include <stdio.h>
#include <string.h>
/* Definição da estrutura*/
// Criação dos territorios
typedef struct territorio{
    char nome[30];  // Nome do territorio
    char cor_do_territorio[10];   // Cor do territorio
    int tropas;     // Número de tropas
}Territorio; // Estrutura do territorio

int main() { 
    Territorio mapa[5]; // Criação do mapa com 5 territórios
    printf("==============================\n"); 
    printf("Vamos cadastrar os 5 territorios inicias do nosso mundo\n");
    printf("==============================\n");

    //2. Loop para cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("\n--- TERRITORIO #%d ---\n", i + 1);

        printf("Digite o nome do territorio: "); 
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = 0; 

        printf("Digite a cor do territorio (EX: Azul, Verde): ");
        fgets(mapa[i].cor_do_territorio, sizeof(mapa[i].cor_do_territorio), stdin);
        mapa[i].cor_do_territorio[strcspn(mapa[i].cor_do_territorio, "\n")] = 0;

        printf("Quantidade de tropas: ");
        if (scanf("%d", &mapa[i].tropas) != 1) {
            mapa[i].tropas = 0;
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
        } 
        else {
            int c = getchar();
            (void)c;
        }
    }
    // 3. Exibição dos territórios cadastrados
    printf("\n\n==============================\n");
    printf("Territórios cadastrados com sucesso!\n");
    printf("==============================\n");
    for (int i = 0; i < 5; i++) {
        printf("\n--- TERRITÓRIO CADASTRADO #%d ---\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor: %s\n", mapa[i].cor_do_territorio);
        printf("Tropas: %d\n", mapa[i].tropas);
    }

    return 0;
}
