#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>=65 && a[i]<=90){
            a[i] += 32;
        }
        else if(a[i]>=97 && a[i]<=122){
            a[i] -= 32;
        }
    }
    cout<<a;
}