#include <stdio.h>
int domanda1(int punteggio)
{
    int s; //scelta
    printf("Cavallo bianco di Napoleone\n");
    printf("1.Bianco\n");
    printf("2.Rosso\n");
    printf("3.Verde\n");
    scanf("%d", &s);
    if(s==1)
    {
        punteggio++;
        return punteggio;
    }
    else
    {
        printf("Risposta errata\n");
        return punteggio;
    }
}

int domanda2(int punteggio)
{
    int s; //scelta
    printf("Cavallo Rosso di Napoleone\n");
    printf("1.Bianco\n");
    printf("2.Rosso\n");
    printf("3.Verde\n");
    scanf("%d", &s);
    if(s==2)
    {
        punteggio++;
        return punteggio;
    }
    else
    {
        printf("Risposta errata\n");
        return punteggio;
    }
}

int domanda3(int punteggio)
{
    int s; //scelta
    printf("Cavallo Verde di Napoleone\n");
    printf("1.Bianco\n");
    printf("2.Rosso\n");
    printf("3.Verde\n");
    scanf("%d", &s);
    if(s==3)
    {
        punteggio++;
        return punteggio;
    }
    else
    {
        printf("Risposta errata\n");
        return punteggio;
    }
}

int main()
{
    int n;
    int scelta=1;
    int punteggio = 0;
    printf("Gioco a Quiz\n");
    while(scelta==1)
    {
        printf("1.Nuova partita\n");
        printf("0.Esci\n");
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            for(n=3;n>0;n--)
            {
                switch(n)
                {
                    case(1): punteggio = domanda1(punteggio);
                    printf("Punteggio:%d", punteggio);
                    break;
                    case(2): punteggio = domanda2(punteggio);
                    printf("Punteggio:%d", punteggio);
                    break;
                    case(3): punteggio = domanda3(punteggio);
                    printf("Punteggio:%d", punteggio);
                    break;
                }
                printf("\n");
            }
        }
        else
        {
            scelta=0;
        }
        printf("Vuoi giocare ancora?\n");
        printf("1.Si\n");
        printf("2.No\n");
        scanf("%d", &scelta);
        punteggio = 0;
    }
    return 0;
}