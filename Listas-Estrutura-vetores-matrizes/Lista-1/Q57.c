#include <stdio.h>
#define TAM 4
#define VERDADE 1
#define FALSO 0

int main()
{
	int matriz[TAM][TAM], i, j, primeiraVez = VERDADE, maior;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);

			if (primeiraVez)
			{
				maior = matriz[i][j];
				primeiraVez = FALSO;
			}

			if (matriz[i][j] > maior)
				maior = matriz[i][j];
		}
	}

	printf("Maior valor informado: %d", maior);

	return 0;
}