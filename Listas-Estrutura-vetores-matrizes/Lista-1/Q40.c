#include <stdio.h>
#define TOTAL_PRODUTOS 3
#define TAM_NOME 20

int main()
{
	char nomes[TOTAL_PRODUTOS][TAM_NOME];
	float precos[TOTAL_PRODUTOS], mediaTotal80 = 0;
	int i, qtdInferior50 = 0, qtdSuperior80 = 0;

	for (i = 0; i < TOTAL_PRODUTOS; i++)
	{
		printf("Informe um nome para o produto: ");
		scanf(" %s", &nomes[i]);

		printf("Informe um preco para o produto: ");
		scanf(" %f", &precos[i]);

		if (precos[i] > 80.00)
		{
			qtdSuperior80++;
			mediaTotal80 += precos[i];
		}
		else if (precos[i] < 50.00)
			qtdInferior50++;
	}
	
	printf("Quantidade de produtos com preco inferior a R$50,00: %d\n", qtdInferior50);

	if (qtdSuperior80 > 0)
	{
		mediaTotal80 /= qtdSuperior80;
		printf("Media dos precos dos produtos com preco superior a R$80,00: %.2f", mediaTotal80);
	}
	else
		printf("Nao foi possivel calcular a media dos produtos com valor acima de R$ 80,00, nenhum produto informado.");

	return 0;
}