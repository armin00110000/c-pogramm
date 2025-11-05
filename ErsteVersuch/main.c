#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5;
    int b=42;
    float x=3.5;
    printf("Die Zahl a ist: %d\n",a);
    printf("Die Zahl b ist: %d\n",b);
    printf("Die Zahl x ist: %.2f\n",x);
    printf("Die Summe von a & b ist: %d\n",a+b);
    printf("Die Differenz von a & b ist: %d\n",a-b);
    printf("Das Produkt von a & x ist: %.2f\n",a*x);
    printf("Die Division von a & b ist: %d\n",a/b);
    printf("Die Division von a & b ist: %.2f\n",a/b);
    printf("Die Division von a & b ist: %.2f\n",(float)a/(float)b);
    printf("Die Division von b & a ist: %d\n",b/a);
    printf("Die Division von b & a ist: %.2f\n",(float)b/(float)a);

    printf("Zahlen von 1 bis 10:\n");

    //Zum auswendig lernen
    //for(int i=0;i<10;++i) { ...i... }
    for (int i=1; i<=10; i++)
    {
        printf("%d| ",i);
    }
    printf("\n");
    printf("Produkttabelle:\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*2);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*3);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*4);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*5);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*6);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*7);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*8);
    }
    printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*9);
    }
     printf("\n");
    for (int i=1;i<=10; i++)
    {
        printf("%d| ",i*10);
    }
    printf("\n");
    //2. versuch
    printf("Nochmal anders kodiert:\n");
    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=10; j++)
        {
            printf("%d \t| ",i*j);

        }
        printf("\n");
    }




    return 0;
}
