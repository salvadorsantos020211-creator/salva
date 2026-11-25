#include<stdio.h>
int main()
{
	int idade[30], i, contador = 0;
	float altura[30], soma = 0, media;
	for (i = 0; i < 30; i++)
	{
		printf("Digite a idade de aluno %d: ", i + 1);
		scanf_s("%d", &idade[i]);
		printf("diz a altura de aluno %d: ", i + 1);
		scanf_s("%f", &altura[i]);
		soma += altura[i];
	}
	media = soma / 30;
	for (i = 0; i < 30; i++)
	{
		if (idade[i] > 13 && altura[i] < media)
		{
			printf("Aluno %d tem idade maior que 13 e altura menor que a media\n", i);
			contador++;
		}
	}
	printf("O numero de alunos com idade maior que 13 e altura menor que a media e: %d\n", contador);
	printf("A media das alturas e: %.2f\n", media);
	return 0;
}