#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("\nK�rek egy sz�mot: ");
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
