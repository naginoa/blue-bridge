#include <iostream>
using namespace std;
#define mod 1000000007
int main()
{
    int k,l;
    __int64 dp[125][125];
    cin>>k>>l;
    for(int i=0;i<k;i++){
        dp[1][i] = 1;
    }
    for(int i=2;i<=l;i++){
        for(int j=0;j<k;j++){
            for(int x=0;x<k;x++){
                if(x != j-1 && x != j+1){
                    dp[i][j] += dp[i-1][x];
                    dp[i][j] %= mod;
                }
            }
        }
    }
    __int64 sum = 0;

    for(int i=1;i<k;i++){
        sum += dp[l][i];
        sum %= mod;
    }
    cout<<sum%mod;
}
