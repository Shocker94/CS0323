#include <stdio.h>

int main()
{
    int a=0, b=0, i=0;
    float media=0;
    printf("Media tra due numeri \n");
    printf("Inserisci il valore del primo numero: ");
    scanf("%d", &a);
    i++;
     printf("Inserisci il valore del secondo numero: ");
    scanf("%d", &b);
    i++;
    media = (float) (a+b)/i;
    printf("La media dei due numeri è: %f", media);

    return 0;
}
