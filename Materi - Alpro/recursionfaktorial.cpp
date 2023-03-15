#include <iostream>
using namespace std;

int faktorial(int x) {
    if (x==0)
        return 1;
    else 
        return x * faktorial(x - 1);
}

int main() {
    int bilangan;

    cout<<"INPUT BILANGAN = ";
    cin>>bilangan;
    cout<<"HASIL FAKTORIAL = "<<faktorial (bilangan);
}