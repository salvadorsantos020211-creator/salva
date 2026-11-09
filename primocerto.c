#include <stdio.h>
int main(void)
{
    int numero, i, primo = 1;
    printf("diz me um numero: ");
    scanf_s("%d", &numero);
    if (numero < 2)
{
        primo = 0;
}
    else
{
    for (i = 2; i <= numero / i; i++)
{
    if (numero % i == 0)
{
           primo = 0;
}
}
}
    if (primo == 1)
{
        printf("esse numero %d e primo rei.\n", numero);
}
    else
{
        printf("obviamente %d nao e primo.\n", numero);
}
    return 0;
}