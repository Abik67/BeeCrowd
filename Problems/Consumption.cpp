#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double X,Y,Z;

    cin>>X;
    cin>>Y;

    Z=X/Y;

    cout<<fixed;
    cout<<setprecision(3)<<Z<<" km/l"<<endl;

    return 0;
}
