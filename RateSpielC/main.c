#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bitte denken Sie an einer Zahl zwichen 0 und 100 und Enter druecken.\n");
    getchar(); //Enter drücken um mit Raten loszulegen
    //Suchraum initialiesieren
    int min=0;
    int max=100;
    do
    {
        int mitte=(min+max)/2;
        printf("Ich rate %d. - fuer kleiner, + fuer groeßer, = fuer korrekt: ", mitte);
        int eingabe=getchar(); //eingabe +,-,=
        getchar(); //Enter
        if (eingabe=='=')
        {
            printf("Du hast an %d gedacht", mitte);
            break;  //geht auch return 0;
        }
        else if(eingabe=='+')
        {
            min=mitte+1;
        }
        else if (eingabe=='-')
        {
            max=mitte-1;
        }
        else
        {
            //printf ("Falsche Eingabe: %c, bitte nur +, -, = verwenden.\n", eingabe);
            printf("Fehler: Ungueltige Eingabe! Bitte nur +, -, = verwenden.\n");// Falsche Eingabe, nichts zu tun
        }
    }
    while(1); // Wiederholung bis Abbruch durch break, 1 bedeutet "true"
    return 0;
}
