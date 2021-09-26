#include <stdio.h>

int main()
{
    int a;
    printf("\nKerek egy szamot: ");
    scanf("%d", &a);
    if(a%2)
    {
        printf(" paratlan");
    }
    else
    {
        printf(" paros");
    }
    return 0;
}
