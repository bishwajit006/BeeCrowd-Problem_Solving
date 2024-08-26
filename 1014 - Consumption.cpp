#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    float b;
    cin>>a;
    cin>>b;
    float r=a/b;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<r<<" km/l"<<endl;

    return 0;
}
