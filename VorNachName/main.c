#include <stdio.h>
#include <stdlib.h>

#define MAX_LAENGE_VORNAME 21
#define SCANF_FORMAT_VORNAME "%20s"
#define MAX_LAENGE_NACHNAME 21
#define SCANF_FORMAT_NACHNAME "%20s"
#define MAX_LAENGE_NAME MAX_LAENGE_VORNAME+MAX_LAENGE_NACHNAME

int main()
{
    // Zeichenketten eingeben lassen und konkatenieren
    char vorname [MAX_LAENGE_VORNAME];
    printf("Vorname: ");
    scanf (SCANF_FORMAT_VORNAME,vorname);


    char nachname [MAX_LAENGE_NACHNAME];
    printf("Nachname: ");
    scanf (SCANF_FORMAT_NACHNAME, nachname);


    char name [MAX_LAENGE_NAME];
    int zielindex=0;
    for (int i=0;i<MAX_LAENGE_VORNAME && vorname[i]!=0;i++,zielindex++)
    {
        name [zielindex]=vorname[i];
    }
    name [zielindex]=' ';
    zielindex++;
    for (int i=0;i<MAX_LAENGE_NACHNAME && nachname[i]!=0;i++,zielindex++)
{
    name [zielindex]=nachname[i];
}

    name [zielindex]=0; //0 am ende des Name nicht vergessen
    printf("Name ist: %s\n", name);

    return 0;
}
