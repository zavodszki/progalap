#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    double c,d;
    double maradek;

    printf("\nAdjon meg ket egesz szamot: ");
    scanf("%d, %d", &a, &b);
    printf("\n%d / %d = %d, maradek: %d",a,b,a/b,a-(a/b));

    printf("\nAdjon meg ket valos szamot: ");
    scanf("%lf, %lf", &c,&d);
    maradek = double fmod(c,d);
    printf("\%lf / %lf = %lf, maradek: %lf",c,d,c/d,maradek);
    return 0;
}
