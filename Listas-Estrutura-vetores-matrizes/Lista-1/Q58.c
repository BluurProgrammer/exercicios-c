#include <stdio.h>
#define TAM 3

int main()
{
	float matriz[TAM][TAM];
	int i, j, qtdPositivos = 0;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);

			if (matriz[i][j] > 0)
				qtdPositivos++;
		}
	}	

	printf("Quantidade de positivos: %d", qtdPositivos);

	return 0;
}