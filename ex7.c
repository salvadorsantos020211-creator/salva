#include <stdio.h>
int main(void)
{
	int numero = 0;
	printf("ler o numero");
	scanf_s("%d", & numero);

	if (numero == 0)
	{
		printf("escreve um numero %d\n", numero);
		printf("fim\n");
	}
	else if (numero > 0)
	{
		printf("o numero %d é positivo.\n", numero);
		printf("fim\n");
	}
	else
	{
		printf("O numero %d é negativo.\n", numero);
		printf("fim\n");
	}
	return 0;
}