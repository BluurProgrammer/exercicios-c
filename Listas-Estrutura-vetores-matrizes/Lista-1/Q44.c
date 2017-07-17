#include <stdio.h>

int main()
{
	float vetor[5];
	int i, op;

	for (i = 0; i < 5; i++)
	{
		printf("Informe um valor real: ");
		scanf("%f", &vetor[i]);
		printf("---> %.2f\n", vetor[i]);
	}

	puts("Informe:\n 0 - para sair | 1 - imprimir ordem inversa\n");
	scanf("%d", &op);
	
	if (op == 0)
	 	puts("finalizando....");
	else
	{
		puts("Ordem inversa");
		
		for (i = 5; i--;)
			printf("%.2f ", vetor[i]);
	}

	return 0;
}