#include <stdio.h>
#include <locale.h>
int main(void)
{
    int n, maior, menor;
    printf("fala ai um numero : ");
    scanf_s("%d", &n);
      maior = n;
      menor = n;
     while (n != 0) {
       if (n > maior)
            maior = n;
       if (n < menor)
            menor = n;
    printf("fala ai um numero: ");
    scanf_s("%d", &n);
}
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return 0;
}