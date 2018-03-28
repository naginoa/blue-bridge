#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  n是左边的车辆， m是队列里的车辆
int car(int n, int m)
{
    if(n==0)
    {
        return 1;
    }
    if(m==0)
    {
        return car(n-1, 1);
    }
    //  下次车要么进栈，要么出栈。
    return car(n-1, m+1) + car(n, m-1);
}
int car(int n)
{
    return car(n, 0);
}
int main()
{
    int a[17];
    for(int i=0;i<17;i++)
    {
        a[i] = i + 1;
    }
    for(int i=0;i<17;i++)
    {
        cout<<"car count is "<<i+1<<"and the result is"<<car(a[i])<<endl;
    }
    return 0;
}