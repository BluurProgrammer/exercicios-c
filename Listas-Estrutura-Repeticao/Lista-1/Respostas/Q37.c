#include <stdio.h>

int main()
{
     int op;
     float n1, n2, resultado;

     while (1)
     {
		puts("1 - adicao");
		puts("2 - subtracao");
		puts("3 - multiplicao");
		puts("4 - divisao");
		puts("5 - sair");
		printf("Sua escolha: ");
		scanf(" %d", &op);

		if (op == 5)
		{
			puts("Finalizando...");
			break;
		}

		if (op >= 1 && op <= 4)
		{
			printf("Informe dois valores: ");
			scanf(" %f %f", &n1, &n2);

			switch(op)
			{
				case 1: resultado = n1 + n2; break;
				case 2: resultado = n1 - n2; break;
				case 3: resultado = n1 * n2; break;
				case 4: resultado = n1 / n2; break;
			}
		}
		else
		{
			puts("opcao invalida!!!");
			continue;
		}

		printf("Resultado: %.1f\n", resultado);
    }

    return 0;
}

