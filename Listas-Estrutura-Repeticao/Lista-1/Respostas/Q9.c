#include <stdio.h>

int main()
{
	
	int i, tabuada;
	
	puts("Informe a tabuada do numero: ");
	scanf("%d", &tabuada);
	
	printf("Tabuada do numero %d\n", tabuada);
	
	for (i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", tabuada, i, tabuada * i);
	
	return 0;
}