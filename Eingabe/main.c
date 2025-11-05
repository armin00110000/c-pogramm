#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*printf("Bitte geben Sie ein Zeichen ein:");
    //ein Zeichen aus der Konsole lesen

        int c=getchar();


    printf("Buchstabe: %c, ASCII-Nummer: %d\n",c,c);
    //Enter-Taste einlesen und ignorieren
    getchar();*/

    printf("Bitte geben Sie ein Zahl ein:");
    int eingabe; //Speicher für ein Zahl reservieren
    scanf("%d", &eingabe); //Pointer zum Speicher an scanf übergeben
    printf("Sie haben eingegeben: %d\n", eingabe);

    /*
    printf("Bitte geben Sie noch ein Zahl ein:");
    float eingabe3; //Speicher für zeite Zahl reservieren
    scanf("%f", &eingabe3); //Pointer zum Speicher an scanf übergeben
    printf("Sie haben eingegeben: %.3f\n", eingabe3);

    //adition, multiplikation
    int summe=eingabe+eingabe3;
    float produkt=eingabe*eingabe3;
    printf("Summe eingebene Zahlen ist:%d\nProdukt eingebene Zahlen ist:%.3f\n",summe,produkt);
    */

    printf("Bitte geben Sie noch ein Zahl ein:");
    int eingabe3; //Speicher für zeite Zahl reservieren
    scanf("%d", &eingabe3); //Pointer zum Speicher an scanf übergeben

    //GGT berechnen
    do
    {
        if (eingabe==eingabe3)
        {
            printf("GGT ist: %d\n", eingabe);
            break;
        }
        else if (eingabe==0 || eingabe3==0)
        {
            if (eingabe3!=0)
            {
                printf("GGT ist: %d\n",eingabe3);
                break;
            }
            else
            {
                printf("GGT ist: %d\n",eingabe);
                break;
            }
        }
        else if (eingabe>eingabe3)
        {
            eingabe -= eingabe3;
        }
        else  // eingabe < einggabe3
        {
            eingabe3 -= eingabe;
        }
    }
    while(1); //Wiederholen, bis ein break passiert

    return 0;
}
