#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int ut, contador = 0;
	srand(time(NULL));
	int num = rand() % 1000 + 1;
	do
	{
		printf("fala um numero\n");
		scanf_s("%d", &ut);
		if (ut == num)
			printf("acertou parceiro\n");
		else if (ut < num)
			printf("Numero maior\n");
		else
			printf("numero menor\n");
	} while (num != ut);
	return 0;
}