#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, sum=0;
    printf("\nKerek egy szamot: ");
    scanf("%d", &N);
    do
    {
        sum += N;
        N--;
    }
    while(N>0);
    printf("\n÷sszeg: %d\n",sum);
    return 0;
}
