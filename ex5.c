#include <stdio.h>
int main(void)
{
	int quantidade, soma, parcela;
	float parcela, soma;
	
	do
	{
		while ("soma" <= 1000);
		printf("parcela %d: ", quantidade + 1);
		scanf_s("%f", &parcela);
		soma += parcela;
		quantidade++;
	} while (soma <= 1000);
		{
			printf("/n Total acumulado: %.2f", soma);
			printf("/n quantidade parcelas: %d", quantidade);
			printf("/nmedia: %.2f/n", soma / quantidade);
		}
		return 0;
}