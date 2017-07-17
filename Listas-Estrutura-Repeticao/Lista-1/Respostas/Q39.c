#include <stdio.h>

int main()
{
    char tipo;
    int codigo;
    float investimento;

    while (1)
    {
		puts("    TIPO    |       DESCRICAO        | RENDIMENTO MENSAL");
		puts("--------------------------------------------------------");
		puts("     1      |   Poupanca             |     1,5%");
		puts("     2      |   Poupanca plus        |       2%");
		puts("     3      |   Fundos de renda fixa |       4%");
		printf("Informe o tipo: ");
		scanf(" %d", &tipo);

		printf("Informe seu codigo: ");
		scanf(" %d", &codigo);

		if (codigo <= 0)
		{
			puts("Saindo...");
			break;
		}

		printf("Informe um valor de investimento: ");
		scanf(" %f", &investimento);

		switch (tipo)
		{
			case 1: investimento *= 1.5; break;
			case 2: investimento *= 2.0; break;
			case 3: investimento *= 4.0; break;
		}

		printf("\nTipo | %d | o rendimento mensal de %.2f\n\n", investimento);
	}

	return 0;
}
