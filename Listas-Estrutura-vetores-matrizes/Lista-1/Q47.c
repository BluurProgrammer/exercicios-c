#include <stdio.h>

int main()
{
	int tamVet, i;

	printf("Informe o tamanho dos vetores: ");
	scanf("%d", &tamVet);

	int vetorA[tamVet], vetorB[tamVet], vetorSoma[tamVet];

	for (i = 0; i < tamVet; i++)
	{
		printf("Informe um valor para o vetor A: ");
		scanf("%d", &vetorA[i]);
		printf("Informe um valor para o vetor B: ");
		scanf("%d", &vetorB[i]);
		vetorSoma[i] = vetorA[i] + vetorB[i];
	}

	puts("Vetor soma");
	
	for(i=0; i < tamVet; i++)
		printf("%d\n", vetorSoma[i]);
	
	return 0;
}