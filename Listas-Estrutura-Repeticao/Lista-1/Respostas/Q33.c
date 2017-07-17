#include <stdio.h>

int main()
{
    char op;
    float n1, n2, n3, resultado, peso1, peso2,peso3;

    while(1)
    {
		puts("1 - Media aritmetica");
		puts("2 - Media ponderada");
		puts("3 - sair");
		scanf(" %d", &op);

		if (op == 1)
		{
		    puts("Calculando media aritmetica...\n");
		    printf("Informe 3 valores (notas): ");
		    scanf(" %f %f %f", &n1, &n2, &n3);

		    resultado = (n1 + n2 + n3) / 3;
		}
		else if(op == 2)
		{
		    puts("Calculando media ponderada...\n");
		    printf("Informe 3 valores (notas): ");
		    scanf(" %f %f %f", &n1, &n2, &n3);
		    printf("Informe o peso de cada valor (notas): ");
		    scanf(" %f %f %f", &peso1, &peso2, &peso3);

		    resultado = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3)) / (peso1+peso2+peso3);
		}
		else if (op == 3)
		{
		    puts("Finalizando...");
		    break;
		}
		else
		{
		    puts("Opcao invalida!!!");
		    continue;
		}

		printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}

