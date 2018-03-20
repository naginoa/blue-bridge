#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    if( a.find("a") <= a.size() )
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
    }

    return 0;
}