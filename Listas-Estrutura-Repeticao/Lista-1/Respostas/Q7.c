#include <stdio.h>

int main()
{
	int i;
	int totalPessoas = 0;
	int idade;
	
	for (i = 0; i < 10; i++)
	{
		printf("Informe sua idade: ");
		scanf(" %d", &idade);
		
		if (idade >= 18)
			totalPessoas++;
	}
	
	printf("Total de pessoas maior ou igual a 18 anos: %d", totalPessoas);
	
	return 0;
}