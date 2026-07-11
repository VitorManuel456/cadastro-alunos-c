#include <stdio.h>

int main() {

    int opcao;

    do {

        printf("\n=====================================\n");
        printf("      SISTEMA DE CADASTRO DE ALUNOS\n");
        printf("=====================================\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Buscar aluno\n");
        printf("0 - Sair\n");
        printf("=====================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nCadastro ainda nao implementado.\n");
                break;

            case 2:
                printf("\nListagem ainda nao implementada.\n");
                break;

            case 3:
                printf("\nBusca ainda nao implementada.\n");
                break;

            case 0:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
