#include<stdio.h>
int main()
{
   int s,m,h,k,p;
    scanf("%d",&s);
    h=s/3660;
     k=s-(h*3600);
     m=k/60;
     p=k%60;



    printf("%d:%d:%d\n",h,m,p);

    return 0;
}
