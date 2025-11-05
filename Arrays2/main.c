#include <stdio.h>
#include <stdlib.h>

#define ANZAHL 5
#define MATRIX_ZEILEN 3
#define MATRIX_SPALTEN 3

int main()
{
    int array1[ANZAHL] = {3, 5, 8, 11, 21};
    //Aufgabe 1
    for (int i = 0; i < ANZAHL; i++)
    {
        printf("%d ", array1[i]);


    }
    printf("\n\n ");

    //Aufgabe 2
    int summe=0;
        for (int i=0; i<ANZAHL; i++)
    {
        summe +=array1[i];
    }
    printf("Summe: %d\n\n", summe);


    //Aufgabe 3
    int max = array1[0];

    for (int i = 1; i < ANZAHL; i++)
        {
        if (array1[i] > max)
        {
            max = array1[i];
        }
        }
        printf("Groesste Element: %d\n\n", max);

    //Aufgabe 4
    printf("umgekehrt: \n");
    for (int i=ANZAHL-1;i>=0;i--)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
    //Aufgabe 5
    printf("\nDurchschnitt ist: %.2f\n\n", (float)summe / ANZAHL);

    //Aufgabe 6
    int bestimteZahl = 5;
    int zaehler = 0;

    for (int i = 0; i < ANZAHL; i++)
    {
        if (array1[i] == bestimteZahl)
        {
            zaehler++;
        }
    }

    printf("Die Zahl %d kommt %d Mal im Array vor.\n\n", bestimteZahl, zaehler);

    //aufgabe 7

int matrix[MATRIX_ZEILEN][MATRIX_SPALTEN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Tabellarische Ausgabe des 3x3-Arrays:\n\n");

    for (int i = 0; i < MATRIX_ZEILEN; i++)
        {
        for (int j = 0; j < MATRIX_SPALTEN; j++)
            {
            printf("%d ", matrix[i][j]);
            }
        printf("\n");
        }

    return 0;
}


