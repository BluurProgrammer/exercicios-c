#include <stdio.h>
#define TOTAL_TRANSACOES 15

int main()
{
	char codigo;
	int i;
	float valorDaTranscao, valorTotalPrazo = 0, valorTotalAVista = 0, valorTotal = 0, primeiraPrestacao;
	
	for (i=0; i < TOTAL_TRANSACOES; i++){
		printf("\nRestam %d transacoes a serem informadas\n", TOTAL_TRANSACOES - i);
		printf("Informe o codigo de transacao | V a vista | P a prazo: ");
		scanf(" %c", &codigo);
		printf("Informe o valor da transacao: ");
		scanf(" %f", &valorDaTranscao);
		
		valorTotal += valorDaTranscao;
		
		if (codigo == 'v' || codigo == 'V')
			valorTotalAVista += valorDaTranscao;
		else if (codigo == 'p' || codigo == 'P'){
			primeiraPrestacao = valorDaTranscao / 3.0;
			printf("O valor da primeira prestacao sera R$ %.2f reais", primeiraPrestacao);
			valorTotalPrazo += valorDaTranscao;
		}
		else
		{
			puts("Codigo invalido! Repita novamente!\n");
			i--;
			continue;
		}
	}
	
	printf("Valor total das compras a vista R$ %.2f reais\n", valorTotalAVista);
	printf("Valor total das compras a prazo R$ %.2f reais\n", valorTotalPrazo);
	printf("Valor total das compras efetuadas R$ %.2f reais\n", valorTotal);

	return 0;
}