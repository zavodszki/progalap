#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\nKerek ket szamot: ");
    scanf("%d, %d",&a,&b);
    if(a<b)
    {
        printf("\n%d a nagyobb.",b);
    }
    else if(a == b)
    {
        printf("\n%d es %d egyenlo.",a,b);
    }
    else
    {
        printf("\n%d a nagyobb.",a);
    }
    return 0;
}
