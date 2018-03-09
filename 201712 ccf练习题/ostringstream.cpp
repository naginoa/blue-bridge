#include <bits/stdc++.h>
using namespace std;

int main(){
    ostringstream out("abde");
    out.put('t');//²åÈë×Ö·û
    out.put('e');
    //out << "st";
    string res = out.str();//ÌáÈ¡×Ö·û´®
    cout << res << endl;
    system("pause");
    return 0;
}
