#include <stdio.h>
#define DESCONTO_AVISTA 0.20

int main()
{
    float valorCarro, aumento, acrescimo, valorParcela, aVista;
    int i;

    printf("Informe o valor do  carro: ");
    scanf(" %f", &valorCarro);
    printf("Preco final \t| Quantidade Parcelas \t| Valor da parcela\n");

	for (i  =  6;  i  <=  60; i += 6)
	{
	    acrescimo = i / 2.0 / 100.0;
			
	    aumento = (valorCarro * acrescimo) + valorCarro;
	    valorParcela = aumento / i;
	    aVista = valorCarro - (valorCarro * DESCONTO_AVISTA);

	    printf("+ %0.2f%% = %.2f   %dx    %.2f\n", acrescimo, aumento, i, valorParcela);
	    printf("\n");
	}

	printf("Preco final (a vista 20%% desconto) : %.2f\n", aVista);
	return 0;
}
