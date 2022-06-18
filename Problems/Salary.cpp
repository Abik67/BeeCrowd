#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A,B,C,SALARY;
    cin>>A;
    cin>>B;
    cin>>C;

    SALARY=B*C;
    cout<<"NUMBER = "<<A<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<endl;

    return 0;
}
