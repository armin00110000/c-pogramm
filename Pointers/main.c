#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=35;
    int * adresseVonA=&a;
    printf("Inhalt der Adresse: %d\n", *adresseVonA);
    a=42;
    printf("Inhalt von a:%d\n", a);
    *adresseVonA=45;
    printf("Inhalt von a: %d\n",a);

    return 0;
}
