#include <stdio.h>
#include <math.h>

int main()
{
    double a,b, t, t2;
    t2 = a*b;
    t = sqrt(t2);
    printf("\nKerek ket szamot: ");
    scanf("%lf, %lf", &a, &b);
    printf("\nA ket szam szamtani kozepe: %lf\nA ket mertani kozepe: %lf",(a+b)/2,t2);
    return 0;
}
