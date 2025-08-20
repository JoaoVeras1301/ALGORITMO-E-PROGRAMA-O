#include <stdio.h> // puxando biblioteca principal do C
#include <string.h> // puxando biblioteca para efetuar a função de limpar  o \n

	// Função para remover a quebra de linha que o fgets adiciona
	void remover_quebra_de_linha(char *string) {
    	string[strcspn(string, "\n")] = 0;
	}

int main() {
	char nome[50], turma[50], disciplina[50]; //variaveis de string
	int idade, matricula; // variaveis de numeros inteiros
	float altura, peso, imc;// variaveis de numeros quebrados


	printf("Digite seu nome: ");
	fgets(nome, 50, stdin);    		// primeira caixa de texto, pergunta qual é o nome da pessoa e usa o fgets para capturar o nome.
	remover_quebra_de_linha(nome);


	printf("Digite sua idade: ");	
	scanf("%d", &idade);			// segunda caixa de texto, pergunta qual é a idade da pessoa e usa o scanf para capturar o numero.
	while (getchar() != '\n');

	printf("Digite sua turma: ");
	fgets(turma, 50, stdin);  		// mesma coisa da primeira caixa
	remover_quebra_de_linha(turma);

	printf("Digite sua matricula: ");
	scanf("%d", &matricula);		// mesma coisa da segunda caixa
	while (getchar() != '\n');

	printf("Digite sua disciplina: ");
	fgets(disciplina, 50, stdin);  ;	// mesma coisa que a primeira caixa
	remover_quebra_de_linha(disciplina);

	printf("Obrigado pelas informacoes, agora vamos calcular seu IMC.\n"); // pegunta os dados para efetuar o calculo do IMC
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);			// caixa de texto que usa o scanf para puxar o valor do float usando %f
	while (getchar() != '\n');

	printf("Digite seu peso: ");
	scanf("%f", &peso);				// mesma coisa que a outra
	while (getchar() != '\n');
	
	imc = peso / (altura * altura); // calculo do imc, pega os dados salvos das variaveis e faz o calculo




	//exibição dos resultados de calculo e dos dados
	
	printf("_________________________________________________\n");
	printf("|Disciplina: %s|\n", disciplina);
	printf("|Turma: %s|\n", turma);
	printf("|Nome:%s|\n", nome);
	printf("|Matricula:%d|\n", matricula);	
	printf("|Seu Peso:%f|\n", peso);	
	printf("|Sua Altura:%f|\n", altura);	
	printf("|Seu IMC e:%f|\n", imc);	
	printf("-------------------------------------------------\n");

	printf("Digite enter para sair...\n");
    fflush(stdin); // limpa o cache de memoria 
	
	return 0;

}
