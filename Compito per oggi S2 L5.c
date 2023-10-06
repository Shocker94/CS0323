#include <stdio.h>

void print_menu();//stampa menu
int gioca_partita();//codice del gioco
char scelta_errata(char scelta);//controlla se la scelta nel menu è errata
int lunghezza(char a[]) // calcola la lunghezza della stringa
{
	int i;
	for(i = 0; a[i] != '\0'; ++i);
	return i;
}

int main()
{
    char scelta={'\0'};
    print_menu();
    scanf(" %c", &scelta);
    
    if(scelta == '0' && scelta !='A')
    {
        printf("Grazie per aver giocato, alla prossima\n");
        return 0;
    }
    else
    {
        scelta = scelta_errata(scelta);
    }
    while(scelta == 'A')
    {
        gioca_partita();
        print_menu();
        scanf(" %c", &scelta);
        scelta = scelta_errata(scelta);
    }
    return 0;
}

char scelta_errata(char scelta)
{
    while(scelta != 'A')
        {
            printf("Scelta errata\n");
            print_menu();
            scanf(" %c", &scelta);
        }
    return scelta;
}

void print_menu()
{
    printf("Start menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci la lettera corrispondente alla tua scelta:");
}


int gioca_partita()
{
    int p; //variabile che contiene il numero dei caratteri
    int punteggio = 0;
    char nome[20]={'\0'};
    char risposta1, risposta2;
    printf("Inserisci il tuo nome:\n");
    do
    {
        scanf(" %s", nome);
        p = lunghezza(nome);
        if(p>20)
        {
            printf("Nome troppo lungo. Inseriscilo un nuovo nome\n");
        }
    }
    while(p>20);
    
    printf("Domanda numero 1:\n");
    printf("Di che colore era il cavallo Bianco di Napoleone?\n");
    printf("A >> Bianco\nB >> Nero\nC >> Verde\n");
    do
    {
        printf("Inserisci la Risposta:");
        scanf(" %c", &risposta1);
        if(risposta1 == 'A')
        {
            punteggio++;
        }
        else if(risposta1 == 'B' || risposta1 == 'C')
        {
            printf("Risposta Errata\n");
        }
        else
        {
            printf("Lettera selezionata non presente tra quelle disponibili\n");
        }
    }
    while(risposta1 != 'A' && risposta1 != 'B' && risposta1 != 'C' );
    
    printf("Domanda numero 2:\n");
    printf("Cosa è presente in un PC?\n");
    printf("A >> Tavolo\nB >> CPU\nC >> Mela\n");
    do
    {
        printf("Inserisci la Risposta:\n");
        scanf(" %c", &risposta2);
        if(risposta2 == 'B')
        {
            punteggio++;
        }
        else if(risposta2 == 'A' || risposta2 == 'C')
        {
            printf("Risposta Errata\n");
        }
        else
        {
            printf("Lettera selezionata non presente tra quelle disponibili\n");
        }
    }
    while(risposta2 != 'A' && risposta2 != 'B' && risposta2 != 'C' );
    
printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);
return 0;
}
