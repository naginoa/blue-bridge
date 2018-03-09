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
    istringstream iss;//istringstream提供读 string 的功能
    iss.str(test);//将 string 类型的 test 复制给 iss，返回 void
    string s;
    cout << "按照空格读取字符串:" << endl;
    while (iss >> s){
        cout << s << endl;//按空格读取string
    }
    cout << "*********************" << endl;

    istringstream a(test);
    int i;
    a >> i;
    cout<<i<<endl;
    a.ignore(100, ',');
    int j;
    a >> j;
    cout <<"忽略‘，’读取int类型："<< j << endl;
}
