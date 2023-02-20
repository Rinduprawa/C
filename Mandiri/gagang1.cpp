#include <iostream>
using namespace std;

main(){

    int n, i, pil, besar, kecil, kali;
    int bil[50];
    char ulang;
    
    do{
        cout<<"INPUT SEJUMLAH N BILANGAN = ";
        cin>>n;

        for(i=1; i<=n; i++){
            cout<<"BILANGAN KE-"<<i<<" [BIL GANJIL]= ";
            cin>>bil[i];
            if (bil[i] % 2 == 0) {
                do{
                    cout<<"BILANGAN KE-"<<i<<" [BIL GANJIL]= ";
                    cin>>bil[i];
                }while (bil[i] % 2 == 0);
            }
        }

        cout<<endl;
        do {
            cout<<"PILIHAN : "<<endl;
            cout<<"1. MENENTUKAN BILANGAN TERKECIL DARI N BILANGAN TERSEBUT"<<endl;
            cout<<"2. MENENTUKAN BILANGAN TERBESAR DARI N BILANGAN TERSEBUT"<<endl;
            cout<<"3. MENENTUKAN HASIL PERKALIAN DARI KE-N BILANGAN TERSEBUT"<<endl;
            cout<<"INPUTKAN PILIHAN ANDA [1-3] = ";
            cin>>pil;
            if (pil<1 || pil>3){
                do{
                    cout<<"INPUTKAN PILIHAN ANDA [1-3] = ";
                    cin>>pil;
                }while (pil<1 || pil>3);
            }

            if (pil==1){
                besar=bil[1];
                for (i=2; i<=n; i++) {
                    if (besar < bil[i]) {
                        besar=bil[i]; 
                    }
                }
                cout<<"BILANGAN TERBESAR ADALAH = "<<besar<<endl<<endl;

            }else if (pil==2){
                kecil=bil[1];
                for (i=2; i<=n; i++) {
                    if (kecil > bil[i]) {
                        kecil=bil[i];
                    }
                }
                cout<<"BILANGAN TERKECIL ADALAH = "<<kecil<<endl<<endl;

            }else if (pil==3){
                kali=1;
                for (i=1; i<=n; i++){
                    kali = kali * bil[i];
                }
                cout<<"HASIL PERKALIAN ADALAH = "<<kali<<endl<<endl;
            }

            cout<<"TEKAN [p] UNTUK MENGULANG PILIHAN  "<<endl;
            cout<<"TEKAN [n] UNTUK MENGULANG PROGRAM : ";
            cin>>ulang;
            cout<<endl;

        }while (ulang=='p');
    }while (ulang=='n');
}