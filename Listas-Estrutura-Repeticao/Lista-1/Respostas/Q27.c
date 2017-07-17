#include <stdio.h>

int main()
{
    int numeroCanal, audiencia, audienciaTot4 = 0, audienciaTot5 = 0, audienciaTot7 = 0, audienciaTot12 = 0, audienciaTot = 0;
    float porcentCanal4, porcentCanal5, porcentCanal7, porcentCanal12;

    while(1)
    {
		printf("Canais da pesquisa: 4, 5, 7, 12\n");
		printf("Informe o numero do canal (0 para sair): ");
		scanf(" %d", &numeroCanal);

		if (numeroCanal == 0)
		{
			puts("Saindo...");
			break;
		}
		else if (numeroCanal == 4 || numeroCanal == 5 || numeroCanal == 7 || numeroCanal == 12)
		{
			printf("Informe o numero de pessoas assistindo: ");
			scanf(" %d", &audiencia);
				
			audienciaTot += audiencia;

			switch (numeroCanal)
			{
				case 4: audienciaTot4 += audiencia; break;
				case 5: audienciaTot5 += audiencia; break;
				case 7: audienciaTot7 += audiencia; break;
				case 12: audienciaTot12 += audiencia; break;
			}
		}
		else
		    puts("Numero do canal invalido!\n");
	}

	porcentCanal4 = (float) audienciaTot4 / audienciaTot * 100.0;
	porcentCanal5 = (float) audienciaTot5 / audienciaTot * 100.0;
	porcentCanal7 = (float) audienciaTot7 / audienciaTot * 100.0;
	porcentCanal12 = (float) audienciaTot12 / audienciaTot * 100.0;

	printf("Percentagem de audiencia no canal 4: %.2f%%\n", porcentCanal4);
	printf("Percentagem de audiencia no canal 5: %.2f%%\n", porcentCanal5);
	printf("Percentagem de audiencia no canal 7: %.2f%%\n", porcentCanal7);
	printf("Percentagem de audiencia no canal 12: %.2f%%\n", porcentCanal12);
      
    return 0;
}
