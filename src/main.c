#include <stdio.h>

#define MAX_ALUNOS 100

typedef struct{

    char nome[100];
    int idade;
    float nota;

}Aluno;

Aluno alunos[MAX_ALUNOS];
int quantidade = 0;

void mostrarMenu(){

    printf("\n=====================================\n");
    printf("      SISTEMA DE CADASTRO DE ALUNOS\n");
    printf("=====================================\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Listar alunos\n");
    printf("3 - Buscar aluno\n");
    printf("0 - Sair\n");
    printf("Escolha: ");

}

void cadastrarAluno(){

    if(quantidade >= MAX_ALUNOS){

        printf("\nLimite de alunos atingido.\n");
        return;

    }

    printf("Nome: ");
    scanf(" %[^\n]", alunos[quantidade].nome);

    printf("Idade: ");
    scanf("%d",&alunos[quantidade].idade);

    printf("Nota: ");
    scanf("%f",&alunos[quantidade].nota);

    quantidade++;

    printf("\nAluno cadastrado com sucesso!\n");

}

void listarAlunos(){

    if(quantidade==0){

        printf("\nNenhum aluno cadastrado.\n");
        return;

    }

    printf("\n===== ALUNOS CADASTRADOS =====\n");

    for(int i=0;i<quantidade;i++){

        printf("\nAluno %d\n",i+1);
        printf("Nome : %s\n",alunos[i].nome);
        printf("Idade: %d\n",alunos[i].idade);
        printf("Nota : %.2f\n",alunos[i].nota);

    }

}

void buscarAluno(){

    char nomeBusca[100];
    int encontrado = 0;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nomeBusca);

    for(int i=0;i<quantidade;i++){

        if(strcmp(nomeBusca, alunos[i].nome)==0){

            printf("\nAluno encontrado!\n");
            printf("Nome : %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota : %.2f\n", alunos[i].nota);

            encontrado = 1;
            break;

        }

    }

    if(!encontrado){

        printf("\nAluno nao encontrado.\n");

    }

}

int main(){

    int opcao;

    do{

        mostrarMenu();

        scanf("%d",&opcao);

        switch(opcao){

            case 1:
                cadastrarAluno();
                break;

            case 2:
                listarAlunos();
                break;

            case 3:
                buscarAluno();
                break;

            case 0:
                printf("\nEncerrando sistema...\n");
                break;

            default:
                printf("\nOpcao invalida.\n");

        }

    }while(opcao!=0);

    return 0;

}
