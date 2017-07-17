#include <stdio.h>
#define QTD_ALUNOS 3
#define QTD_NOTAS 5
#define TAM_NOME 50

int main()
{
	float notas[QTD_ALUNOS][QTD_NOTAS];
	char nomes[QTD_ALUNOS][TAM_NOME];
	float medias[QTD_ALUNOS];
	float mediaTurma = 0;
	int i, j;

	for (i = 0; i < QTD_ALUNOS; i++)
	{
		printf("Informe um nome: ");
		scanf(" %[^\n]s", &nomes[i]);

		float mediaDoAluno = 0;

		for (j = 0; j < QTD_NOTAS; j++)
		{
			printf("Informe a %da nota: ", j + 1);
			scanf("%f", &notas[i][j]);
			mediaDoAluno += notas[i][j];
		}

		mediaTurma += mediaDoAluno;
		mediaDoAluno /= QTD_NOTAS;
		medias[i] = mediaDoAluno;
	}

	for (i = 0; i < QTD_ALUNOS; i++)
	{
		printf("Nome: %s -> ", nomes[i]);
		printf("Media: %.2f -> ", medias[i]);
		printf("Situacao: ");
		
		if (medias[i] >= 7)
			printf("APROVADO!");
		else if (medias[i] >= 5)
			printf("EXAME!");
		else
			printf("REPROVADO!");
	
		printf("\n");
	}

	mediaTurma /= QTD_ALUNOS;

	printf("Media da turma: %.2f\n", mediaTurma);

	return 0;
}