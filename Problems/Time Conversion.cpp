#include <iostream>
using namespace std;

int main() {

    int N,M,O;

    cin>>N;

    M=N/3600;
    N=N-(M*3600);

    O=N/60;
    N=N-(O*60);

    cout<<M<<":"<<O<<":"<<N<<endl;

    return 0;
}
