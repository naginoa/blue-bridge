#include <bits/stdc++.h>
using namespace std;

string to_string_x(int n)//c++11 surport
{
    stringstream ss;
    ss<<n;
    return ss.str();
}
int main()
{
    string test = "-123 9.87 welcome to, 98913,, test!";
    istringstream iss;//istringstream�ṩ�� string �Ĺ���
    iss.str(test);//�� string ���͵� test ���Ƹ� iss������ void
    string s;
    cout << "���տո��ȡ�ַ���:" << endl;
    while (iss >> s){
        cout << s << endl;//���ո��ȡstring
    }
    cout << "*********************" << endl;

    istringstream a(test);
    int i;
    a >> i;
    cout<<i<<endl;
    a.ignore(100, ',');
    int j;
    a >> j;
    cout <<"���ԡ�������ȡint���ͣ�"<< j << endl;
}
