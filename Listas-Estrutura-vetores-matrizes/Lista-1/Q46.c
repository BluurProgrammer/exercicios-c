#include <stdio.h>

int main()
{
	int vetor[20], i;

	for (i = 0; i < 20; i++)
	{
		printf("Informe um numero: ");
		scanf("%d", &vetor[i]);
	}

	puts("Ordem inversa");

	// o laco tem q testar uma flag da ULA
	// i == 0 ? i-- : continua;
	
	for (i = 20; i--; )
		printf("%d ", vetor[i]);
	
	return 0;
}