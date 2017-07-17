#include <stdio.h>

int main()
{
    int codigoVoto, totCandidato1 = 0, totCandidato2 = 0, totCandidato3 = 0, 
    		totCandidato4 = 0,	totVotosNulos = 0, totVotosEmBranco = 0, totVotos = 0;

    float percentVotosNulos, percentVotosEmBranco;

    puts("Informe 0 para sair!");

    while(1)
    {
		puts("1 a 4 para votar em um candidato");
		puts("5 voto nulo");
		puts("6 voto em branco");
		printf("Sua opcao:");
		scanf(" %d", &codigoVoto);

		if (codigoVoto == 0)
		{
			puts("Finalizando...");
			break;
		}

		if (codigoVoto >= 1 && codigoVoto <= 4)
		{
		     totVotos++;

		    switch(codigoVoto)
		    {
				case 1: totCandidato1++; break;
				case 2: totCandidato2++; break;
				case 3: totCandidato3++; break;
				case 4: totCandidato4++; break;
		    }

		}
		else if (codigoVoto == 5)
		    totVotosNulos++;		
		else if (codigoVoto == 6)
			totVotosEmBranco++;
		else	            
		    puts("opcao invalida!\n");
    }

    percentVotosNulos = (float) totVotosNulos / totVotos *     100.0;
    percentVotosEmBranco = (float) totVotosEmBranco /  totVotos * 100.0;

    printf("Total de votos candidato 1 -> %d\n", totCandidato1);
    printf("Total de votos candidato 2 -> %d\n", totCandidato2);
    printf("Total de votos candidato 3 -> %d\n", totCandidato3);
    printf("Total de votos candidato 4 -> %d\n", totCandidato4);
    printf("Total de votos nulos -> %d\n", totVotosNulos);
    printf("Total de votos em branco -> %d\n", totVotosEmBranco);
    printf("Percentual de votos nulos -> %.2f\n", percentVotosNulos);
    printf("Percentual de votos em branco -> %.2f\n", percentVotosEmBranco);

	return 0;
}
