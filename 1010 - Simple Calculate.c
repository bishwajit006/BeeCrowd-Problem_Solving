#include<stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    float price1,price2,a;
    scanf("%d%d%f%d%d%f",&code1,&unit1,&price1,&code2,&unit2,&price2);
    a=(price1*unit1)+(price2*unit2);
    printf("VALOR A PAGAR: R$ %.2f\n",a);
    return 0;
}
