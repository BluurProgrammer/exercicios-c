#include <stdio.h>
#define TOTAL_ENTREVISTADOS 5

int main()
{
	char sexo, resp;
	int i, totalRespSim = 0, totalRespNao = 0, totalMulheresSim = 0, totalHomensNao = 0, totalHomens = 0;
	float percentNaoHomens;

	for (i = 0; i < TOTAL_ENTREVISTADOS; i++)
	{
		printf("Informe seu sexo [f/m]: ");
		scanf(" %c", &sexo);
		printf("Informe [s/n] para o novo produto: ");
		scanf(" %c", &resp);

		if (resp == 's')
			totalRespSim++;
		else if (resp == 'n')
			totalRespNao++;
		if (sexo == 'f')
			totalMulheresSim++;
		else if (sexo == 'm')
		{
			totalHomens++;

			if (resp == 'n')
			   totalHomensNao++;
		}
	}
	
	printf("%d %d\n", totalHomensNao, totalHomens);

	percentNaoHomens = (float) totalHomensNao / totalHomens * 100.0;

	printf("Total Respostas SIM %d\n", totalRespSim);
	printf("Total Respostas NAO %d\n", totalRespNao);
	printf("Total Respostas SIM (APENAS MULHERES) %d\n", totalMulheresSim);
	printf("Percentual Respostas NAO entre todos os homens %.2f%%\n", percentNaoHomens);

	return 0;
}
