#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int A,V;
    printf("\nAdja meg a t�glatest oldalait: ");
    scanf("%d, %d, %d", &a, &b, &c);
    A = 2*(a*b+a*c+b*c);
    V = a*b*c;
    printf("\nA teglatest felsz�ne: %d\nA teglatest terfogata: %d",A,V);
    return 0;
}
