#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eingabe1; //Speicher für ein Zahl reservieren
   // do {
        printf("Bitte geben Sie ein Zahl ein:");
        scanf("%d", &eingabe1); //Pointer zum Speicher an scanf übergeben
       /* if(eingabe1<=0) {
            getchar();
            printf("Bitte positive ganze Zahlen");
        } else {
            break;
        }
    } while(1);*/
    printf("Sie haben eingegeben: %d\n", eingabe1);



    printf("Bitte geben Sie noch ein Zahl ein:");
    int eingabe2; //Speicher für zeite Zahl reservieren
    scanf("%d", &eingabe2); //Pointer zum Speicher an scanf übergeben

    //GGT berechnen
    do
        {
        if (eingabe1==eingabe2)
        {
            printf("GGT ist: %d\n", eingabe1);
            break;
        }
        if (eingabe1==0 || eingabe2==0)
        {
            if (eingabe2!=0)
            {
                printf("GGT ist: %d\n",eingabe2);
                break;
            }
                printf("GGT ist: %d\n",eingabe1);
                break;

        }



        if (eingabe1>eingabe2)
        {
            int rest1=eingabe1%eingabe2;
            eingabe1=rest1;
        }
        else  // eingabe1 < eingabe2
        {
            int rest2=eingabe2%eingabe1;
            eingabe2=rest2;
        }
    }
    while(1); //Wiederholen, bis ein break passiert

    return 0;
}

