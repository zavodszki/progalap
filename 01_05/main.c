#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    double t,t2,s;
    printf("\nA h�romsz�g oldalai: ");
    scanf("%d, %d, %d", &a, &b, &c);
    s = (double)(a+b+c)/2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t = sqrt(t2);
    printf("\nA h�romsz�g ter�lete: %.2f, ker�lete: %d\n",t,a+b+c);
    return 0;
}
