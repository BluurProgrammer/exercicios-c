#include <stdio.h>

int main()
{
	int i, qtd30e90 = 0, valor;
	
	for(i=0; i < 10;i++)
	{
		printf("Informe um valor: ");
		scanf(" %d", &valor);
		
		if (valor >= 30 && valor <= 90)
			qtd30e90++;
	}
	
	printf("Quantidade de valores entre 30 e 90 e %d", qtd30e90);
	return 0;
}