#include <stdio.h>
#include <stdlib.h>


void fibonacci(int n)
{
    // Fall 0
    if (n<=0)
    {
        printf("Erste Zahl der Fibonacci-Folge (N=%d) ist: 0", n);
        return;
    }



    // Die ersten beiden Zahlen der Folge initialisieren
    long long a = 0; // F(0)
    long long b = 1; // F(1)

    printf("Die ersten %d Zahlen der Fibonacci-Folge ", n);

    // Spezialfall für N=1
    if (n == 1) {
        printf("%lld", a); // Gibt nur 0 aus
        printf("\n");
        return;
    }

    // Ausgabe der ersten beiden Zahlen
    printf("%lld, %lld", a, b);

    // Berechne die restlichen Zahlen aus
    for (int i = 2; i < n; i++)
    {
        long long folgende_zahl = a + b;

        // Ausgabe mit Komma als Trennzeichen
        printf(", %lld", folgende_zahl);

        //nächsten Durchlauf:
        a = b;
        b = folgende_zahl;
    }

    printf("\n");
}


int main()
{
    //Ausführen
    int N = 55;
    fibonacci(N);


    return 0;
}
