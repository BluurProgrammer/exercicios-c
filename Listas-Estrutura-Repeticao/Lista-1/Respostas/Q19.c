#include <stdio.h>

int main()
{
	int idade, quantidade = 0;
	float mdIdades = 0;

	while(1)
	{
		printf("Informe uma idade (0 para sair): ");
		scanf(" %d", &idade);
		
		if (idade == 0)
		{
		    puts("Finalizando...");
		    break;
		}

		mdIdades += idade;
		quantidade++;
	}

	mdIdades /= quantidade;
	printf("A media das idades e -> %.2f\n", mdIdades);

	return 0;
}

