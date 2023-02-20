#include <iostream>
using namespace std;

void cetakjumlah(){
    cout<<endl<<"jumlah semua bilangan adalah ";
}

void cetaksalah(){
    cout<<"n harus lebih dari 0!";
}

void input (){
    cout<<"input n bilangan = ";
}

main(){
    int bil[50];
    int i, n, jumlah = 0;
    char ulang;

    do{
        input();
        cin>>n;

        if (n>0) {
            for(i=0; i<n; i++){
                cout<<"bilangan ke-"<<i+1<<" : ";
                cin>>bil[i];
                jumlah = jumlah +bil [i];
            }
            cetakjumlah();
            cout<<jumlah;
        }else{
            cetaksalah();
        } 
        cout<<endl<<endl<<"ulang program? (y/n) :";
        cin>>ulang;

    }while(ulang == 'y');
}

