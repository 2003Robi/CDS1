#include <iostream>

using namespace std;

void divX(int n,int x)
{
    for(int i=n ; i>=1 ; i--)
        cout<<i*x<<" ";
}
int main()
{
    int n,x;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    divX(n,x);
    return 0;
}
