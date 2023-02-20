#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void tampilan() {
		cout << "Kode Barang" << endl;
		cout << "1. Batu bata merah	: Rp 725" << endl;
		cout << "2. Besi beton 		: Rp 30.000" << endl;
		cout << "3. Asbes 		: Rp 50.000" << endl;
		cout << "4. Semen 		: Rp 80.000" << endl;
		cout << "5. Cat			: Rp 180.000" << endl;
		cout << "6. Pasir 		: Rp 560.000" << endl;
		cout << "7. Kayu 		: Rp 7.000.000" << endl;
		cout << "8. TOTAL HARGA" << endl;
}
void data() {
	
	int kode,jmlh,total;
		string nama[7] = {"Batu bata merah","Besi Beton","Asbes","Semen","Cat","Pasir","Kayu"};
		int harga[7] = {725,30000,50000,80000,180000,560000,7000000};
		total = 0; 
		
		do{
			cout << "Masukkan Kode Barang : ";
			cin >> kode;
			if(kode <= 7){
				cout << "Jumlah Barang : ";
				cin >> jmlh;
				total += harga[kode-1]*jmlh;
				cout << jmlh << " " << nama[kode-1] << " = Rp. " << harga[kode-1]*jmlh << endl;
			} else
				cout << "TOTAL BAYAR : " << total << endl;
		}
		while(kode != 8);
}
int main() {
			tampilan();
			data();
}
