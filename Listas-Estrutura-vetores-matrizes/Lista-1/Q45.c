#include <stdio.h>
#include <string.h>
#define TOTAL_PESSOAS 5
#define TAM_NOME 50

int main()
{
	char pessoas[TOTAL_PESSOAS][TAM_NOME];
	char nomePesquisa[TAM_NOME];

	int i, achou = 0;

	for (i = 0; i < TOTAL_PESSOAS; i++)
	{
		printf("Informe um nome: ");
		scanf(" %[^\n]s", &pessoas[i]);
	}

	printf("Informe um nome para buscar: ");
	scanf(" %s", &nomePesquisa);
	printf("Nome a buscar: %s\n", nomePesquisa);

	for (i = 0; i < TOTAL_PESSOAS; i++)
	{
		if (strcmp(pessoas[i], nomePesquisa) == 0)
		{
			achou = 1;
			break;
		}
	}

	if (achou == 1)
		puts("ACHEI!");
	else
		puts("NAO ACHEI!");

	return 0;
}