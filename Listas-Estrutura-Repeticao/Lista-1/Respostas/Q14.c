#include <stdio.h>
#define TOTAL_PESSOAS 3

int main()
{
	int idade, i, qtdPessoas50Anos = 0, qtdAltura1_50 = 0, qtdOlhosAzuis = 0, qtdRuivas = 0;
	char corOlhos, corCabelos;
	float peso, altura,mdIdadeAltura1_50 = 0, percentOlhosAzuis = 0;
		
	for (i = 0; i < TOTAL_PESSOAS; i++)
	{
		printf("Informe sua idade: ");
		scanf(" %d", &idade);

		printf("Informe seu peso: ");
		scanf(" %f", &peso);

		printf("Informe sua altura: ");
		scanf(" %f", &altura);

		printf("Informe a cor dos seus olhos\n");
		printf("A - Azul | P - Preto | V - Verde | C - Castanho: ");
		scanf(" %c", &corOlhos);

		printf("Informa a cor dos seus cabelos\n");
		printf("P - Preto | C - Castanho | L - Loiro | R - Ruivo: ");
		scanf(" %c", &corCabelos);

		if (idade > 50 && peso < 60.0)
		    qtdPessoas50Anos++;

		if (altura < 1.50)
		{
		    qtdAltura1_50++;
		    mdIdadeAltura1_50 += idade;
		}

		if (corOlhos == 'a')
		   qtdOlhosAzuis++;

		if (corCabelos == 'r' && corOlhos != 'a')
		   qtdRuivas++;
	}

	mdIdadeAltura1_50 /= qtdAltura1_50;
	percentOlhosAzuis = qtdOlhosAzuis / TOTAL_PESSOAS * 100.0;

	printf("Qtd Superior a 50 anos e inferior a 60 quilos -> %d\n", qtdPessoas50Anos);
	printf("Md das idades com altura inferior a 1.50 -> %.2f\n", mdIdadeAltura1_50);
	printf("Percentual olhos azuis -> %.2f\n", percentOlhosAzuis);
	printf("Qtd de ruivas que não tem olhos azuis -> %d\n", qtdRuivas);

    return 0;
}
