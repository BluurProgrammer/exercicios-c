#include <stdio.h>
#define QUALTIDADE_PESSOAS 15

int main()
{
    int i;
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;

    int idade;
    float percenPrimeiraFaixa, percenUltimaFaixa;
	
    for ( i = 0; i < QUALTIDADE_PESSOAS; i++)
    {
        printf("Informe sua idade: ");
		scanf(" %d", &idade);
	
		if (idade <= 15)
	    	faixa1++;
		else if (idade >= 16 && idade <= 30)
	    	faixa2++;
		else if (idade >= 31 && idade <= 45)
	    	faixa3++;
		else if (idade >= 46 && idade <= 60)
	    	faixa4++;
		else
	    	faixa5++;
    }
	
    puts("A quantidade de pessoas em cada faixa etaria");
    printf("Faixa 1 - quantidade %d \n", faixa1);
    printf("Faixa 2 - quantidade %d \n", faixa2);
    printf("Faixa 3 - quantidade %d \n", faixa3);
    printf("Faixa 4 - quantidade %d \n", faixa4);
    printf("Faixa 5 - quantidade %d \n", faixa5);

    percenPrimeiraFaixa = (float) faixa1 / QUALTIDADE_PESSOAS * 100.0;
    percenUltimaFaixa = (float) faixa5 / QUALTIDADE_PESSOAS * 100.0;
	
    printf("\nPercentual primeira faixa etaria em relacao ao total de pessoas %.2f%%", percenPrimeiraFaixa);	
    printf("\nPercentual ultima faixa etaria em relacao ao total de pessoas %.2f%%", percenUltimaFaixa);
	
    return 0;
}
