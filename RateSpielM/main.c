#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int zufallszahl =  (rand() % 100) + 1;  // Zufallszahl zwischen 0 und 100
    int tipp = 0;
    int versuche = 0;


    printf("Rate die Zahl zwischen 0 und 100!\n");
    printf("(Gib eine negative Zahl ein, um das Spiel zu beenden)\n");

    while (1)
        {
        printf("Dein Tipp: ");
        scanf("%d", &tipp);

        if (tipp < 0)
            {
            printf("Spiel beendet. Die Zahl war: %d\n", zufallszahl);
            break;
            }

        versuche++;

        if (tipp == zufallszahl)
            {
            printf("Genau! Du hast die Zahl in %d Versuchen geraten.\n", versuche);
            break;
            } else if (tipp > zufallszahl)
            {
            printf("Zu gross!\n");
            } else {
            printf("Zu klein!\n");
        }
    }

    return 0;
}
