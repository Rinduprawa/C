#include<iostream>
#include<string.h>

using namespace std;

string merubahAngkaKeTulisan(int angka){
    string value = "";
    
    if(angka == '1'){
        value = "Satu";
    }else if(angka == '2'){
        value = "Dua";
    }else if(angka == '3'){
        value = "Tiga";
    }else if(angka == '4'){
        value = "Empat";
    }else if(angka == '5'){
        value = "Lima";
    }else if(angka == '6'){
        value = "Enam";
    }else if(angka == '7'){
        value = "Tujuh";
    }else if(angka == '8'){
        value = "Delapan";
    }else if(angka == '9'){
        value = "Sembilan";
    }else if(angka == '0'){
        value = "Nol";
    }

    return value;
}

int main(){
    int digit[10];

    do{
        cout << "Masukkan 4 digit angka : ";
        cin>>digit;
    }while(digit[0] == 0 || digit[1] == 0 || digit[2] == 0 || digit[3] == 0 || digit[4] != 0);

    cout << "\n";
    

        cout << "Digit Ke 1 = " << merubahAngkaKeTulisan(digit[0]) << endl;
        cout << "Digit Ke 2 = " << merubahAngkaKeTulisan(digit[1]) << endl;
        cout << "Digit Ke 3 = " << merubahAngkaKeTulisan(digit[2]) << endl;
        cout << "Digit Ke 4 = " << merubahAngkaKeTulisan(digit[3]) << endl;

    return 0;
}
