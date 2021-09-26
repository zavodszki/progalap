#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    int r;
    double k,t,pi;
    printf("\nAdja meg a kör sugarát: ");
    scanf("%d", &r);
    t = r*r*M_PI;
    k = 2*M_PI*r;
    printf("\nA kör területe: %f\n",t);
    printf("\nA kör kerülete: %f\n",k);
    return 0;
}
