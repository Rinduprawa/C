#include <iostream>
using namespace std;

int input () {
    int n;
    cout<<"INPUTKAN N = ";
    cin>>n;
    return n;
}

void cetak(int m) {
    int i;
    for (i=1; i<=m; i++)
        cout<<i<<" ";
}

int main() {
    cetak(input());
}