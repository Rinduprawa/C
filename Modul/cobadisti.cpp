#include <iostream>
#include <string.h>
using namespace std;

void daftar()
{
    cout<<"=========================================="<<endl;
    cout<<"             TOKO BANGUNAN                "<<endl;
    cout<<"               JAYA ABADI                 "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Kode   Nama Barang           Harga Barang "<<endl<<endl;
    cout<<" 1.  Batu bata merah  :    Rp       750,00"<<endl;
    cout<<" 2.  Besi beton       :    Rp    30.000,00"<<endl;
    cout<<" 3.  Asbes            :    Rp    50.000,00"<<endl;
    cout<<" 4.  Semen            :    Rp    80.000,00"<<endl;
    cout<<" 5.  Cat              :    Rp   180.000,00"<<endl;
    cout<<" 6.  Pasir            :    Rp   560.000,00"<<endl;
    cout<<" 7.  Kayu             :    Rp 7.000.000,00"<<endl;
    cout<<" 8.  Selesai"                              <<endl;
    cout<<"=========================================="<<endl<<endl;
}

void perhitungan() 
{
	string barang[7] = {"Batu bata merah", "Besi Beton", "Asbes", "Semen", "Cat", "Pasir", "Kayu"};
	int harga[7] = {725, 30000, 50000, 80000, 180000, 560000, 7000000};
	int kode, jumlah, total = 0, bayar=0; 
		
	do {
	    cout<<"Masukkan Kode Barang = ";
		cin>>kode;
		if(kode<=7) {
			cout<<"Jumlah Barang = ";
			cin>>jumlah;
			total += harga[kode-1] * jumlah;
			cout<<jumlah<<" "<<barang[kode-1]<<" = Rp. "<<harga[kode-1] * jumlah<<endl<<endl; 
        }

        else if (kode==8) {
            cout<<"=========================================="<<endl;
		    cout<<"Total Belanjaan = "<<total<<endl;
			do {
                cout<<"Total Uang = "; 
			    cin>>bayar;
                if (bayar<total) {
                    cout<<"Maaf, Uang Anda Kurang"<<endl<<"Silahkan Input Kembali"<<endl<<endl; 
                } 
            }
            while (bayar<total);
            cout<<"Total Kembalian = "<<bayar-total<<endl<<endl; 
        }
            
        else {
            cout<<"Kode Tidak Valid!"<<endl;
            cout<<"Silahkan Masukkan Kode Kembali"<<endl<<endl; 
        }		
	}
	while(kode!=8);
}

int main() 
{
    char next;
    while (true)
    {
        daftar();
        perhitungan();
    
		cout<<"Terima kasih"<<endl;
		cout<<"=========================================="<<endl<<endl;
		cout<<"Press 'y' to next"<<endl;
		cin>>next;
		cout<<endl;
		if (next != 'y') {
			break; 
        } 
    }
}