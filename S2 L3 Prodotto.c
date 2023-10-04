#include <stdio.h>

int main()
{
    int a, b, prodotto;
    printf("Prodotto tra due numeri \n");
    printf("Inserisci il valore del primo numero: ");
    scanf("%d", &a);
     printf("Inserisci il valore del secondo numero: ");
    scanf("%d", &b);
    prodotto = a*b;
    printf("Il prodotto dei due numeri è: %d", prodotto);

    return 0;
}
