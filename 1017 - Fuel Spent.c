#include<stdio.h>
int main()
{
    double a,b,km,fuel;
    scanf("%lf%lf",&a,&b);
    km=a*b;
    fuel=km/12;

    printf("%.3lf\n",fuel);

    return 0;
}
