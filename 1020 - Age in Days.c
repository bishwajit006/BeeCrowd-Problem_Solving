#include<stdio.h>
int main()
{
    int d,m,y,k,p;
    scanf("%d",&d);
    y=d/365;
    k=d-(y*365);
    m=k/30;
    p=k%30;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",p);



    return 0;
}
