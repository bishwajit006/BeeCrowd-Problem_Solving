#include<stdio.h>
int main()
{
    double a,b,c,n;

    scanf("%lf%lf%lf",&a,&b,&c);
    n=((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1lf\n",n);
    return 0;
}
