#include <stdio.h>

int main(){
	
	int input, i;
	float soma = 0;
	
	puts("Informe um valor");
	scanf(" %d", &input);
	
	for (i = 1; i <= input; i++)
		soma +=  1.0/i;
	
	printf("total: %.2f", soma);

	return 0;
}