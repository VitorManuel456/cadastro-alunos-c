#include <stdio.h>

#define MAX_ALUNOS 100

typedef struct {
    char nome[100];
    int idade;
    float nota;
} Aluno;

Aluno alunos[MAX_ALUNOS];
int quantidade = 0;

int main() {

    int opcao;

    do {

        printf("\n=====================================\n");
        printf("      SISTEMA DE CADASTRO DE ALUNOS\n");
        printf("=====================================\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:

                if(quantidade < MAX_ALUNOS){

                    printf("Nome: ");
                    scanf(" %[^\n]", alunos[quantidade].nome);

                    printf("Idade: ");
                    scanf("%d",&alunos[quantidade].idade);

                    printf("Nota: ");
                    scanf("%f",&alunos[quantidade].nota);

                    quantidade++;

                    printf("\nAluno cadastrado com sucesso!\n");

                }else{

                    printf("\nLimite de alunos atingido.\n");

                }

                break;

            case 2:

                printf("\n===== LISTA DE ALUNOS =====\n");

                if(quantidade == 0){

                    printf("Nenhum aluno cadastrado.\n");

                }else{

                    for(int i=0;i<quantidade;i++){

                        printf("\nAluno %d\n",i+1);
                        printf("Nome : %s\n",alunos[i].nome);
                        printf("Idade: %d\n",alunos[i].idade);
                        printf("Nota : %.2f\n",alunos[i].nota);

                    }

                }

                break;

            case 0:
                printf("\nSistema encerrado.\n");
                break;

            default:
                printf("\nOpcao invalida.\n");

        }

    }while(opcao!=0);

    return 0;
}
