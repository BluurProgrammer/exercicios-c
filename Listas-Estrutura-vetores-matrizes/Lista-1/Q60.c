#include <stdio.h>
#define TAM 4

int main()
{
	int matriz[TAM][TAM];
	int primeiraLinha[TAM], ultimaColuna[TAM];
	int i , j;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);

			if (i == 0)
			 	primeiraLinha[j] = matriz[i][j];
			 
			if (j == (TAM - 1))
			 	ultimaColuna[i] = matriz[i][j];
		}
	}

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (i == 0)
				matriz[i][j] = ultimaColuna[j];

			if (j == (TAM - 1))
				matriz[i][j] = primeiraLinha[i];
		}
	}

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
			printf("Matriz[%d][%d] -> %d\n", i, j,matriz[i][j]);
	}
	
	return 0;
}