#include <stdio.h>

int main() {
#pragma region Exercicio1
	int idade = 21;
	float altura = 1.78;
	char nome[] = "Guilherme Silva";

	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Altura: %f\n", altura);


#pragma endregion
#pragma region Exercicio2
	char nome2[50];
	int dia;
	int mes;
	int ano;
	
	printf("Qual o seu nome?\n");
	gets_s(nome2, sizeof(nome2));
	printf("Qual dia voce nasceu?\n");
	scanf_s("%d \n", &dia);
	printf("Qual mes voce nasceu?\n");
	scanf_s("%d \n", &mes);
	printf("Qual ano voce nasceu?\n");
	scanf_s("%d \n", &ano);

	printf("Seu nome é: %s\n", nome2);
	printf("Você nasceu em: %d/%d/%d\n", dia, mes, ano);


#pragma endregion
#pragma region Exercicio3
	int idade_pessoa1;
	int idade_pessoa2;

	char nome_pessoa1[50];
	char nome_pessoa2[50];

	//Dados Pessoa1
	printf("Digite o nome da Pessoa 1:\n");
	gets_s(nome_pessoa1, sizeof(nome_pessoa1));

	printf("Digite a idade da Pessoa 1:\n");
	scanf_s("%d", &idade_pessoa1);

	getchar();
	//Dados Pessoa2
	printf("Digite o nome da Pessoa 2:\n");
	gets_s(nome_pessoa2, sizeof(nome_pessoa2));

	printf("Digite a idade da Pessoa 2:\n");
	scanf_s("%d", &idade_pessoa2);

	printf("%s | %d\n", nome_pessoa1, idade_pessoa1);
	printf("%s | %d", nome_pessoa2, idade_pessoa2);
	

#pragma endregion
#pragma region Exercicio4
	char nome_funcionario1[50];
	float salario_funcionario1;

	char nome_funcionario2[50];
	float salario_funcionario2;

	printf("Digite o nome do Funcionario 1:\n");
	gets_s(nome_funcionario1, sizeof(nome_funcionario1));
	printf("Digite o salario do Funcionario 1:\n");
	scanf_s("%f", &salario_funcionario1);

	getchar();

	printf("Digite o nome do Funcionario 2:\n");
	gets_s(nome_funcionario2, sizeof(nome_funcionario2));
	printf("Digite o salario do Funcionario 2:\n");
	scanf_s("%f", &salario_funcionario2);

	printf("%s | %.2f\n", nome_funcionario1, salario_funcionario1);
	printf("%s | %.2f", nome_funcionario2, salario_funcionario2);

#pragma endregion
		return 0;
}