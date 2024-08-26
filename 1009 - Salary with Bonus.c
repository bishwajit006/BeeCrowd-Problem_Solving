#include<stdio.h>
int main()
{
    char c;
    scanf("%s",&c);
    double s,b,r;
    scanf("%lf%lf",&s,&b);
    r=s+(b*.15);
    printf("TOTAL = R$ %.2lf\n",r);
    return 0;
}
