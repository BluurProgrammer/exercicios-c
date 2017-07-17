#include <stdio.h>
#define TAM 3

int main()
{
	int matriz[TAM][TAM], somaDiv7 = 0, i, j;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para a matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);

			if (matriz[i][j] % 7 == 0)
				somaDiv7 += matriz[i][j];
		}
	}

	printf("Soma dos valores divisiveis por 7: %d", somaDiv7);

	return 0;
}