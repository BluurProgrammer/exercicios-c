#include <stdio.h>
#define TAM 5

int main()
{
	char carros_modelo[TAM][20], modelo_mais_consumidor;
	float carros_consumo[TAM];
	int i;

	for (i = 0; i < TAM; i++)
	{
		printf("Informe o modelo n%d: ", i+1);
		scanf(" %19[^\n]s", &carros_modelo[i]);

		printf("Informe o consumo Km/L: ");
		scanf(" %f", &carros_consumo[i]);
	}

	for (i = 0; i < TAM; i++)
		printf("%s\n", carros_modelo[i]);

	return 0;
}