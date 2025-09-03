#include <stdio.h>
#include <string.h> // Biblioteca para funções de string, como o strtok

int main(){
    char nome[50];
    int idade = 0;
    int massa = 0;
    int altura = 0;
    char x;

    for (int num = 1; num <= 10; num++){

        printf("Escolha uma das opções \n[a] - inserir altura\n[m] - inserir massa corporal\n[i] - inserir idade\n[n] - inserir nome\n[e] -exibir informacoes\n[0] - fechar o programa\n RESPOSTA: ");

        fflush(stdin);
        scanf(" %c", &x);

        switch (x){
            case 'a':
                puts("Escreva sua Altura: ");
                fflush(stdin);
                scanf(" %d", &altura);
                break;
            case 'm':
                puts("Escreva sua Massa Coporal: ");
                fflush(stdin);
                scanf(" %d", &massa);
                break;
            case 'i':
                puts("Escreva sua Idade: ");
                fflush(stdin);
                scanf(" %d", &idade);
                break;
            case 'n':
                puts("Escreva seu Nome: ");
                fflush(stdin);
                scanf(" %s", nome);
                break;
            case 'e':
                puts("Aqui esta suas informacoes");
                printf("Seu Nome: %s\n", nome);
                printf("Sua Massa: %d\n", massa);
                printf("Sua Idade: %d\n", idade);
                printf("Sua Altura: %d\n", altura);
                break;
            case '0':
                printf("Fechando o programa, Tchauu!!");
                return 0;
            default:
                puts("A opcao selecionada e invalida");
                break;
        }
    }
    return 0;
}
