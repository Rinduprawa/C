#include<iostream>
using namespace std;

int fibonacci(int y) {

    if (y==0 || y==1) {
        return y;
    }
    else {
        return fibonacci(y-1) + fibonacci (y-2);
    }
}

int main() {

    int n, i, x=1;

    cout<<"INPUT DERET FIBONACCI SEBANYAK N = ";
    cin>>n;

    for(i=1; i<=n; i++) {
        cout<<fibonacci(x)<<" ";
        x++;
    }
}




/*{
    int n, n1=0, n2=1, hasil=0;

    cout<<"input sejumlah n = ";
    cin>>n;

    for(int i=1; i<n; i++) {
        if (i==0)
            cout<<n1<<", ";
        else if (i==2)
            cout<<n2<<", ";
        
        hasil = n1 +n2;
        n1=n2;
        n2=hasil;

        cout<<hasil<<", ";
    }

}*/