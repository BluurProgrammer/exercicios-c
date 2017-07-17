#include <stdio.h>

int main(void)
{
	int min = 1000;
	int max = 2000;

	while (min < max)
	{
		if (min % 11 == 5)
			printf("%d\n", min);
				
		min++;
	}

	return 0;
}