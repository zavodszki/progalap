#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("\nAdj meg egy számot: ");
    scanf("%d", &x);
    printf("\n%d abszolut erteke: %d",x,fabs(x));
    return 0;
}
