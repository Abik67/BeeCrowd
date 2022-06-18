#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char M[100];
    cin>>M;
    double A,B,C;
    cin>>A>>B;
    C=A+(B*15)/100;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<C<<endl;

    return 0;
}
