/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
