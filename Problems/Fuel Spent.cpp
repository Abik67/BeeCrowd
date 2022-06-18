#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double a,b,x,y;

    cin>>a;
    cin>>b;

    x=a*b;

    y=x/12;

    cout<<fixed<<setprecision(3)<<y<<endl;

    return 0;
}
