#include <iostream>
using namespace std;

struct detail_panjang
{
    int panjang1;
    int panjang2;
};
struct coba
{
    detail_panjang panjang;
    float lebar;
};

main(){
    coba percobaan[10];
    int n;
    int luas[10];
    int total_panjang[10];
    cout<<"SEBANYAK N = ";
    cin>>
    for(int i=1; i<=n; i++){
        cout<<"NILAI PANJANG "<<i<<" = ";
        cin>>percobaan[i].panjang.panjang1;
        cout<<"NILAI PANJANG "<<i<<" = ";
        cin>>percobaan[i].panjang.panjang2;
        cout<<"NILAI LEBAR = ";
        cin>>percobaan[i].leba
        total_panjang[i] = percobaan[i].panjang.panjang1 + percobaan[i].panjang.panjang2; 
        luas[i] = total_panjang[i] * percobaan[i].lebar;
        cout<<"TOTAL PANJANG = "<<total_panjang[i]<<endl;
        cout<<"LUAS = "<<luas[i]<<endl<<endl;
    }

   /*
    coba percobaan[2];
    float luas;

    for(int i=1; i<=2; i++){
        cout<<"DATA"<<i<<endl;
        cout<<"NILAI PANJANG "<<i<<" = ";
        cin>>percobaan[i].panjang.panjang1;
        cout<<"NILAI PANJANG "<<i<<" = ";
        cin>>percobaan[i].panjang.panjang2;
        cout<<"NILAI LEBAR = ";
        cin>>percobaan[i].lebar;

        cout<<"PANJANG 1 = "<<percobaan[i].panjang.panjang1<<endl;
        cout<<"PANJANG 2 = "<<percobaan[i].panjang.panjang2<<endl;
        cout<<"LEBAR = "<<percobaan[i].lebar<<endl<<endl;
    }
    */
}
