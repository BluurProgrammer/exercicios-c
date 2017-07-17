#include <stdio.h>
#define TOTAL_GRUPOS 5

int main()
{
    int a,b,c,d, aux, i, j;
     
    for (i = 0; i < TOTAL_GRUPOS; i++)
    {
		puts("Informe quatro valores");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("Ordem lida: %d %d %d %d\n", a,b,c,d);

		for (j = 0; j < 4; j++)
		{	
			if (a < b && b < c && c < d)			
				break;
				     
	      	if (a > b)
	      	{
				aux = a;
				a = b;
				b = aux;
	      	}

	     	if (b > c)
	      	{
	            aux = b;
				b = c;
				c = aux;
	      	}

	      	if (c > d)
	      	{
				aux = c;
				c = d;
				d = aux;
	     	}
		}

    	printf("Ordem crescente: %d %d %d %d\n", a,b,c,d);
		printf("Ordem decrescente: %d %d %d %d\n", d,c,b,a);
    }
    
    return 0;
}
