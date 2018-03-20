#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int divisor(long long int a,long long int b)
{
    long long int ma = max(a, b);
    long long int mi = min(a, b);
    long long int c = ma % mi;
    if( c == 0 )
    {
        return mi;
    }
    else
    {
        divisor(mi, c);
    }
}
int multiple(int a, int b)
{
    return ( a * b ) / divisor(a, b);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int sum=0;
        long long int a0,a1,b0,b1;
        cin>>a0>>a1>>b0>>b1;
        for(int x=1;x<=b1;x++)
        {
            if( divisor(x, a0) == a1 && multiple(x, b0) == b1 )
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    //cout<<divisor(144,100)<<endl;
    //cout<<multiple(144,100)<<endl;
    return 0;
}