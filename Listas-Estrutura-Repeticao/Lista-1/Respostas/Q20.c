#include <stdio.h>

int main()
{
    int valor, maior, menor;
    char primeiraVez = 1;

    while (1)
    {
		printf("Informe um valor [0 para sair]: ");
		scanf(" %d", &valor);
			
		if (valor < 0)
		{
		    puts("Apenas valores positivos!!!");
		    continue;
		}

		if (primeiraVez)
		{
		    maior = valor;
		    menor = valor;
		    primeiraVez = 0;
		}

		if (valor == 0)
		{
		    printf("finalizando...\n");
		    break;
		}

		if (valor > maior)
		    maior = valor;

		if (valor < menor)
		    menor = valor;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
