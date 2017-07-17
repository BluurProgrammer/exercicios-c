#include <stdio.h>

int main(void)
{
	int i, j;
    printf("Tabuadas de 1 a 10.\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{		
			printf("%d x %d = %d\t", i , j, i * j);
	   		printf("%d + %d = %d\t", i , j, i + j);
	   		printf("%d / %d = %d\t", i*j, i, ((i*j)/i));
	   		printf("%d - %d = %d\n", i+j , i, (i + j) - i);
		}

		printf("\n");
	}
	
	return 0;
}