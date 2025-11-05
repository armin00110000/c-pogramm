#include <stdio.h>
#include <string.h>

//Palindromprüfung
int istPalindrom(const char *wort) {
    int links = 0;
    int rechts = strlen(wort) - 1;

    while (links < rechts) {
        if (wort[links] != wort[rechts]) {
            return 0; // false
        }
        links++;
        rechts--;
    }
    return 1; // true
}

int main() {
    char eingabe[100];

    printf("Geben Sie ein Wort ein: ");
    scanf("%99s", eingabe); // liest ein Wort ohne Leerzeichen

    if (istPalindrom(eingabe)) {
        printf("\"%s\" ist ein Palindrom.\n", eingabe);
    } else {
        printf("\"%s\" ist kein Palindrom.\n", eingabe);
    }

    return 0;
}
