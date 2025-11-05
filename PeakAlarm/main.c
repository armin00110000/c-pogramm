#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ANZAHL 15


void steileStellenNachObenMelden(float *daten)
{
    for (int i=1;i<ANZAHL;i++)
    {
        if (daten[i]>daten[i-1]+daten[i-1]*25.0/100.0)
        {
            printf("Alarm! An Index %d steigt der Wert um mehr als 25%%\n",i);
        }
    }
}

void steileStellenNachUntenMelden(float *daten)
{
    for (int i=1;i<ANZAHL;i++)
    {
        if (daten[i]<daten[i-1]-daten[i-1]*25/100)
        {
            printf("Alarm! An Index %d faellt der Wert um mehr als 25%%\n",i);
        }
    }
}


void peaksMelden(const float *daten)
{
    int peakAnfang=0;
    bool peakSchonGemeldet=true;
    for(int i=1;i<ANZAHL;i++)
    {
        if(daten[i]>daten[i-1])
        {
            peakAnfang=i;
            peakSchonGemeldet=false;
        }
        else if(daten[i]<daten[i-1])
        {
            if(!peakSchonGemeldet)
            {
                printf("Alarm! Peak zwischen %d und %d\n",peakAnfang,i);
                peakSchonGemeldet=true;
            }
        }
        else //daten[i]==daten[i+1]
        {
            //nichts zu tun
        }
    }
}

void minimaMelden(const float *daten)
{
    int minimumAnfang=0;
    bool minimumSchonGemeldet=true;
    for(int i=1;i<ANZAHL;i++)
    {
        if(daten[i]<daten[i-1])
        {
            minimumAnfang=i;
            minimumSchonGemeldet=false;
        }
        else if(daten[i]>daten[i-1])
        {
            if(!minimumSchonGemeldet)
            {
                printf("Alarm! Minimum zwischen %d und %d\n",minimumAnfang,i);
                minimumSchonGemeldet=true;
            }
        }
        else //daten[i]==daten[i+1]
        {
            //nichts zu tun
        }
    }
}

int main()
{
    const float daten[ANZAHL]={
        1.0,2.0,2.0,2.0,2.2,2.1,4.0,4.0,4.0,3.5,3.5,3.5,2.0,2.0
    };
    steileStellenNachObenMelden(daten);
    steileStellenNachUntenMelden(daten);
    peaksMelden(daten);
    minimaMelden(daten);

    return 0;
}
