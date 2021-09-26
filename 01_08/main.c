#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,tmp;
    printf("\nAdj meg két számot: ");
    printf("a es b: ");
    scanf("%d, %d", &a, &b);
    tmp = a; a = b;b = tmp;
    printf("\nCsere után a = %d, b = %d\n", a,b);
    return 0;
}
