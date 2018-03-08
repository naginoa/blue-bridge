#include <iostream>

using namespace std;

int count_num(int a[],int n,int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(a[i] == n){
            sum += 1;
        }
    }
    return sum;
}
int main()
{
    int n,k,kids[2200];
    for(int i=1;i<=2200;i++)
    {
        kids[i] = i;
    }
    cin>>n>>k;
    int flag = 0;
    while( count_num(kids, 0, n) != n-1 )
    {
        for(int i=1;i<=n;i++)
        {
            if(kids[i]!=0)
            {
                //cout<<"i is "<<i<<endl;
                flag += 1;
                //cout<<"flag is "<<flag<<endl;
                if( flag % k == 0  || flag % 10 == k )
                {
                    //cout<<"wow"<<endl;
                    kids[i] = 0;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(kids[i] != 0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}