#include <iostream>
using namespace std;

main(){
    char ulang;

    do{
        char menu;
        int n=1, k=1;
        int banyak[50];
        float rerata=0, jumlah=0, terbanyak=0, bil[50]={0};

        cout<<"Daftar Menu : "<<endl;
        cout<<"a. Menginputkan N bilangan"<<endl;
        cout<<"b. Mencari Nilai Modus dari Bilangan yang Diinputkan"<<endl;
        cout<<"c. Mencari Nilai Mean dari Bilangan yang Diinputkan"<<endl;
        do {
            cout<<"Input Menu [a/b/c] : ";
            cin>>menu;
            if(menu != 'a' && menu!='b' && menu!='c'){
                do{
                    cout<<"Inputan Salah, Input Menu [a/b/c] : ";
                    cin>>menu;
                }while(menu != 'a' && menu!='b' && menu!='c');
            }

            if(menu=='a'){
                cout<<endl<<"Inputkan Sejumlah N Bilangan : ";
                cin>>n;
                if(n<1){
                    do{
                        cout<<"N harus lebih dari 1! N : ";
                        cin>>n;
                    }while(n<1);
                }
                for (int i=1; i<=n; i++){
                    cout<<"Bilangan ke-"<<i<<" : ";
                    cin>>bil[i];
                    jumlah = jumlah + bil[i];
                }
            }
            
            else if(menu=='b'){
                for(int i=1;i<=n;i++){
                    banyak[i]=0;
                    for(int j=1;j<=n;j++){
                        if(bil[i]==bil[j]){
                            banyak[i]++;
                        }
                    }
                }
                
                for(int i=1;i<=n;i++){
                    if(banyak[i]>k){
                        k=banyak[i];
                        terbanyak=bil[i];
                    }
                }

                if (terbanyak==0){
                    cout<<endl<<"Tidak Ada Modus"<<endl;
                }else{
                    cout<<endl<<"Modus adalah : "<<terbanyak<<" , Sebanyak "<<k<<" Data"<<endl;
                }
            }
            
            else if(menu=='c'){
                rerata = jumlah / n;
                cout<<endl<<"Mean atau Rata-Rata dari Sejumlah N Bilangan adalah : "<<rerata<<endl;
            }
            
            cout<<endl<<"Tekan [y] untuk Lanjut ke Menu b dan c";
            cout<<endl<<"Tekan [x] untuk Kembali ke Input Menu a";
            cout<<endl<<"Pilih : ";
            cin>>ulang;
            cout<<endl;
        }while(ulang=='y');
    }while(ulang=='x');
}