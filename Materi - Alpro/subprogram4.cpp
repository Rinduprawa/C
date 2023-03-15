#include <iostream>
using namespace std;

int input();
void cetak (int N);

main() {
    int m;
    m=input();
    cetak (m);
}

int input () {
    int n;
    cout<<"INPUTKAN NILAI N = ";
    cin>>n;
    return n;
}

void vetak (int nona) {
    int i;
    for(i=1; i<=nona; i++);
        cout<<i<<" ";
}