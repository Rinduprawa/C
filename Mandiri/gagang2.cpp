#include <iostream>
using namespace std;

int digit (int jumlah, int npm[4]) {
    cout<<"EMPAT DIGIT NPM [PISAHKAN DENGAN SPASI, AKHIRI DENGAN ENTER] = ";
    for (int i=1; i<=4; i++){
        cin>>npm[i];
        jumlah = jumlah + npm[i];
    } 
    return jumlah, npm[4];
}

void genap (int jumlah, int npm[4]) {
    if (jumlah % 2 == 0){
        cout<<"JUMLAH EMPAT DIGIT ADALAH GENAP"<<endl;
        for (int i=1; i<=4; i++) {
            for (int j=1; j<=npm[i]; j++){
                cout<<npm[i]<<" ";
            }
            cout<<endl;
        }
    }
}

void ganjil (int jumlah, int npm[4]) {
    if (jumlah % 2 != 0){
        cout<<"JUMLAH EMPAT DIGIT ADALAH GANJIL"<<endl;
        for (int i=4; i>=1; i--) {
            for (int j=1; j<=npm[i]; j++){
                cout<<npm[i]<<" ";
            }
            cout<<endl;
        }
    }
}

main() {

    int jumlah;
    int npm[4];
    char ulang;

    do {
        digit(jumlah, npm);
        genap(jumlah, npm);
        ganjil(jumlah, npm);

        cout<<endl;
        cout<<"ULANG ? [y/n] = ";
        cin>>ulang;
        cout<<endl;

    }while(ulang=='y');
}