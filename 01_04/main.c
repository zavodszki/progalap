#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    int r;
    double k,t,pi;
    printf("\nAdja meg a k�r sugar�t: ");
    scanf("%d", &r);
    t = r*r*M_PI;
    k = 2*M_PI*r;
    printf("\nA k�r ter�lete: %f\n",t);
    printf("\nA k�r ker�lete: %f\n",k);
    return 0;
}
