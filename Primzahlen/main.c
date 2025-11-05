#include <stdio.h>
#include <stdlib.h>

void primzahl()
{
    int eingabeZahl;
    int istPrimzahl = 1; // 1 = true, 0 = false

    printf("Bitte geben Sie eine ganze Zahl ein: \n");
    scanf("%d", &eingabeZahl); // & Operator nicht vergessen!

    // Sonderfälle behandeln
    if (eingabeZahl < 2)
    {
        printf("%d ist keine Primzahl.\n", eingabeZahl);
        return;
    }

    // Prüfe ob Zahl durch eine Zahl von 2 bis eingabeZahl-1 teilbar ist
    for (int i = 2; i < eingabeZahl; i++)
    {
        if (eingabeZahl % i == 0)
        {
            istPrimzahl = 0; // Teiler gefunden -> keine Primzahl
            break; // Schleife abbrechen, da wir bereits wissen es ist keine Primzahl
        }
    }

    // Ergebnis ausgeben
    if (istPrimzahl)
    {
        printf("%d ist eine Primzahl.\n", eingabeZahl);
    }
    else
    {
        printf("%d ist keine Primzahl.\n", eingabeZahl);
    }
}

int main()
{
    primzahl(); // Funktion aufrufen
    return 0;
}
