#include <stdio.h>

int main()
{
	int codigo, qtdProdutos = 0;
	float preco, precoComAumento, mdPrecoSemAumento = 0, mdPrecoComAumento = 0;

	while (1)
	{
		printf("Informe o preco do produto: ");
		scanf(" %f", &preco);
		printf("Informe o codigo do produto: ");
		scanf(" %d", &codigo);
		
		if (codigo < 0)
		{
			puts("Finalizando...");
			break;
		}

		precoComAumento = preco * 1.20;
		mdPrecoComAumento += precoComAumento;
		mdPrecoSemAumento += preco;
		qtdProdutos++;

		printf("Codigo: %d, novo preco: R$%.2f\n", codigo, precoComAumento);
	}

	mdPrecoComAumento /= qtdProdutos;
	mdPrecoSemAumento /= qtdProdutos;

	printf("Media dos precos com aumento R$%.2f\n", mdPrecoComAumento);
	printf("Media dos precos sem aumento R$%.2f\n", mdPrecoSemAumento);

	return 0;
}
