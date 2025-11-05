#include <stdio.h>
#include <stdlib.h>
//konstante definieren um die gewünchte speichermenge zu merken
#define ANZAHL_PLAETZE 7

int main()
{
    //Speicher für ints reservieren
    int werte[ANZAHL_PLAETZE]={-1,5,-7,9,3,1,2};
    //Speicher initialiesieren
   /* for (int i=0; i<ANZAHL_PLAETZE; i++)
    {
        werte[i]=i*2;
    }*/
    //Diese Speicher benutzen
    //Summe der Werte rechnen
    //Variable fürs Ergebnis vorbreiten
    int summe=0;
    //Über Array laufen
    for (int i=0; i<ANZAHL_PLAETZE; i++)
        //für jedes Element Ergebnis Anpassen
    {
        summe += werte[i];
    }
    //Am Schluß ist das Ergebnis in der dafür vorbreiteten Variable
    printf("Summe: %d\n\n", summe);

    //kleinste Zahl der Array

    int min = werte[0]; // Startwert

    for (int j = 1; j < ANZAHL_PLAETZE; j++) {
        if (werte[j] < min) {
            min = werte[j];
        }
    }
        printf("Kleinste Zahl: %d\n", min);
        //großte Zahl der Array
    int max = werte[0]; // Startwert

    for (int k = 1; k < ANZAHL_PLAETZE; k++) {
        if (werte[k] > max) {
            max = werte[k];
        }
    }

    printf("Groesste Zahl: %d\n", max);


    int *werteNochmal=werte;
    for (int i=0; i<ANZAHL_PLAETZE;i++)
    {
        printf("%d ",werteNochmal[i]);
    }


    return 0;
}
