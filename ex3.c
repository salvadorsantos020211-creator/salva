#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("diz aí um número");
	scanf_s("%f", &nota);
	if (nota <= 9.5)
	{
		printf("voçê é burro");
	}
	else
	{
		float nota;
		scanf_s("%f", &nota);
			if (nota >= 9.5)
				printf("voçê é inteligente");
	}

	return 0;
}