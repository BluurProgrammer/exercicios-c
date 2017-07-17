#include <stdio.h>

int main()
{
	int valor, resultado = 1;
	puts("Calcular o fatorial de: ");
	scanf("%d", &valor);
	
	while (valor != 0) 
		resultado *= valor--;

	printf("Resultado: %d", resultado);
	
	return 0;
}