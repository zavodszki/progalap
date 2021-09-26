#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ok;
    char c;
    do
    {
        printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva: ");
        if(scanf("%d,%d", &a,&b)!=2)
        {
            printf("Hibas adatok\n");
            while((c =getchar())!='\n');
            ok = 0;
        }
        else if(a<=0||b<0)
        {
            printf("Pozitív számot adj meg!\n");
            while((c=getchar())!='\n');
            ok = 0;
        }
    } while(!ok);
    return 0;
}
