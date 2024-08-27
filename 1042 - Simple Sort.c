#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c) // a is big
    {
        if(b>c)// b is big . so, a>b>c
        {
            printf("%d\n%d\n%d\n",c,b,a);//  c<b<a small number stay in first position
        }
        else// or, (c>b), a>c>b
        {
            printf("%d\n%d\n%d\n",b,c,a); // a<c<b
        }
    }

    if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d\n%d\n%d\n",c,a,b);// small number stay in first position
        }
        else
        {
            printf("%d\n%d\n%d\n",a,c,b);
        }
    }

    if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d\n%d\n%d\n",b,a,c);// small number stay in first position
        }
        else
        {
            printf("%d\n%d\n%d\n",a,b,c);
        }
    }
    printf("\n");
printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}
