#include <iostream>
using namespace std;

int pangkat(int b, int x) {
    if (x==0)
        return 1;
    else 
        return b * pangkat(b, x-1);
}

int main() {
    int bilangan, n;
    
    cout<<"INPUT BILANGAN = ";
    cin>>bilangan;
    cout<<"INPUT PANGKAT N = ";
    cin>>n;
    cout<<"HASIL BILANGAN PANGKAT N = "<<pangkat (bilangan, n);
}