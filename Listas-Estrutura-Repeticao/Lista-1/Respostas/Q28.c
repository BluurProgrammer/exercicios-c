#include <stdio.h>

int main()
{
     float salario, mdSalarioPopulacao = 0, maiorSalario, qtdSalario150 = 0, qtdTotPessoas = 0, percentSalario150;
     int qtdFilhos, primeiraVez = 1, mdQtdFilhos = 0;

     printf("Informe um valor negativo para sair...\n");
	
     while(1)
     {
		printf("Informe seu salario: ");
		scanf(" %f", &salario);

		if (salario < 0)
		{
			puts("Saindo...");
			break;
		}

		if (primeiraVez)
		{
			maiorSalario = salario;
			primeiraVez = 0;
		}

		printf("Informe a quantidade de filhos: ");
		scanf(" %d", &qtdFilhos);

		qtdTotPessoas++;
		mdSalarioPopulacao += salario;
		mdQtdFilhos += qtdFilhos;

		if (salario > maiorSalario)
	    	maiorSalario = salario;

		if (salario <= 150.0)
	   	 	qtdSalario150++;
    }

    mdSalarioPopulacao /= qtdTotPessoas;
    mdQtdFilhos /= qtdTotPessoas;

    percentSalario150 = (float) qtdSalario150 / qtdTotPessoas * 100.0;

    printf("Media salario da populacao: R$ %.2f%%\n",mdSalarioPopulacao);
    printf("Media quantidade filhos: %d\n", mdQtdFilhos);
    printf("O maior salario: R$ %.2f\n", maiorSalario);
    printf("Percentual de salario ate R$150.0: %.2f%%\n", percentSalario150);

	return 0;
}
