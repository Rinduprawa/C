#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

void daftar()
{
    cout<<"======================================================================"<<endl;
    cout<<"                      TOKO BANGUNAN JAYA ABADI                        "<<endl;
    cout<<"======================================================================"<<endl;
    cout<<"Kode            Nama Barang                             Harga Barang  "<<endl<<endl;
    cout<<" 1.          Batu bata merah             :            Rp       750,00 "<<endl;
    cout<<" 2.          Besi beton                  :            Rp    30.000,00 "<<endl;
    cout<<" 3.          Asbes                       :            Rp    50.000,00 "<<endl;
    cout<<" 4.          Semen                       :            Rp    80.000,00 "<<endl;
    cout<<" 5.          Cat                         :            Rp   180.000,00 "<<endl;
    cout<<" 6.          Pasir                       :            Rp   560.000,00 "<<endl;
    cout<<" 7.          Kayu                        :            Rp 7.000.000,00 "<<endl;
    cout<<"======================================================================"<<endl<<endl;
}


int main (){

    int harga[100], jumlah[100], sub_total[100], uang, kembali;
    int kode, i, x, y, total_bayar;
    char lanjut, ulang;
    string barang[100];

    while (true)
    {
        i=0;
        x=1;
        y=1;
        total_bayar=0;

    do{ 
    
    cout<<"Inputkan Kode Pesanan Anda : ";
    cin>>kode;
        if (kode == 1)
        {
            barang[i] = "Batu Bata Merah";
            harga[i] = 725;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 2)
        {
            barang[i] = "Besi Beton";
            harga[i] = 30000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 3)
        {
            barang[i] = "Asbes";
            harga[i] = 50000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 4)
        {
            barang[i] = "Semen";
            harga[i] = 80000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 5)
        {
            barang[i] = "Cat";
            harga[i] = 180000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 6)
        {
            barang[i] = "Pasir";
            harga[i] = 560000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else if (kode == 7)
        {
            barang[i] = "Kayu";
            harga[i] = 7000000;
            cout<<"Jumlah Barang yang Anda Beli  : ";
            cin>>jumlah[i];
            cout<<jumlah[i]<<" "<<barang[i]<<endl;
        } 
        else 
        {
            cout<<"Kode Barang Salah!"<<endl;
        }

        cout<<endl<<"Apakah ada Pesanan Lain? (y/n) : ";
        cin>>lanjut;
            if (lanjut != 'y')
            {
                cout<<endl<<"Pesanan Anda Sedang Diproses . . ."<<endl;
                break;
            }
        i++;
        y++;
    } 
    while (lanjut == 'y');

    cout<<"======================================================================"<<endl;
    cout<<"                           STRUK PEMBELIAN                            "<<endl;
    cout<<"                      TOKO BANGUNAN JAYA ABADI                        "<<endl;
    cout<<"======================================================================"<<endl;
    cout<<"No. "<<setw(15)<<"Barang"<<setw(15)<<"Jumlah"<<setw(15)<<"Harga"<<setw(19)<<"Sub Total"<<endl;
    cout<<"======================================================================"<<endl;
    for (int i = 0; i < y; i++)
    {
        sub_total[i] = jumlah[i]*harga[i];
        cout<<x<<". "<<setw(19)<<barang[i]<<setw(10)<<jumlah[i]<<setw(17)<<harga[i]<<setw(18)<<sub_total[i]<<endl;
        total_bayar += sub_total[i];        
        x++;
    }
    cout<<"======================================================================"<<endl;

    cout<<"\t\t  Total Pembelian Anda Sebesar Rp. "<<total_bayar<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    
    do 
    {
    cout<<"             Total Uang Anda       :       Rp. "; 
        cin>>uang;
        if (uang<total_bayar)
            cout<<"             Maaf, Uang Anda Kurang, Silahkan Input Kembali"<<endl;
    } 
    while (uang<total_bayar);

    kembali = uang  -total_bayar;
    cout<<"             Kembalian Anda        :       Rp. "<<kembali<<endl;
    cout<<"======================================================================"<<endl;
    cout<<"                             TERIMA KASIH                             "<<endl;
    cout<<"======================================================================"<<endl;
		
    cout<<"Press 't' to next"<<endl;
	cin>>ulang;
	cout<<endl;
	if (ulang != 't'){
		break; } 
    }
}
