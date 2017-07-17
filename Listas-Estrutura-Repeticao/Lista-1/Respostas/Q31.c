#include <stdio.h>

int main()
{
	char acao;
	float precoCompra, precoVenda, lucro, lucroTotal = 0;
	int acoesAcima1000 = 0, acoesAbaixo200 = 0;

	while (1)
	{
		printf("Informe o tipo de acao: ");
		scanf(" %c", &acao);

		if (acao == 'f')
		{
			puts("Finalizando...");
			break;
		}

		printf("Informe o preco de compra: ");
		scanf(" %f", &precoCompra);
		printf("Informe o preco de venda: ");
		scanf(" %f", &precoVenda);

		lucro = precoVenda - precoCompra;
		lucroTotal += lucro;

		if (lucro > 1000.0)
			acoesAcima1000++;
		else if (lucro < 200.0)
			acoesAbaixo200++;

		printf("Lucro: %.2f\n", lucro);
	}

	printf("Quantidade de acoes acima de R$ 1000.0 reais: %d\n", acoesAcima1000);
	printf("Quantidade de acoes abaixo de R$ 200.0 reais: %d\n", acoesAbaixo200);
	printf("Lucro total R$ %.2f\n", lucroTotal);

	return 0;
}

