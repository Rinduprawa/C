#include <iostream>
#include <string.h>
using namespace std;

int main ()

/*{ //STUDI KASUS NO 5 (IF)
	
	int waktu, harga, diskon; 
	string member, bronze, silver, gold, tidak;

	
	cout<<"Sewa = ";
	cin>>waktu;
	harga = 130000 * waktu;
	
	cout<<"Jenis Member = ";
	cin>>member;
	
	if (member == bronze) {
		diskon = harga - 5000;
		cout<<"Total harga = Rp"<<diskon; }
		
	else if (member == silver) {
		diskon = harga - 7000;
		cout<<"Total harga = Rp"<<diskon; }
		
	else if (member == gold){
		diskon = harga - 10000;
		cout<<"Total harga = Rp"<<diskon<<" dan free 2 botol air mineral 1,5 liter"; }
	
	else if (member == tidak)
		cout<<"Total harga = Rp"<<harga;
	
	return 0;
}*/

/*{ //STUDI KASUS NO 5 (CASE)
	int kode, harga, total, jam;


        cout<<"Kode Member = ";
        cin>>kode;

        switch (kode) 
        {
            case 1: 
                harga = 130000 - 5000;
                cout<<"Total waktu (jam) = ";
                cin>>jam;
                total = harga * jam; 
                cout<<"Member Bronze, Total bayar = "<<total<<endl<<endl;
                break;
                
            case 2: 
                harga = 130000 - 7000;
                cout<<"Total waktu (jam) = ";
                cin>>jam;
                total = harga * jam; 
                cout<<"Member Silver, Total bayar = "<<total<<endl<<endl;
                break;
                
            case 3: 
                harga = 130000 - 10000;
                cout<<"Total waktu (jam) = ";
                cin>>jam;
                total += harga * jam; 
                cout<<"Member Gold, Total bayar = "<<total<<" dan Free 2 botol air mineral 1,5 liter"<<endl<<endl;
                break;
            
            case 4: 
                harga = 130000; 
                cout<<"Non-member, Total bayar = "<<harga<<endl<<endl;
                break;           
            
            default : 
                cout<<"Kode tidak valid!"<<endl;
                break; 
        }
}*/

/*{ //STUDI KASUS NO 1

    int q,w;
    int tk = 250000,ts = 500000, tb = 1000000;


    cout<<"======== Persewaan tenda pesta ========"<<endl<<endl;
    cout<<"1. Tenda kecil untuk tenant Rp. 250.000.000/hari. "<<endl;
    cout<<"2. Tenda untuk kapasitas max 150 orang Rp 500.000/hari. "<<endl;
    cout<<"3. Tenda besar untuk kapasitas 500+ orang 1.000.000./hari. "<<endl<<endl;
    cout<<"Input pilhan anda menggunakan angka (1-3)  :  ";
    cin>> q;
    cout<<"Anda menyewa untuk berapa hari?  :  ";
    cin>> w;

	if (q==1){
		tk =  tk * w;
		cout<<"Total biaya penyewaan : Rp, "<<tk<<" ,- "  ;
		}
	else if (q==2){
		ts = ts * w;
		cout<<"Total biaya penyewaan : Rp, "<<ts<<" ,- "  ;
		}
	else if (q==3){
		tb = tb * w;
		cout<<"Total biaya penyewaan : Rp, "<<tb<<" ,- " ;
		}
	else{
    cout<<"Masukan inputan dengan benar!! ";
		}
}*/

/*{

	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"PROGRAM C++ KASIR"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli : ";
	cin>>jum_beli; 
	
	for (int i=0; i<jum_beli; i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah		
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

	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Dikon        : Rp."<<diskon<<endl; //Menampilkan diskon
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; // Menampilkan uang kembali
	
	
	
	
}*/

/*{ //STUDI KASUS NO 3

    int tanggal_keberangkatan, stasiun_keberangkatan, stasiun_tujuan, jumlah_penumpang, kereta;
    int umur, kursi, metode_pembayaran, harga, harga_total, uang_pembayaran, uang_kembalian;
    string nama;

    cout << "=== PEMESANAN E-TICKET ===" << endl;
    cout << "masukkan tanggal keberangkatan anda : ";
    cin >> tanggal_keberangkatan;

    cout << "\nstasiun keberangkatan : " << endl;
    cout << "1. Gubeng" << endl;
    cout << "2. Pasar Turi" << endl;
    cout << "3. Semut" << endl;
    cout << "masukkan stasiun keberangkatan (1..3) : ";
    cin >> stasiun_keberangkatan;

    cout << "\nstasiun tujuan" << endl;
    cout << "1. Malang Kota Lama" << endl;
    cout << "2. Pasar Senen" << endl;
    cout << "3. Blimbing" << endl;
    cout << "masukkan stasiun tujuan anda (1..3) : ";
    cin >> stasiun_tujuan;

    cout << "\nmasukkan jumlah penumpang : ";
    cin >> jumlah_penumpang;

    do {
        if (tanggal_keberangkatan > 20 && tanggal_keberangkatan <= 31){
            cout << "\ntidak ada kereta pada tanggal ini, " << endl;
    cout << "masukkan lagi tanggal keberangkatan anda : ";
    cin >> tanggal_keberangkatan;
        }
    } while (tanggal_keberangkatan > 20 && tanggal_keberangkatan <= 31);

    if (tanggal_keberangkatan > 0 && tanggal_keberangkatan <= 20){
        cout << "\nkereta : " << endl;
        cout << "1. Agro Wilis, harga : 250.000" << endl;
            harga = 250000;
        cout << "2. Penataran, harga : 175.000" << endl;
            harga = 175000;
        cout << "3. Kertajaya, harga : 100.000" << endl;
            harga = 100000;
        cout << "pilih kereta anda (1..3) : ";
        cin >> kereta;
    } else {
        cout << "pilih tanggal 1 - 31" << endl;
    }

    for (int i = 0; i < jumlah_penumpang; i++){
        cout << "masukkan data diri anda" << endl;
        cout << "nama : ";
        cin >> nama;
        cout << "umur : ";
        cin >> umur;
    }

    for (int i = 0; i < jumlah_penumpang; i++){
        cout << "pilih kursi penumpang ke " << i+1 << " : ";
        cin >> kursi;
    }

    cout << "\nmetode pembayaran" << endl;
    cout << "1. m-banking" << endl;
    cout << "2. ovo" << endl;
    cout << "3. dana" << endl;
    cout << "masukkan metode pembayaran (1..3) ";
    cin >> metode_pembayaran;

    harga_total = harga*jumlah_penumpang;
    cout << "\ntotal harga : " << harga_total << endl;
    cout << "\nmasukkan uang anda : ";
    cin >> uang_pembayaran;
    
    uang_kembalian = uang_pembayaran-harga_total;
    cout << "uang kembalian anda Rp. " << uang_kembalian;

    return 0;
}*/

{ //STUDI KASUS NO 3 

    int tanggal_keberangkatan, stasiun_keberangkatan, stasiun_tujuan, jumlah_penumpang, pilih_kursi[50],
    kode_kereta, kelas, harga, umur[50], harga_total, metode_pembayaran, uang_pembayaran, uang_kembalian;
    string stasiun_berangkat, stasiun_datang, nama_kereta, nama_kelas, nama[50];
    bool input;

    cout << "============= ITATS KAI EXPRESS =============" << endl;
    do{
    input = 1;
    if (input){
        cout << "masukan tanggal keberangkatan anda : ";
        cin >> tanggal_keberangkatan;
        
    }
    input = 0;
        if (tanggal_keberangkatan >= 1 && tanggal_keberangkatan <= 10){
            cout << "\nKereta yang tersedia : " << endl;
            cout << "1. KA Agro Wilis           [1]" << endl;
            cout << "2. KA Argo Bromo Anggrek   [2]" << endl;
            cout << "3. KA Penataran            [3]" << endl;
        } else if (tanggal_keberangkatan > 10 && tanggal_keberangkatan <= 15){
            cout << "\nKereta yang tersedia : " << endl;
            cout << "1. KA Kertajaya            [1]" << endl;
            cout << "2. KA Argo Bromo Anggrek   [2]" << endl;
            cout << "3. KA Tumapel              [3]" << endl;
        } else if (tanggal_keberangkatan > 15 && tanggal_keberangkatan < 21){
			cout << "tidak ada kereta di tanggal ini, silahkan pilih tanggal keberangkatan lain" << endl;
	input = 1;
        } else if (tanggal_keberangkatan > 20 && tanggal_keberangkatan <= 31){
            cout << "\nKereta yang tersedia : " << endl;
            cout << "1. KA Pandanwangi          [1]" << endl;
            cout << "2. KA Sindro               [2]" << endl;
            cout << "3. KA Agro Wilis           [3]" << endl;
    input = 0;
        } else {
            cout << "kebacut wes gede gak ngerti tanggal" << endl;
    input = 1;
        } 
    } while (input);

    do {
        cout << "Pilih kereta anda [1..3] : ";
        cin >> kode_kereta;
            if (kode_kereta > 3){
                cout << "input kode salah" << endl;
            }
    } while (kode_kereta > 3);

            if (kode_kereta == 1){
                nama_kereta = "KA Agro Wilis";
            } else if (kode_kereta == 2){
                nama_kereta = "KA Argo Bromo Anggrek";
            } else if (kode_kereta == 3){
                nama_kereta = "KA Penataran";
            } else if (kode_kereta == 4){
                nama_kereta = "KA Kertajaya";;
            } else if (kode_kereta == 5){
                nama_kereta = "KA Argo Bromo Anggrek";
            } else if (kode_kereta == 6){
                nama_kereta = "KA Tumapel";
            } else if (kode_kereta == 7){
                nama_kereta = "KA Sindro";
            } else if (kode_kereta == 8){
                nama_kereta = "KA Pandanwangi";
            } else if (kode_kereta == 9){
                nama_kereta = "KA Agro Wilis";
            }

        cout << "\nKelas Kereta : " << endl;
        cout << "1. kelas Ekonomi   Rp. 75.000" << endl;
        cout << "2. kelas Bisnis    Rp. 150.000" << endl;
        cout << "3. kelas Eksekutif Rp. 300.000" << endl;

        do{
        cout << "Pilih kelas kereta : ";
        cin >> kelas;
            if (kelas > 3){
                cout << "hanya ada 3 jenis kelas" << endl;
            }
        } while (kelas > 3);

            if (kelas == 1){
                nama_kelas ="Ekonomi";
                harga = 75000;
                    cout << "anda memilih kelas " << nama_kelas << " dengan harga tiket Rp. " << harga << " per orang\n" << endl;
            } else if (kelas == 2){
                nama_kelas = "Bisnis";
                harga = 150000;
                    cout << "anda memilih kelas " << nama_kelas << " dengan harga tiket Rp. " << harga << " per orang\n" << endl;
            } else if (kelas == 3){
                nama_kelas = "Eksekutif";
                harga = 300000;
                    cout << "anda memilih kelas " << nama_kelas << " dengan harga tiket Rp. " << harga << " per orang\n" << endl;
            }

    cout << "===== STASIUN KEBERANGKATAN & STASIUN TUJUAN =====" << endl;
    cout << "\nStasiun Keberangkatan : " << endl;
    cout << "1. Gubeng" << endl;
        stasiun_berangkat = "Gubeng";
    cout << "2. Pasar Turi" << endl;
        stasiun_berangkat = "Pasar Turi";
    cout << "3. Semut" << endl;
        stasiun_berangkat = "Semut";
    do {
        cout << "masukkan stasiun keberangkatan : ";
        cin >> stasiun_keberangkatan;
            if (stasiun_keberangkatan > 3)
                cout << "hanya ada 3 stasiun keberangkatan" << endl;
    } while (stasiun_keberangkatan > 3);

    cout << "\nStasiun Tujuan : " << endl;
    cout << "1. Malang Kota Lama" << endl;
        stasiun_datang = "Malang Kota Lama";
    cout << "2. Pasar Senen" << endl;
        stasiun_datang = "Pasar Senen";
    cout << "3. Blimbing" << endl;
        stasiun_datang = "Blimbing";
    do {
        cout << "masukkan stasiun tujuan anda : ";
        cin >> stasiun_tujuan;
            if (stasiun_tujuan > 3){
                cout << "hanya ada 3 stasiun tujuan" << endl;
            }
    } while (stasiun_tujuan > 3);

    cout << "masukkan jumlah penumpang : ";
    cin >> jumlah_penumpang;

    for(int i = 0; i < jumlah_penumpang; i++){
        cout << "===== ISI DATA DIRI =====" << endl;
        cout << "Penumpang " << i+1 << endl;
        cout << "NAMA : ";
        cin >> nama[i];
        cout << "UMUR : ";
        cin >> umur[i];
    }
        cout << "=========================" << endl;

    for (int i = 0; i < jumlah_penumpang; i++){
        cout << "pilih kursi penumpang ke - " << i+1 << ", (1-50) : ";
        cin >> pilih_kursi[i];
            if (pilih_kursi[i] > 0 && pilih_kursi[i] < 50){
                cout << "anda memilih kursi : " << pilih_kursi[i] << endl;
            } else {
                cout << " hanya ada 50 kursi dalam kereta " << endl;
            }
    }

    cout << "\nMetode pembayaran :" << endl;
    cout << "1. M - Banking" << endl;
    cout << "2. ITATS E-Payment" << endl;
    cout << "3. DAMA" << endl;
    cout << "4. OMO" << endl;

    do {
    cout << "silahkan pilih metode pembayaran anda : ";
    cin >> metode_pembayaran;
        if (metode_pembayaran > 4){
            cout << "hanya ada 4 metode pembayaran" << endl;
        }
    } while (metode_pembayaran > 4);

    cout << "\n===== KONFIRMASI DATA =====" << endl;
        for (int i = 0; i < jumlah_penumpang; i++){
            cout << "===== DATA  PENUMPANG  =====" << endl;
            cout << "Penumpang ke " << i+1 << endl;
            cout << "Nama   : " << nama[i] << endl;
            cout << "Umur   : " << umur[i] << endl;
            cout << "Kursi  : " << pilih_kursi[i] << endl;
        }
            cout << "===========================" << endl;
            harga_total = jumlah_penumpang*harga;
                cout << "Anda akan menaiki kereta " << nama_kereta << " kelas " << nama_kelas << "," << endl;
                cout << "berangkat dari stasiun " << stasiun_berangkat <<" dengan tujuan stasiun " << stasiun_datang << "." <<endl;

    cout << "harga tiket Rp. " << harga << " per orang\n" << endl;
    cout << "Total pembayaran anda adalah Rp. " << harga_total << endl;
        if (metode_pembayaran == 1){
            cout << "metode pembayaran menggunakan M - Banking" << endl;
        } else if (metode_pembayaran == 2){
            cout << "metode pembayaran menggunakan ITATS E-Payment" << endl;
        } else if (metode_pembayaran == 3){
            cout << "metode pembayaran menggunakan DAMA" << endl;
        } else if (metode_pembayaran == 4){
            cout << "metode pembayaran menggunakan OMO" << endl;
        }

    do {
        cout << "Silahkan masukkan uang anda : Rp. ";
        cin >> uang_pembayaran;
            if (uang_pembayaran < harga_total){
                cout << "maaf, uang anda kurang" << endl;
            }
    } while (uang_pembayaran < harga_total);
    cout << "\nUang anda Rp. " << uang_pembayaran << endl;

    uang_kembalian = uang_pembayaran-harga_total;
        cout << "Uang kembalian anda Rp. " << uang_kembalian << endl; 

    cout << "\nSelamat menikmati perjalanan anda" << endl;
    cout << "========== TERIMAKASIH ==========" << endl;

    return 0;
}
