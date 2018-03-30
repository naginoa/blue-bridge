#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int dp[15][15] = {0};
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    dp[1][3] = 1;
    dp[1][4] = 1;
    for(int i=2;i<=13;i++)
    {
        for(int j=0;j<=13;j++)
        {
            if(j-4>=0)
            {
                dp[i][j] += dp[i-1][j-4];
            }
            if(j-3>=0)
            {
                dp[i][j] += dp[i-1][j-3];
            }
            if(j-2>=0)
            {
                dp[i][j] += dp[i-1][j-2];
            }
            if(j-1>=0)
            {
                dp[i][j] += dp[i-1][j-1];
            }
            dp[i][j] += dp[i-1][j];
        }
    }
    cout<<dp[13][13];
    return 0;
}