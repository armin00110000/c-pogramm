#include <stdio.h>
#include <string.h>

int main() {
    char buffer[40];
    char vorname[20] = "armin";
    char nachname[20] = "amin";
    int zahl;
    char wort[50];

    // String zusammenbauen
    sprintf(buffer, "Name: %s %s", vorname, nachname);
    printf("sprintf: %s\n", buffer);

    // String zu Zahl konvertieren
    char csv[] = "42,Hallo";
    sscanf(csv, "%d,%s", &zahl, wort);
    printf("sscanf: Zahl = %d, Wort = %s\n", zahl, wort);

     // Länge eines Strings
    int laenge = strlen(vorname);
    printf("strlen: Laenge von \"%s\" ist %d\n", vorname, laenge);

    //String kopieren
    char ziel[50];
    strcpy(ziel, vorname);
    printf("strcpy: Kopierter Vorname = %s\n", ziel);

    //Stringvergleich
    printf("strcmp(\"Armin\", \"Armin\") = %d\n", strcmp("Armin", "Armin"));

    //strcmpi()




    return 0;
}
