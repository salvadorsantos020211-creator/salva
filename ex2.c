#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
		int kmi, kmf, l;
		float valor;
		printf("diz os kms iniciais");
			scanf_s ("%d", &kmi);
			printf("diz os kilometros finais");
			scanf_s ("&d", &kmf);
			printf("diz a quantidade de litros da gasolina que foram gastos aos 100km");
			scanf_s ("d%", &l);
			valor = l * 100 / (kmf - kmi);
			if (valor>5)
			{
				printf("És rico");
			}
			else
			{
				printf("Escolheste bem esse toyota");
				return 0;
			}

