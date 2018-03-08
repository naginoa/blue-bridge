#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,a[11011];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_num = 9999999;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( abs( a[i]-a[j] ) < min_num ){
                min_num = abs( a[i]-a[j] );
            }
        }
    }
    cout<<min_num;
}
