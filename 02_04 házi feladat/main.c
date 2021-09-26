#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c, ertek1, ertek2, gyok, gyokeredmeny;
    if(a == 0)
    {
        printf("\nAdj meg masik erteket: ");
        return 1;
    }
    else
    {
        printf("\nKerek harom szamot: ");
        scanf("%lf, %lf%, %lf"a,b,c);
        gyok = (b*b)-4*a*c
        if(gyok<0)
        {
            printf("\nMuvelet nem elvegezheto.");
            return 1;
        }
        gyokeredmeny = sqrt(gyok);
        ertek1 = ((b*(-1))+gyokeredmeny)/2*a;
        ertek2 = ((b*(-1))-gyokeredmeny)/2*a;
    }
    printf("\nAz egyik ertek: %lf, a masik ertek: %lf",ertek1, ertek2);
    return 0;
}
