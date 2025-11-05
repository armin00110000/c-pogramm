#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *message="Wenig freier Speicherplatz";
    const char *title="Warnung";
    int avgUsedRAM = 0;
    int sumTemp = 0;
    int usedRAM [24]={17,17,16,18,20,25,33,44,40,52,60,56,33,44,40,52,60,56,33,44,34,28,23,16};

    //Schleifenkopf
    for (int i=0; i<24; i++)
    //Schleifenrumpf
    {
        sumTemp += usedRAM[i];
    }
    //Berechnung Mittelwert
    avgUsedRAM = sumTemp/24;
    //Ausgabe Warnmeldung
    if (avgUsedRAM > 75)
    {
        printf("%s\n\n", title);
        printf("%s\n", message);
    }
    return 0;
}
