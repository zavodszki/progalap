#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("\nSz�mol�g�p\n");
    scanf("%d,%d", &a, &b);
    c = a % b;
    printf("%d %% %d = %d\n",a,b,c);
    return 0;
}
