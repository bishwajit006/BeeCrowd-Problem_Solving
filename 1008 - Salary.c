#include<stdio.h>
int main()
{
    int worker,hour;
    float income,s;
    scanf("%d%d",&worker,&hour);
    scanf("%f",&income);
    s=hour*income;
   printf("NUMBER = %d\n",worker);
   printf("SALARY = U$ %.2f\n",s);
    return 0;
}
