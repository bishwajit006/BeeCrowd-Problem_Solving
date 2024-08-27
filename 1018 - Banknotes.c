#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,A,B,C,D,E,F,G;
    scanf("%d",&n);
    A=n/100;
    a=n%100;

    B=a/50;
    b=a%50;

    C=b/20;
    c=b%20;

    D=c/10;
    d=c%10;

    E=c/5;
    e=c%5;

    F=e/2;
    f=e%2;

    g=f/1;

    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",A);
    printf("%d nota(s) de R$ 50,00\n",B);
    printf("%d nota(s) de R$ 20,00\n",C);
    printf("%d nota(s) de R$ 10,00\n",D);
    printf("%d nota(s) de R$ 5,00\n",E);
    printf("%d nota(s) de R$ 2,00\n",F);
    printf("%d nota(s) de R$ 1,00\n",g);


    return 0;
}
