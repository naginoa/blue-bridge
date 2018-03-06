#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	long long sum[20] = {0}, a[20] = {0}, dp[20][20] = {0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sum[0] = a[0];
	for(int i=1;i<n;i++)
	{
		sum[i] = sum[i-1] + a[i];
	}
	/*for(i=0;i<n;i++)
	{
		cout<<sum[i]<<' ';
	}*/
	for(int i=0;i<n;i++)
	{
		dp[i][0] = sum[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for(int l=1;l<n;l++)
			{
				dp[i][j] = max( dp[i][j], dp[l-1][j-1] * (sum[i]-sum[l-1]) );
			}
		}
	}
	cout<<dp[n-1][k];
}