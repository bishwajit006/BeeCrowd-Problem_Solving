#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,s,f,k,l,r;
    scanf("%lf%lf%lf%lf",&a,&b,&s,&f);
    k=(s-a)*(s-a);
    l=(f-b)*(f-b);
    r=sqrt(k+l);
    printf("%.4lf\n",r);
    return 0;
}
