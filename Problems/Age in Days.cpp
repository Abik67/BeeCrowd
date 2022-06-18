#include <iostream>

using namespace std;

int main() {

    int d,m,n;

    cin>>n;

    cout<<n/365<<" ano(s)"<<endl;
    m=n%365;
    cout<<m/30<<" mes(es)"<<endl;
    d=m%30;
    cout<<d/1<<" dia(s)"<<endl;

    return 0;
}
