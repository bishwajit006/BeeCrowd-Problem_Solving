#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,v=0,g=0;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c>>a;
        if(c=='G')
            g+=a;
        else
            v+=a;
    }
    if(v>=g)
        cout<<"A greve vai parar."<<endl;
    else
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;

    return 0;
}

