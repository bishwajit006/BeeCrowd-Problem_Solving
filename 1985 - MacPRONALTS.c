#include<stdio.h>
int main()
{
   int i,n,b;
  float a,sum=0.0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%f %d",&a,&b);

   if(a==1001)
    a=1.50;
   if(a==1002)
    a=2.50;
   if(a==1003)
    a=3.50;
   if(a==1004)
    a=4.50;
   if(a==1005)
    a=5.50;
     sum=sum+a*b;
   }

  
   printf("%0.2f\n",sum);



 return 0;
}
