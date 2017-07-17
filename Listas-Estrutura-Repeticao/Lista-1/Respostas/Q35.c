#include <stdio.h>

int main()
{
    int valor, somaPositivos = 0, somaNegativos = 0, totalSomaParciais;

    puts("Digite 0 para finalizar...");
    
    while(1)
    {
		printf("Informe um valor: ");
		scanf(" %d", &valor);

		if (valor > 0)
		    somaPositivos += valor;
		else if (valor < 0)
		    somaNegativos += valor;
		else
		{
		    puts("Finalizando...");
		    break;
		}
     }

     totalSomaParciais = somaPositivos + somaNegativos;

     printf("Soma total dos positivos: %d\n", somaPositivos);
     printf("Soma total dos negativos: %d\n", somaNegativos);
     printf("Soma das parciais: %d\n", totalSomaParciais);

     return 0;
}
