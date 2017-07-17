#include <stdio.h>
#include <string.h>
#define TAM_FRASE 50

int main()
{
	char frase[TAM_FRASE];
	int i, j;

	printf("Informe um frase: ");
	scanf("%[^\n]s", &frase);
	
    for(i = 0; i < strlen(frase); i++)
    {
		if (frase[i] == ' ')
		{
			for(j = i; j < strlen(frase); j++)
			{
				frase[j] = frase[ j + 1];
				i = 0;
			} 
		}
	}

	printf("%s", frase);

	return 0;
}