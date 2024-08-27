#include<stdio.h>
int main()
{

   double n;
   int a,b,c,d,e,f,g,h,i,j,k,l,A,B,C,D,E,F,G,H,I,J,K,L,p;
   scanf("%lf",&n);
   p=n*100;
   //integer number

   A=p/10000;
   a=p%10000;
   B=a/5000;
   b=a%5000;
   C=b/2000;
   c=b%2000;
   D=c/1000;
   d=c%1000;
   E=d/500;
   e=d%500;
   F=e/200;
   f=e%200;
   //fractional number
   G=f/100;
   g=f%100;
   H=g/50;
   h=g%50;
   I=h/25;
   i=h%25;
   J=i/10;
   j=i%10;
   K=j/5;
   k=j%5;
   L=k/1;
   l=k%1;

printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",A);
    printf("%d nota(s) de R$ 50.00\n",B);
     printf("%d nota(s) de R$ 20.00\n",C);
      printf("%d nota(s) de R$ 10.00\n",D);
       printf("%d nota(s) de R$ 5.00\n",E);
        printf("%d nota(s) de R$ 2.00\n",F);
        printf("MOEDAS:\n");
         printf("%d moeda(s) de R$ 1.00\n",G);
          printf("%d moeda(s) de R$ 0.50\n",H);
           printf("%d moeda(s) de R$ 0.25\n",I);
            printf("%d moeda(s) de R$ 0.10\n",J);
             printf("%d moeda(s) de R$ 0.05\n",K);
              printf("%d moeda(s) de R$ 0.01\n",L);


    return 0;
}
