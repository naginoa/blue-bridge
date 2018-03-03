#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string c="";
		string a;
		cin>>a;
		for(int i=0;i<a.size();i++)
		{
			char b=a[i];
			switch(b)
			{
				case '0':c+="0000";break;
				case '1':c+="0001";break;
				case '2':c+="0010";break;
				case '3':c+="0011";break;
				case '4':c+="0100";break;
				case '5':c+="0101";break;
				case '6':c+="0110";break;
				case '7':c+="0111";break;
				case '8':c+="1000";break;
				case '9':c+="1001";break;
				case 'A':c+="1010";break;
				case 'B':c+="1011";break;
				case 'C':c+="1100";break;
				case 'D':c+="1101";break;
				case 'E':c+="1110";break;
				case 'F':c+="1111";break;
				default:break;
			}
		}
		if( c.size() % 3 == 1 )
		{
			c = "00" + c;
		}
		else if( c.size() % 3 == 2 )
		{
			c = '0' + c;
		}
		for(int j=0;j<c.size()-2;j+=3)
		{
			int nn = (c[j]-'0') * 4 + (c[j+1]-'0') * 2 + (c[j+2]-'0');
			if(j == 0 && nn == 0)
				continue;
			cout<<nn;
		}
		cout<<endl;
	}
}