#include<stdio.h>
int main(void)
{
	char conta, resultado;
	int nmr1, nmr2;
	printf("Queres fazer que operação?");
	scanf_s("%c", &conta);
	printf("Diz o primeiro numero \n");
	scanf_s("%i", &nmr1);
	printf("Diz o segundo numero\n");
	scanf_s("%i", &nmr2);
	switch (conta) {
		
	case 1:
		
			resultado = nmr1 + nmr2;
			break;

	case 2:
		resultado = nmr1 - nmr2;
		break;

	case 3:
        resultado = nmr1 / nmr2;
		break;
	case 4:
		resultado = nmr1 * nmr2;
		break;
	default:
		printf("n existe");
    }
	return 0;
}