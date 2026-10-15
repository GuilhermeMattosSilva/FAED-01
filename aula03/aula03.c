#include <stdio.h>

int main() {
#pragma region exercicio1
	/*char nome_funcionario1[50];
	char nome_funcionario2[50];

	float salario_funcionario1;
	float salario_funcionario2;

	printf("Digite o nome do primeiro funcionário: ");
	gets_s(nome_funcionario1, sizeof(nome_funcionario1));

	printf("Digite o nome do segundo funcionário: ");
	gets_s(nome_funcionario2, sizeof(nome_funcionario2));

	printf("Digite o salário do primeiro funcionário: ");
	scanf_s("%f", &salario_funcionario1);

	printf("Digite o salário do segundo funcionário: ");
	scanf_s("%f", &salario_funcionario2);

	float media_salarial = (salario_funcionario1 + salario_funcionario2) / 2;

	printf("Média salarial: %.2f\n", media_salarial);*/
#pragma endregion
#pragma region exercicio2
	/*float base;
	float altura;

	printf("Digite a base do triângulo: ");
	scanf_s("%f", &base);

	printf("Digite a altura do triângulo: ");
	scanf_s("%f", &altura);

	float area = (base * altura) / 2;

	printf("Área do triângulo: %.2f\n", area);*/
#pragma endregion
#pragma region exercicio3
	/*float PI = 3.14159;
	float raio = 5.0;
	float area_circulo = PI * (raio * raio);

	printf("Área do círculo: %.2f\n", area_circulo);*/
#pragma endregion
#pragma region exercicio4
	/*float numero1;
	float numero2;
	float soma, subtracao, multiplicacao, divisao;

	scanf_s("%f", &numero1);
	scanf_s("%f", &numero2);

	soma = numero1 + numero2;
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;

	printf("Soma: %.2f\n", soma);
	printf("Subtração: %.2f\n", subtracao);
	printf("Multiplicação: %.2f\n", multiplicacao);
	printf("Divisão: %.2f\n", divisao);*/
#pragma endregion
#pragma region exercicio5
	/*float nota_aluno1, nota_aluno2, nota_aluno3, media;

	printf("Digite a nota do primeiro aluno: ");
	scanf_s("%f", &nota_aluno1);

	printf("Digite a nota do segundo aluno: ");
	scanf_s("%f", &nota_aluno2);

	printf("Digite a nota do terceiro aluno: ");
	scanf_s("%f", &nota_aluno3);

	media = (nota_aluno1 + nota_aluno2 + nota_aluno3) / 3;

	printf("Média das notas: %.2f\n", media);*/
#pragma endregion
#pragma region exercicio6
	/*int numero1;

	scanf_s("%d", &numero1);
	printf("Número digitado: %d\n", numero1);*/
#pragma endregion
#pragma region exercicio8
	/*int numero;
	int quadrado;

	scanf_s("%d", &numero);
	quadrado = numero * numero;

	printf("O quadrado do número %d é: %d\n", numero, quadrado);*/

#pragma endregion
#pragma region exercicio9
	float fahrenheit, conversao;

	printf("Digite a temperatura em Fahrenheit: ");
	scanf_s("%f", &fahrenheit);

	conversao = (fahrenheit - 32) * 5 / 9;

	printf("A temperatura em Celsius é: %.2f\n", conversao);
#pragma endregion
	return 0;
}