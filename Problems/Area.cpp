#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double X,Y,Z,M,N,pi=3.14159;
    double A,B,C;

    cin>>A>>B>>C;

    X=A*C*0.5;
    Y=pi*(C*C);
    Z=(A+B)/2*C;
    M=B*B;
    N=A*B;

    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<X<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<Y<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<Z<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<M<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<N<<endl;

    return 0;
}
