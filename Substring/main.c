#include <stdio.h>
#include <stdlib.h>

void substring (char *ziel, const char *original, const int anfang, const int ende)
{
    for (int i=anfang;i<ende;i++)
    {
        ziel[i-anfang]=original[i];
    }
    ziel[ende-anfang]=0;
}

void substringMit4Zeichen (char *ziel, const char *original, const int anfang)
{
    sscanf(original+anfang,"%4s",ziel);
}

void substringMitScanf (char *ziel, const char *original, const int anfang, const int ende)
{
    char format[20];
    sprintf (format, "%%%ds", ende-anfang);
    sscanf (original+anfang,format,ziel);
}

int main()
{
    const char *ganzes="Tralala traderideria";
    char auszug[21];

    substring (auszug,ganzes,3,7);
    printf("Auszug: %s\n", auszug);
    substringMit4Zeichen(auszug, ganzes, 3);
    printf("Auszug: %s\n", auszug);
    substringMitScanf(auszug, ganzes, 3, 7);
    printf("Auszug: %s\n", auszug);

    return 0;
}
