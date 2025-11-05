#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *title="Zeichenketten";
    for (int i=0; i<14;i++)
    {
        printf("Der %d. Buchstabe hat der ASCII Code %d\n", i, title[i]);

    }

    char eingabe[21]; //Speicher für 20 Zeichen und 0 reservieren
    printf("Geben Sie bis 20 Zeichen ein: ");
    scanf("%20s", eingabe);     //Kein &! eingabe ist schon pointer (array ist pointer)
    //Zivilisierte Schreibweise
    for (int i=0;i<21;i++)
    {
        printf("ASCII-Code: %d\n", eingabe[i]);
        if (eingabe[i]==0)
        {
            break;
        }
    }
    printf("Hier nochmal:\n");
    //Kurze Schreibweise, ohne Index(foreach)
    for (char *p=eingabe;*p!=0;p++)
    {
        printf("ASCII-Code: %d\n", *p);
    }
    int a;
    printf("Geben Sie eine Zahl ein:");
    scanf("%d", &a);

    return 0;
}
