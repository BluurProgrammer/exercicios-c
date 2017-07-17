#include <stdio.h>
#include <string.h>
#define TAM 3

int main()
{
	int matriz[TAM][TAM], i, j, k, l, valor, achou;
	int somaLinhas = 0, somaColunas = 0, somaDgPrincipal = 0, SomaDgSecundaria = 0;
	int tamanhoMatriz = TAM * TAM;
	int vetor[tamanhoMatriz];

	memset(vetor, 0, sizeof(vetor));

	l = 0;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			printf("Informe um valor para [%d][%d]: ", i, j);
			scanf("%d", &valor);

			if (valor < 1 || valor > 9)
			{
				puts("Apenas numeros entre 1 e 9");
				j--;
				continue;
			}

			achou = 0;
			
			for (k = 0; k < tamanhoMatriz; k++)
			{
				if (valor == vetor[k])
				{
					achou = 1;
					break;
				}
			}

			if (achou)
			{
				printf("O valor %d ja foi adicionado!\n", valor);
				j--;
				continue;
			}
			vetor[l++] = valor;
			matriz[i][j] = valor;
		}
			
	}

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (i == j)
				somaDgPrincipal += valor;

			if (i == TAM - 1 - j)
				SomaDgSecundaria += valor;

			somaLinhas += matriz[i][j];
			somaColunas += matriz[j][i];

			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Principal: %d, secundaria %d \n", somaDgPrincipal, SomaDgSecundaria);
	printf("Linhas: %d, colunas %d \n", somaLinhas, somaColunas);
	
	return 0;
}