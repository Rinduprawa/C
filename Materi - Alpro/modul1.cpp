#include <iostream>
using namespace std;
main () 
{

    int kode, jumlah, harga, total, bayar;
    string nama, next; 
    
    while (true){
			
    cout<<"=========================================="<<endl;
    cout<<"             TOKO BANGUNAN                "<<endl;
    cout<<"               JAYA ABADI                 "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Kode   Nama Barang       Harga Barang  "<<endl<<endl;
    cout<<" 1.  Batu bata merah  : Rp       750,00"<<endl;
    cout<<" 2.  Besi beton       : Rp    30.000,00"<<endl;
    cout<<" 3.  Asbes            : Rp    50.000,00"<<endl;
    cout<<" 4.  Semen            : Rp    80.000,00"<<endl;
    cout<<" 5.  Cat              : Rp   180.000,00"<<endl;
    cout<<" 6.  Pasir            : Rp   560.000,00"<<endl;
    cout<<" 7.  Kayu             : Rp 7.000.000,00"<<endl;
    cout<<" 8.  Selesai"<< endl;
    cout<<"=========================================="<<endl<<endl;
	
		do {
			cout<<"Input Kode = ";
			cin>>kode;

			switch (kode) 
			{
				case 1: 
					nama = "Batu Bata Merah";
					harga = 750;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
                
				case 2: 
					nama = "Besi Beton";
					harga = 30000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
                
				case 3: 
					nama = "Asbes";
					harga = 50000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
                
				case 4: 
					nama = "Semen";
					harga = 80000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
               
				case 5: 
					nama = "Cat";
					harga = 180000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
                
				case 6: 
					nama = "Pasir";
					harga = 560000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp" <<total<<",00"<<endl<<endl;
					break;
                           
                
				case 7: 
					nama = "Kayu";
					harga = 7000000;
					cout<<"Jumlah barang yang dibeli = ";
					cin>>jumlah;
					total += harga * jumlah; 
					cout<<jumlah<<" "<<nama<<" = Rp"<<total<<",00"<<endl<<endl;
					break;
					
				case 8 :
					cout<<"=========================================="<<endl;
					cout<<"Total Belanjaan = "<<total<<endl;
					cout<<"Total Uang = "; 
					cin>>bayar;
					if (bayar < total) {
						cout<<"Uang anda kurang!"<<endl<<endl;
						cout<<"Mohon inputkan Total Uang sesuai Total Pembelanjaan = ";
						cin>>bayar;
						cout<<"Total Kembalian = "<<bayar-total<<endl<<endl<<endl; }
					else 
						cout<<"Total Kembalian = "<<bayar-total<<endl<<endl<<endl;
					break;
					

				default : 
					cout<<"Nomor tidak valid!"<<endl;
					break; } }
					
		while(kode != 8);
		
		cout<<"Terima kasih"<<endl<<endl;
		cout<<"=========================================="<<endl<<endl;
		cout<<"Press 'y' to next"<<endl;
		cin>>next;
		cout<<endl;
		if (next != "y") {
			break; } }
}

