#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int coutn[30] = {0};
    while(cin>>a && a!="1")
    {
        for(int i=0;i<a.size();i++)
    {
        coutn[int(a[i]) - 97] ++;
    }
    }
    for(int i=0;i<=26;i++)
    {
        if(coutn[i] != 0)
        {
            cout<<(char)(97+i)<<"------is------";
            cout<<coutn[i]<<endl;
        }

    }

}
