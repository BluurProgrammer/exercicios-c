#include <stdio.h>
#define AUMENTO_VENDAS 26

int main()
{
     float i;
     int ingressosVendidos = 94;
	
     printf("Tabela de precos\n");
     printf("Valor Ingresso \t | Quantidade venda \t | Lucro \n");
	
    for (i = 5; i >= 1; i -= 0.50)
    {
		printf("R$ %.2f \t", i);
		ingressosVendidos += AUMENTO_VENDAS;
		printf("\t%d", ingressosVendidos);
		printf("\t\tR$ %.2f\n", i * ingressosVendidos);
    }
    
    return 0;
}
