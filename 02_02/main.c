#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("\nKérek egy számot: ");
    scanf("%d", &a);
    if(a<0)
    {
        a*=-1;
    }
    else
    {
        printf("\nAbszolut erteke: %d\n",a);
    }
    return 0;
}
