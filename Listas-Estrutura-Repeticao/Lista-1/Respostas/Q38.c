#include <stdio.h>

int main()
{
    int op, meses;
    float salario;

    while(1)
    {
		puts("1 - Novo salario");
		puts("2 - Ferias");
		puts("3 - Decimo terceiro");
		puts("4 - Sair");
		printf("Sua escolha: ");
		scanf(" %d", &op);

		if (op == 4)
		{
			puts("Saindo...");
			break;
		}
		else if (op < 0 || op > 4)
		{
			puts("Opcao invalida!");
			continue;
		}

		printf("%d) Informe o salario: ", op);
		scanf(" %f", &salario);

		if (op == 1)
		{
			if (salario < 350.0)
				salario *= 1.15;
			else if (salario >= 350.0 && salario < 600.0)
				salario *= 1.10;
			else
				salario *= 1.05;
		}
		else if (op == 2)
			salario = salario + (salario / 3.0);
		else if (op == 3)
		{
			printf("Informe o numero de meses trabalhados: ");
			scanf(" %d", &meses);

			if (meses > 12)
			{
			   puts("No maximo 12 meses!!! Tente novamente...");
				continue;
			}

			salario = salario * meses / 12.0;
		}	

		printf("Novo salario: %.2f\n", salario);
    }

    return 0;
}

