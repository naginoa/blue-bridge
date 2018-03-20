#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int is_judge_max_divisor(int a, int b, int c)
{
    if(a%c==0 && b%c==0)
    {
        for(int i = c + 1;i<=min(a, b);i++)
        {
            if( a%i==0 && b%i==0 )
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_judge_min_multiple(int a, int b, int c)
{
    if(c%a==0 && c%b==0)
    {
        for(int i = c - 1;i>=max(a, b);i--)
        {
            if( i%a==0 && i%b==0 )
            {
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int a0,a1,b0,b1;
        cin>>a0>>a1>>b0>>b1;
        for(int x=a1;x<=b1;x++)
        {
            if( is_judge_max_divisor(x, a0 ,a1)==1 && is_judge_min_multiple(x, b0, b1) == 1 )
            {
                sum++;
            }
        }
        cout<<sum;
    }
    //cout << is_judge_min_multiple(4,6,11) << endl;
    return 0;
}
