#include <iostream>

using namespace std;

int main()
{
    int a[5][5] = {{7},{3,8},{8,1,0},{2,7,4,4},{4,5,2,6,5}};
    int dp[5][5];
    dp[0][0] = a[0][0];
    dp[1][0] = a[0][0] + a[1][0];
    dp[1][1] = a[0][0] + a[1][1];
    for(int i=2;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j!=0){
                dp[i][j] = max((dp[i-1][j-1]+a[i][j]), (dp[i-1][j]+a[i][j]));
            }
            if(j==0){
                dp[i][j] = dp[i-1][j] + a[i][j];
            }
            if(j==i){
                dp[i][j] = dp[i-1][j-1] + a[i][j];
            }
        }
    }
    /*for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }*/
    int max_num = dp[4][0];
    for(int i=1;i<4;i++){
        if(max_num < dp[4][i]){
            max_num = dp[4][i];
        }
    }
    cout<<max_num;
}