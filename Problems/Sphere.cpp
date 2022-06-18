#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R,V;

 cin>>R;
 V=(4*3.14159*R*R*R)/3;
 cout<<"VOLUME = "<<fixed<<setprecision(3)<<V<<endl;

    return 0;
}
