#include <stdio.h>
#define TOTAL_PESSOAS 4

int main()
{
     int idade, i, qtdPeso1a10Anos = 0, qtdPeso11a20Anos = 0, qtdPeso21a30Anos = 0, qtdPesoMaior30Anos = 0;
     float peso, mdPeso1a10Anos = 0, mdPeso11a20Anos = 0, mdPeso21a30Anos = 0, mdPesoMaior30Anos = 0;

     for (i = 0; i < TOTAL_PESSOAS; i++)
     {
		printf("Informe sua idade: ");
		scanf(" %d", &idade);
		printf("Informe seu peso: ");
		scanf(" %f", &peso);

		if (idade >= 1 && idade <= 10)
		{
		    qtdPeso1a10Anos++;
			mdPeso1a10Anos += peso;
		}
		else if (idade >= 11 && idade <= 20)
		{
			qtdPeso11a20Anos++;
			mdPeso11a20Anos += peso;
		}
		else if (idade >= 21 && idade <= 30)
		{
			qtdPeso21a30Anos++;
			mdPeso21a30Anos += peso;
		}
		else
		{
			qtdPesoMaior30Anos++;
			mdPesoMaior30Anos += peso;
		}
    }

    mdPeso1a10Anos /= qtdPeso1a10Anos;
    mdPeso11a20Anos /= qtdPeso11a20Anos;
    mdPeso21a30Anos /= qtdPeso21a30Anos;
    mdPesoMaior30Anos /= qtdPesoMaior30Anos;

    printf("A media de peso entre 1 a 10 anos -> %.2f\n", mdPeso1a10Anos);
    printf("A media de peso entre 11 a 20 anos -> %.2f\n", mdPeso11a20Anos);
    printf("A media de peso entre 21 a 30 anos -> %.2f\n", mdPeso21a30Anos);
    printf("A media de peso maior que 30 anos -> %.2f", mdPesoMaior30Anos);
	return 0;
}
