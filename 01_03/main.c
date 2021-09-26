#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("\nSzámológép\n");
    scanf("%d,%d", &a, &b);
    c = a % b;
    printf("%d %% %d = %d\n",a,b,c);
    return 0;
}
