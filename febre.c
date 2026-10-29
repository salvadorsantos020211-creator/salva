#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float tempi, tempf;
	printf("Diz a temperatura inicial");
	scanf_s("%f", &tempi);
	printf("diz a temperatura final");
	scanf_s("%f)", &tempf);
	if (tempi < 35.5 && tempf < 35.5) {
		printf("Anfibio");
	}
	else if ((tempi > 35.5 && tempf < 37) && (tempf > 35.5 && tempf < 37)) {
		printf("Temperatura normal");
	}
	else
	{
		printf("Febre");
		if (tempi > tempf)
			printf("Temperatura baixou");
		else if (tempi < tempf)
			printf("Temperatura aumentou");
		else if
			(printf("A temperatura manteve"))
	}
