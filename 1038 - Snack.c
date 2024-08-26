#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,f;
    double r;
    scanf("%d%d",&a,&f);
    if(a==1)
    {
        r=4*f;
    }
    else if(a==2)
    {
        r=4.5*f;
    }
    else if(a==3)
    {
        r=5*f;
    }
    else if(a==4)
    {
        r=2*f;
    }
    else if(a==5)
    {
        r=1.50*f;
    }
    printf("Total: R$ %.2lf\n",r);
    return 0;
}
