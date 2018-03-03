#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[35][35] = {0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i][0] = 1;
	}
	for(int i=1;i<n;i++)
	{
		a[i][i] = 1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
}