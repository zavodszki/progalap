#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, oszto, db=0;
    printf("\nKerek egy szamot: ");
    scanf("%d", &szam);

    for(oszto=1; oszto<=szam; oszto++)
    {
        if(szam%oszto == 0)
            db++;
    }
    printf("\nOsztok szama: %d\n",db);
    return 0;
}
