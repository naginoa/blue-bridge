#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int a=1;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			for(int c=0;c<=9;c++)
			{
				if( 2*a+2*b+c==n )
				{
					cout<<a<<b<<c<<b<<a<<endl;
				}
			}
		}
	}
	for(int a=1;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			for(int c=0;c<=9;c++)
			{
				if( 2*a+2*b+2*c==n )
				{
					cout<<a<<b<<c<<c<<b<<a<<endl;
				}
			}
		}
	}
}