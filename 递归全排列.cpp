#include <bits/stdc++.h>
using namespace std;
string a;
int alll(int from, int to)
{
    if(from == to)
    {
        for(int i=0;i<to;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    for(int i=from;i<to;i++)
    {
        swap(a[from], a[i]);
        alll(from+1, to);
        swap(a[from], a[i]);
    }
}
int main()
{
    cin>>a;
    alll(0,a.size());
}