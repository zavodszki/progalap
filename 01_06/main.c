#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    double c;
    printf("\nA háromszög 2 befogója: ");
    scanf("%d, %d", &a, &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("\nA háromszög átfogója: %lf"¡,c);
    return 0;
}
