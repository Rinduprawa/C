#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
main () 
/*{
    int kode, jumlah, harga, total=0, kembali=0, bayar;
    string nama;
    
    cout<<"=========================================="<<endl;
    cout<<"             TOKO BANGUNAN                "<<endl;
    cout<<"               JAYA ABADI                 "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Kode   Nama Barang       Harga Barang  "   <<endl<<endl;
    cout<<" 1.  Batu bata merah  : Rp       750,00"	  <<endl;
    cout<<" 2.  Besi beton       : Rp    30.000,00"   <<endl;
    cout<<" 3.  Asbes            : Rp    50.000,00"   <<endl;
    cout<<" 4.  Semen            : Rp    80.000,00"   <<endl;
    cout<<" 5.  Cat              : Rp   180.000,00"   <<endl;
    cout<<" 6.  Pasir            : Rp   560.000,00"   <<endl;
    cout<<" 7.  Kayu             : Rp 7.000.000,00"   <<endl;
    cout<<" 8.  Selesai"						      << endl;
    cout<<"=========================================="<<endl<<endl;

    do {
		cout<<"Input Kode = ";
        cin>>kode;
		
		if (kode == 1) {
			nama = "Batu Bata Merah";
			harga = 750; }
		
		else if (kode == 2) {
			nama = "Besi Beton";
            harga = 30000; } 
                
        else if (kode == 3) {
            nama = "Asbes";
            harga = 50000; }
             
		else if (kode == 4) {
            nama = "Semen";
			harga = 80000; }
			
		else if (kode == 5) {
			nama = "Cat";
			harga = 180000; }

		else if (kode == 6) {
			nama = "Pasir";
			harga = 560000; }
		
		else if (kode == 7) {
			nama = "Kayu";
			harga = 7000000; }
		
		else if (kode == 8) {
			cout<<endl;
			break; }
		
		cout<<"Jumlah barang yang dibeli = ";
		cin>>jumlah;
		total = harga * jumlah; 
		cout<<jumlah<<" "<<nama<<" = Rp"<<total<<",00"<<endl<<endl; }

    while(kode != 8);
	cout<<"=========================================="<<endl;
	cout<<"Total Belanjaan = "<<total<<endl;
	cout<<"Total Uang = "; 
	cin>>bayar;
	
	while (kembali >= 0) {
		if (bayar < total) {
			cout<<"Uang anda kurang!"<<endl<<endl;
			cout<<"Mohon inputkan Total Uang sesuai Total Pembelanjaan = "; 
			cin>>bayar;}
		else {
			kembali = bayar - total;
			cout<<"Total Kembalian = "<<kembali<<endl<<endl;
			cout<<"Terima Kasih, Silahkan Datang Kembali"; 
			break;} }
}*/

{ 
	string nama[7] = {"Batu bata merah", "Besi Beton", "Asbes", "Semen", "Cat", "Pasir", "Kayu"};  
	int harga[7] = {750, 30000, 50000, 80000, 180000, 560000, 7000000};
	int jumlah[7], total[7];
	
    cout<<"=========================================="<<endl;
    cout<<"             TOKO BANGUNAN                "<<endl;
    cout<<"               JAYA ABADI                 "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Kode   Nama Barang       Harga Barang  "   <<endl<<endl;
    cout<<" 1.  Batu bata merah  : Rp       750,00"	  <<endl;
    cout<<" 2.  Besi beton       : Rp    30.000,00"   <<endl;
    cout<<" 3.  Asbes            : Rp    50.000,00"   <<endl;
    cout<<" 4.  Semen            : Rp    80.000,00"   <<endl;
    cout<<" 5.  Cat              : Rp   180.000,00"   <<endl;
    cout<<" 6.  Pasir            : Rp   560.000,00"   <<endl;
    cout<<" 7.  Kayu             : Rp 7.000.000,00"   <<endl;
    cout<<" 8.  Selesai"						      << endl;
    cout<<"=========================================="<<endl<<endl;	
    
    do {
	cout<<"Jenis Barang yang Dibeli = ";
	cin>>jenis;
	for (i=1
		cout<<"Input Kode = ";
        cin>>kode;
        
        if (kode == 1) {
			cin>>nama[1];
			cin>>harga[1];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[1];
			total[1] = harga[1] * jumlah[1]; } 		

        else if (kode == 2) {
			cin>>nama[2];
			cin>>harga[2];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[2];
			total[2] = harga[2] * jumlah[2]; } 		

        else if (kode == 3) {
			cin>>nama[3];
			cin>>harga[3];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[3];
			total[3] = harga[3] * jumlah[3]; } 	
			
        else if (kode == 4) {
			cin>>nama[4];
			cin>>harga[4];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[4];
			total[4] = harga[4] * jumlah[4]; } 		

        else if (kode == 5) {
			cin>>nama[5];
			cin>>harga[5];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[5];
			total[5] = harga[5] * jumlah[5]; } 	

        else if (kode == 6) {
			cin>>nama[6];
			cin>>harga[6];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[6];
			total[6] = harga[6] * jumlah[6]; } 		

        else if (kode == 7) {
			cin>>nama[7];
			cin>>harga[7];
			cout<<"Jumlah barang yang dibeli = ";
			cin>>jumlah[7];
			total[7] = harga[7] * jumlah[7]; } 
		
		else 
			break;
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
}

{
	for (i=1; i<item; i++) {
		
{

	int jum_beli, bayar,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;


	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_beli; //Pengguna memasukan jumlah beli
	

		
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA MINI MARKET ABC"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;

	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	cout<<"Kembali      : Rp."<<(bayar-tot)<<endl; // Menampilkan uang kembali
	
	
	
	
}
