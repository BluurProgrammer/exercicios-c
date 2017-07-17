#include <stdio.h>

int main()
{
    int idade, qtdIdade50 = 0;
    float altura, mdAlturas = 0;

    puts("Informe uma idade menor ou igual a zero para finalizar!");

    while (1)
    {
		printf("Informe sua Idade: ");
		scanf(" %d", &idade);
		
		if (idade <= 0)
		{
		    puts("Finalizando...");
		    break;
		}

		printf("Informe sua altura: ");
		scanf(" %f", &altura);

		if (idade > 50)
		{
		    qtdIdade50++;
		    mdAlturas += altura;
		}
    }

    mdAlturas /= qtdIdade50;
    printf("A media de altura entre as pessoas com mais de 50 anos: %.2f\n", mdAlturas);

    return 0; 
}