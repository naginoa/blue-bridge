#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define mod 1000000007
__int64 dp[105][105];

int main()
{
    int k,l,i,j,x;
    scanf("%d%d",&k,&l);
    for(i = 0; i<k; i++)
        dp[1][i] = 1;
    for(i = 2; i<=l; i++)
        for(j = 0; j<k; j++)
            for(x = 0; x<k; x++)
                if(x!=j-1&&x!=j+1)//根据题意，本位的数字与前面的数字是不能相邻的
                {
                    dp[i][j]+=dp[i-1][x];
                    dp[i][j]%=mod;
                }
    __int64 sum = 0;
    for(i = 1; i<k; i++)
    {
        sum+=dp[l][i];
        sum%=mod;
    }
    printf("%I64d\n",sum%mod);

    return 0;
}
