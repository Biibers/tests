#include <iostream>

using namespace std;
void maini(int a,int b,int c)
{
    a=b;
    b=c;
    c=a+b;
}
int main()
{
    int cip;
    cin>>cip;
    int temp=0;
    int a1=1;
    int a2=1;
    maini(temp,a1,a2);
    cout<<a2;
    return 0;
}
