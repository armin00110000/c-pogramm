#include <stdio.h>
#include <string.h>

#define MAX_LAENGE 20
#define MAX_ANZAHL_NAMEN 20
char daten[MAX_ANZAHL_NAMEN][MAX_LAENGE]; // Deklarieren Sie ein 2D-Array, um die Namen zu speichern
int anzahlNamen=0;

int main()
{
        printf("Geben Sie bis zu %d Namen ein (1 zum beenden):\n", MAX_ANZAHL_NAMEN);
        do
        {

            scanf("%19s", daten[anzahlNamen]);
            if (strcmp (daten[anzahlNamen], "1")==0)
        {
            break;
        }
        anzahlNamen++;
        }
        while (anzahlNamen<MAX_ANZAHL_NAMEN);

        // Geben Sie die gespeicherten Namen aus
        for (int i = 0; i < anzahlNamen; i++)
        {
            printf("Name %d: %s\n", i+1, daten[i]);
        }



    /* Erfassen Sie die Namen mit einer Schleife
    for (int i = 0; i < anzahl_namen; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", namen[i]); // Erfasst den Namen und speichert ihn im Array
    }

    printf("\nGespeicherte Namen:\n");

    */

    return 0;
}
