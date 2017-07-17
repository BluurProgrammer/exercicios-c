#include <stdio.h>
#include <string.h>

int main()
{
	int tam, i, qtdPares = 0, qtdImpares = 0, qtdNegativos = 0, menor, maior;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &tam);

	int vetor[tam], input;

	for (i = 0; i < tam; i++)
	{
		printf("Informe um valor: ");
		scanf("%d", &vetor[i]);
		
		input = vetor[i];

		if (i == 0)
		{
			maior = input;
			menor = input;
		}

		if (input > maior)
			maior = input;

		if (input < menor)
			menor = input;
	}

	for (i = 0; i < tam; i++)
	{
		// valores negativos podem entrar no printf do impar
		// ex -2 pq -> -2 % 2 = -1
		
		if (vetor[i] < 0)
		{
			printf("Valor negativo: %d\n", vetor[i]);
			qtdNegativos++;
		}
		else if (vetor[i] % 2 == 0)
		{
			printf("Valor par: %d\n", vetor[i]);
			qtdPares++;
		}
		else
		{
			printf("Valor impar: %d\n", vetor[i]);
			qtdImpares++;
		}
	}

	printf("Quantidade de pares: %d\n", qtdPares);
	printf("Quantidade de impares: %d\n", qtdImpares);
	printf("Quantidade de negativos: %d\n", qtdNegativos);
	printf("Maior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);

	return 0;
}