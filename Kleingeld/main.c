#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const char *nameDerGeldBetraege[]=
{
    "200 EUR Schein",
    "100 EUR Schein",
    "50 EUR Schein",
    "20 EUR Schein",
    "10 EUR Schein",
    "5 EUR Schein",
    "2 EUR Muenze",
    "1 EUR Muenze",
    "50 C Muenze",
    "20 C Muenze",
    "10 C Muenze",
    "5 C Muenze",
    "2 C Muenze",
    "1 C Muenze"

};

const float wertDerGeldBetraege[]=
{
    200.0,
    100.0,
    50.0,
    20.0,
    10.0,
    5.0,
    2.0,
    1.0,
    0.50,
    0.20,
    0.10,
    0.05,
    0.02,
    0.01

};

int main()
{
    //Eingabe
    float betrag;
    printf("Geben sie den Betrag ein: \n");
    scanf ("%f", &betrag);

    //Ausgabe
    printf("%.2f Euro wird aufgeteilt in:\n",betrag);
    for(int i=0;i<14;i++)
    {
        int anzahl=floor(betrag/wertDerGeldBetraege[i]);
        if(anzahl>0)
        {
            printf("%d %s\n",anzahl,nameDerGeldBetraege[i]);
            betrag -= anzahl*wertDerGeldBetraege[i];
            betrag=round(betrag*100)/100; // eventuelle Ungenauigkeiten bei - (4.9999 anstatt 5) wieder auf 1 C korrigieren
        }
    }
    return 0;
}
