#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Distanz zwischen 2 Punkten
double distanz(const double x0, const double y0, const double x1, const double y1)
{
    return sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
}

//Summe 3 Zahlen
double summe3 (const double a, const double b, const double c)
{
    return (a+b+c);
}

//Mittlere Zahl ermitteln
double mittlereZahl (const double a, const double b, const double c)
{

    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
        return c;

}

//Mittelwert von Array
double mittelwert (const double *zahlen, int anzahlZahlen)
{
    if (anzahlZahlen==0)
    {
        return 0;
    }
    double summe=0.0;
    for (int i = 0; i < anzahlZahlen; i++) {
        summe += zahlen[i];
    }
    return summe/anzahlZahlen;

}


//
int main()
{
    //definition Array
    double zahlen[]={1,2,3,4,5,6,7};

    printf("Distanz: %lf\n", distanz(1,3,9,2)); //Ausgabe Distanz
    printf("Summe: %lf\n", summe3(3,8,55)); //Ausgabe Summe drei Zahlen
    printf("Mittlere Zahl: %lf\n", mittlereZahl(13,8,55)); //Ausgabe mittlere Zahl
    printf("Mittelwert ist: %lf\n", mittelwert(zahlen,7)); //Ausgabe mittelwert
    return 0;
}
