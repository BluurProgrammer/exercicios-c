#include <stdio.h>
#define TOTAL_ALUNOS 10

int main()
{
    int nMatricula, frequencia, i, totReprovadosNota = 0, totReprovadosFreq = 0, totReprovados;
    float n1, n2, n3,nFinal, maiorNota, menorNota, percentReproFreq; 

    for (i = 0; i < TOTAL_ALUNOS; i++)
    {
		printf("Informe sua matricula: ");
		scanf(" %d", &nMatricula);
		printf("Informe as 3 notas: ");
		scanf(" %f %f %f", &n1, &n2, &n3);
		printf("Informe sua frequencia (em aulas): ");
		scanf(" %d", &frequencia);

		printf("Processando...\n");

		printf("Sua matricula: %d\n", nMatricula);
		nFinal = (n1 + n2 + n3) / 3.0;

		if (i == 0)
		{
		     maiorNota = nFinal;
		     menorNota = nFinal;
		}

		if (nFinal > maiorNota)	
		    maiorNota = nFinal;
		if (nFinal < menorNota)
		    menorNota = nFinal;

		printf("Sua nota final: %.2f\n", nFinal);
		printf("Status de aprovacao:");
			
		if (nFinal >= 6.0)
		{
			if (frequencia >= 40)
			    printf(" APROVADO\n");
			else
			{
			    printf(" REPROVADO POR FALTA FREQUENCIA\n");
			    totReprovadosFreq++;
			}
		}
		else
		{
			printf(" REPROVADO POR FALTA DE NOTA\n");
			totReprovadosNota++;
		}
    }

    totReprovados = totReprovadosNota + totReprovadosFreq;

	percentReproFreq = (float) totReprovadosFreq / totReprovados * 100.0;

	printf("Maior nota: %.2f\n", maiorNota);
	printf("Menor nota: %.2f\n", menorNota);
	printf("Total de alunos reprovados %d\n", totReprovados);
	printf("Percentual de alunos reprovados por falta de frequencia: %.2f%%\n", percentReproFreq);

	return 0;
}