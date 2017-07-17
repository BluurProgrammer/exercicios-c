#include <stdio.h>
#define TOTAL_ESPECTADORES 3

int main()
{
    char op;
    int qtdRespBom = 0, qtdRespOtimo = 0, qtdRespRegular = 0,idade, i;
    float mdIdadeRespOtimo = 0, porcentRespBom;

    for (i = 0; i < TOTAL_ESPECTADORES; i++)
    {
		printf("Informe sua idade: ");
		scanf(" %d", &idade);
		printf("Informe sua opiniao em relacao ao filme\n");
		printf("3 - Otimo | 2 - Bom | 1 - Regular\n");
		scanf(" %c", &op);

		if (op == '3')
		{
		    mdIdadeRespOtimo += idade;
		    qtdRespOtimo++;
		}
		else if (op == '2')
		    qtdRespBom++;
		else if (op == '1')
		    qtdRespRegular++;
		else
		{
			printf("opcao invalida!\n\n");
			i--;
		}
    }

    mdIdadeRespOtimo /= qtdRespOtimo;
    porcentRespBom = (float) qtdRespBom / TOTAL_ESPECTADORES * 100.0;

    printf("A media das idades que responderam otimo -> %0.2f\n", mdIdadeRespOtimo);
    printf("A quantidade de pessoas que respondeu regular -> %d\n", qtdRespRegular);
    printf("Percentagem de pessoas que respondeu bom entre todos os espectadores -> %.2f\n", porcentRespBom);
	
   return 0;
}

