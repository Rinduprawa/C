#include <iostream>
using namespace std;
void TokoBunga(int kode);

int main ()
{ 
	int kode;
	while(true)
	{
		cout << "=================================================" << endl;
		cout << "       Selamat Datang di Toko Bunga Haris        " << endl;
		cout << "=================================================" << endl;
		cout << "No.  | Nama Bunga/Bucket Bunga     |   Harga	  " << endl;
		cout << "=================================================" << endl;
		cout << " 1.  | Bunga Mawar 1 Tangkai       | Rp. 12.000  " << endl;
		cout << " 2.  | Bunga Mawar 2 Tangkai       | Rp. 22.000  " << endl;
		cout << " 3.  | Bunga Mawar 3 Tangkai       | Rp. 30.000  " << endl;
		cout << " 4.  | Bucket Bunga Mawar          | Rp. 155.000 " << endl;
		cout << " 5.  | Bunga Anggrek 1 Tangkai     | Rp. 11.000  " << endl;
		cout << " 6.  | Bunga Anggrek 3 Tangkai     | Rp. 27.000  " << endl;
		cout << " 7.  | Bunga Anggrek 5 Tangkai     | Rp. 41.000  " << endl;
		cout << " 8.  | Bucket Bunga Anggrek        | Rp. 185.000 " << endl;
		cout << " 9.  | Bunga Melati 1 Tangkai      | Rp. 10.000  " << endl;
		cout << "10.  | Bunga Melati 2 Tangkai      | Rp. 16.000  " << endl;
		cout << "11.  | Bunga Melati 4 Tangkai      | Rp. 30.000  " << endl;
		cout << "12.  | Bucket bunga Melati         | Rp. 105.000 " << endl;
		cout << "13.  | Mix Bunga 5 Tangkai         | Rp. 135.000 " << endl;
		cout << "14.  | Bucket Mix A                | Rp. 385.000 " << endl;
		cout << "15.  | Bucket Mix B                | Rp. 410.000 " << endl;
		cout << "=================================================" << endl;
		cout << "\nSilahkan pilih kode Bunga yang Anda inginkan!\n"
			<< "1. Mawar \n"
			<< "2. Anggrek \n"
			<< "3. Melati \n"
			<< "4. Mix (Mawar,Melati,Anggrek) \n";
		cout << "\nKetik Kode disini : ";
		cin >> kode;
		TokoBunga(kode);
		
		cout << "=================================================" << endl;
		cout<<"\nApakah ingin ulang program [y/n]: ";
        string u;
        cin>>u;
        if(u=="n"){
            break;
        }
	}
return 0;
}

void TokoBunga(int kode)
{	
	if (kode==1) {
			cout << "Varian Bunga Mawar : \n"
				<< "A. 1 Tangkai = Rp. 12000 \n"
				<< "B. 2 Tangkai = Rp. 22000 \n"
				<< "C. 3 Tangkai = Rp. 30000 \n"
				<< "D. Bucket    = Rp. 155000 \n";
		} else if (kode==2) {
			cout << "Varian Bunga Anggrek : \n"
				<< "A. 1 Tangkai = Rp. 11000 \n"
				<< "B. 3 Tangkai = Rp. 27000 \n"
				<< "C. 5 Tangkai = Rp. 41000 \n"
				<< "D. Bucket    = Rp. 185000 \n";
		} else if (kode==3) {
		cout << "Varian Bunga Melati : \n"
				<< "A. 1 Tangkai = Rp. 10000 \n"
				<< "B. 2 Tangkai = Rp. 16000 \n"
				<< "C. 4 Tangkai = Rp. 30000 \n"
				<< "D. Bucket    = Rp. 105000 \n";
		} else if (kode==4) {
		cout << "Varian Mix : \n"
				<< "A. Mix Bunga 5 Tangkai = Rp. 135000 \n"
				<< "B. Bucket  Mix A       = Rp. 385000 \n"
				<< "C. Busket Mix B        = Rp. 410000 \n";
		} else {
			cout << "Kode yang Anda masukkan salah" << endl; 
		}
}