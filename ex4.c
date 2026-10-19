#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3;
	printf("diz me um numero pt");
	scanf_s("%i", &p1);
	printf("diz o segundo numero");
	scanf_s("%i", &p2);
	printf("diz o terceiro numero");
	scanf_s("%i", &p3);
	if (p1 > p2 && p1 > p3)
	{
		printf("o maior numero é o primeiro");
	}
	else if (p2 > p3)
	{
		printf("o maior numero é o segundo");
	}
	return 0;
}