#include <stdio.h>
#define TAM 3

int main()
{
	
	int matriz[TAM][TAM], i, j, produtoDiagonalPrincipal = 1;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);

			if (i == j)
				produtoDiagonalPrincipal *= matriz[i][j];
		}
	}

	printf("Produto da diagonal principal: %d", produtoDiagonalPrincipal);

	return 0;
}