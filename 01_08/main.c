#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,tmp;
    printf("\nAdj meg k�t sz�mot: ");
    printf("a es b: ");
    scanf("%d, %d", &a, &b);
    tmp = a; a = b;b = tmp;
    printf("\nCsere ut�n a = %d, b = %d\n", a,b);
    return 0;
}
