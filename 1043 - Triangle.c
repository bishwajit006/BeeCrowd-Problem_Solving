#include<stdio.h>
int main()
{
    float a,b,c,p,area;

    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b )
    {
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else
    {
        area=0.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }


    return 0;
}
