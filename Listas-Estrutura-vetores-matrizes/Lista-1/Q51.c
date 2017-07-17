#include <stdio.h>
#define TAM 5

int main()
{
	int vetor[TAM];
	int i, valor;
	
	for (i = 0; i < TAM; i++)
	{
		printf("Informe um valor: ");
		scanf("%d", &valor);
		
		vetor[i] = (valor < 0) ? 0 : valor;
	}

	for (i = 0; i < TAM; i++)
		printf("%d\n", vetor[i]);
	
	return 0;
}