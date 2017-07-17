#include <stdio.h>
#define TOTAL_PESSOAS 7

int main()
{
    int qtdPessoas90Quilos = 0, idade, i;
    float mdIdades = 0, peso;

    for (i = 0; i < TOTAL_PESSOAS; i++)
    {
        printf("Informe sua idade: ");
        scanf(" %d", &idade);
        printf("Informe seu peso: ");
        scanf(" %f", &peso);

        if (peso > 90.0)
	        qtdPessoas90Quilos++;

	    mdIdades += idade;
    }

    mdIdades /= TOTAL_PESSOAS;

    printf("A quantidade de pessoas com mais de 90 quilos -> %d\n", qtdPessoas90Quilos);
    printf("A media das idades das %d pessoas -> %.2f\n", TOTAL_PESSOAS, mdIdades);

    return 0;
}
