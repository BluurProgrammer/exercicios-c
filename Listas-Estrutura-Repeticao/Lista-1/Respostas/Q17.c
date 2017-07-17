#include <stdio.h>

int main()
{
	float mdIdadeGrupo = 0, mdIdadesMulheres, mdIdadesHomens;
	int i, idade, totalHomens = 0, totalMulheres = 0;
	char sexo;
	
	for (i = 0; i < 7; i++)
	{
		printf("Informe sua idade: ");
		scanf(" %d", &idade);
		printf("Informe seu sexo [M/F]: ");
		scanf(" %c", &sexo);
		
		mdIdadeGrupo += idade;
		
		if (sexo == 'f' || sexo == 'F')
		{
			totalMulheres++;
			mdIdadesMulheres += idade;
		}
		else if (sexo == 'm' || sexo == 'M')
		{
			totalHomens++;
			mdIdadesHomens += idade;
		}
		else
		{
			puts("Valor informado invalido!");
			i--;
		}
	}
	
	mdIdadeGrupo /= 7.0;
	mdIdadesMulheres /= totalMulheres == 0 ? 1 : totalMulheres;
	mdIdadesHomens /= totalHomens == 0 ? 1 : totalHomens;
	
	printf("Media do grupo: %.2f\n", mdIdadeGrupo);
	printf("Media idade mulheres %.2f\n", mdIdadesMulheres);
	printf("Media idade homens %.2f", mdIdadesHomens);
	
	return 0;
}