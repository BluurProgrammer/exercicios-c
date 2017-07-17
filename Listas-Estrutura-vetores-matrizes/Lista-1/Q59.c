#include <stdio.h>
#include <string.h>
#define QTD_ALUNO 5 // Alterar para 100
#define QTD_QUESTOES 4 // alterar para 10

int main()
{
	char candidatos[QTD_ALUNO][QTD_QUESTOES];
	char gabarito[QTD_QUESTOES] = {'b', 'd', 'a','c'}; // alterar o gabarito para 10 elementos no vetor
	int  resultado[QTD_ALUNO];
	int i, j;

	memset(&resultado, 0, sizeof(resultado));

	for (i = 0; i < QTD_ALUNO; i++)
	{
		for (j = 0; j < QTD_QUESTOES; j++)
		{
			printf("Aluno %d ", i + 1);
			printf("Informe a sua resposta da questao %d: ", j + 1);
			scanf(" %c", &candidatos[i][j]);

			if (candidatos[i][j] == gabarito[j])
				resultado[i] += 1;
		}

		printf("\n");
	}

	for (i = 0; i < QTD_ALUNO; i++)
		printf("Aluno %d, pontos %d \n", i + 1, resultado[i]);
	
	return 0;
}