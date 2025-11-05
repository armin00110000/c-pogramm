#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 20


int speicher[CAPACITY]; //int zahlen
int size = 0; //int anzahlZahlen


// Funktion zur Eingabe von Zahlen
void listeErfassen(int speicher[], int *size) //listeErfassen (const int capacity, int speicher[], int *size)
{
    printf("Geben Sie bis zu %d Zahlen ein. Negative Zahl beendet die Eingabe:\n", CAPACITY);
    while (*size < CAPACITY)
    {
        printf("Zahl %d: ", *size + 1);
        int zahl;
        scanf("%d", &zahl);

        if (zahl < 0)
        {
            break;
        }

        speicher[*size] = zahl;
        (*size)++;
    }
}
// Funktion zum brechnen der Summe
int summeListe (int speicher[], int size) //int summeListe (const int CAPACITY, const speicher[],const int anzahl)
{
    int summe = 0;
    for (int i = 0; i < size; i++)
    {
        summe += speicher[i];
    }
    return summe;

}

int main()
{
    // Erfasste Zahlen zum Test Zeigen
    listeErfassen(speicher,&size);
    printf("Erfasste Zahlen: ");
    for(int i=0;i<size;++i)
    {
        printf("%d ",speicher[i]);
    }
    //Summe der Zahlen zeigen
    int summe = summeListe(speicher, size);
    printf("\n");
    printf("Die Summe der erfassten Zahlen ist: %d\n", summe);
    return 0;
}
