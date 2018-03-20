#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if( a[i]=='a' || a[i]=='i' || a[i]=='u' || a[i]=='e' || a[i]=='o')
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<0;
    /*if( a.find("a") <= a.size() )
    {
        cout<<a.find("a")+1;
    }
    else if( a.find("i") <= a.size() )
    {
        cout<<a.find("i")+1;
    }
    else if( a.find("o") <= a.size() )
    {
        cout<<a.find("o")+1;
    }
    else if( a.find("e") <= a.size() )
    {
        cout<<a.find("e")+1;
    }
    else if( a.find("u") <= a.size() )
    {
        cout<<a.find("u")+1;
    }
    else
    {
        cout<<0;
    }*/

    return 0;
}