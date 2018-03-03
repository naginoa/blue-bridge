#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
int main() {  
    int n, k;  
    scanf("%d %d", &n, &k);  
    long long sum[20] = {0}, num[20] = {0}, dp[20][20] = {0}; //dp[i][j]表示前i个数中有j个乘号时的最大值   
    int i, j, l;  
    for(i = 1; i <= n; i++) {  
        scanf("%lld", num + i);  
        sum[i] = sum[i - 1] + num[i];  
        dp[i][0] = sum[i];  //没有乘号时   
    }  
    for(i = 2; i <= n; i++) {  
        int t = min(i - 1, k);  //最多有几个乘号   
        for(j = 1; j <= t; j++) {  //遍历乘号个数   
            for(l = 2; l <= i; l++) { //遍历乘号位置   
                dp[i][j] = max(dp[i][j], dp[l - 1][j - 1] * (sum[i] - sum[l - 1]));  
            }  
        }  
    }  
    printf("%lld\n", dp[n][k]);  
    return 0;  
}  