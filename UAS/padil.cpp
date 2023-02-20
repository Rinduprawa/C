#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

void pilihan_makan(){
    cout << "=== SELAMAT DATANG DI RESTO ITATS=== " << endl;
    cout << "=========== MENU MAKANAN =========== " << endl;
    cout << "1. Ayam Geprek         Rp 15.000,-   " << endl;
    cout << "2. Ayam Penyet         Rp 13.000,-   " << endl;
    cout << "3. Soto Ayam           Rp 12.000,-   " << endl;
    cout << "4. Mie Ayam            Rp 10.000,-   " << endl;
    cout << "==================================== " << endl;
}

int kembalian(int bayar, int total_bayar){
    return bayar-total_bayar;
}

int main (){

    int i=0, a, x=0, y=0, makanan, minuman, harga_makanan[100], harga_minuman[100], jumlah_makanan[100], jumlah_minuman[100];
    int menu_minum, total_biayamakan[100], total_biayaminum[100], bayar_makanan, bayar_minuman, total_bayar, bayar, kembali;
    char pesan_makanlagi, pesan_minum, suhu_teh, tanya_suhu;
    char ulang_program;
    string nama_makanan[100], nama_minuman[100];
    char minumlagi;
    do{
    pilihan_makan();

    pilihmakan_benar:
    while (1){
    cout << "Silahkan pesan makanan anda : ";
    cin >> makanan;

        if (makanan == 1){
            nama_makanan[i] = "Ayam Geprek";
            harga_makanan[i] = 15000;
                cout << "- " << nama_makanan[i] << " -" << endl;
                cout << " berapa " << nama_makanan[i] << " yang anda pesan : ";
                cin >> jumlah_makanan[i];

        } else if (makanan == 2){
            nama_makanan[i] = "Ayam Penyek";
            harga_makanan[i] = 13000;
                cout << "- " << nama_makanan[i] << " -" << endl;
                cout << " berapa " << nama_makanan[i] << " yang anda pesan : ";
                cin >> jumlah_makanan[i];

        } else if (makanan == 3){
            nama_makanan[i] = "Soto Ayam";
            harga_makanan[i] = 12000;
                cout << "- " << nama_makanan[i] << " -" << endl;
                cout << " berapa " << nama_makanan[i] << " yang anda pesan : ";
                cin >> jumlah_makanan[i];

        } else if (makanan == 4){
            nama_makanan[i] = "Mie Ayam";
            harga_makanan[i] = 10000;
                cout << "- " << nama_makanan[i] << " -" << endl;
                cout << " berapa " << nama_makanan[i] << " yang anda pesan : ";
                cin >> jumlah_makanan[i];
                
        } else {
            cout << "hanya ada 4 pilihan menu makan" << endl;
        }
        i++;
        x++;

    pilihdenganbenar:
    cout << "\napakah anda ingin memesan makanan lain? (y/n) ";
    cin >> pesan_makanlagi;
    cout << endl;

        if (pesan_makanlagi == 'y'){
            cout << "pilih menu kembali" << endl;
        } else if (pesan_makanlagi == 'n'){
            cout << "--------------------------------------------" << endl;
            pilihpesanandenganbenar:
            cout << "apakah anda juga ingin memesan minum? (y/n) ";
            cin >> pesan_minum;
                if (pesan_minum == 'y'){
                    a=1;
                    break;
                } else if (pesan_minum == 'n'){
                    cout << "pesanan anda sedang diproses . . .\n"<<endl;
                    a=2;
                    break;
                } else {
                    cout << "pilih 'y' atau 'n'" << endl;
                    goto pilihpesanandenganbenar;
                } 
        
        } else {
            cout << "pilihannya hanya 'y' sama 'n'" << endl;
            goto pilihdenganbenar;
        }
    }
    cout << "======== MENU MINUMAN ========= " << endl;
    cout << "1. Es Teh / Teh Hangat Rp 3.000,-    " << endl;
    cout << "2. Es Jeruk            Rp 4.000,-    " << endl;
    cout << "3. Es Buah             Rp 5.000,-    " << endl;
    cout << "4. Jus Avocado         Rp 8.000,-    " << endl;
    cout << "===============================      " << endl;
    i=0;
    while (a<2){
    cout << "Silahkan pesan minuman anda : ";
    cin >> minuman;

        if (minuman == 1){
                cout << "pesan Es Teh / Teh Hangat ? (d/p) ";
                cin >> suhu_teh;
                    if (suhu_teh == 'd'){
                        nama_minuman[i] = "Es Teh";
                        harga_minuman[i] = 3000;
                            cout << "- Es Teh -" << endl;
                            cout << " berapa Es Teh yang anda pesan : ";
                            cin >> jumlah_minuman[i];
                            
                    } else if (suhu_teh == 'p'){
                        nama_minuman[i] = "Teh Panas";
                        harga_minuman[i] = 3000;
                        cout << "- Teh Panas -" << endl;
                        cout << " berapa Teh Panas yang anda pesan : ";
                        cin >> jumlah_minuman[i];
                        
                    } else {
                        cout << "\nhanya tersedia panas atau dingin, bukan sumer atau gaenak badan" << endl;
                    }
            } else if (minuman == 2){
                nama_minuman[i] = "Es Jeruk";
                harga_minuman[i] = 4000;
                    cout << "- " << nama_minuman[i] << " -" << endl;
                    cout << " berapa " << nama_minuman[i] << " yang anda pesan : ";
                    cin >> jumlah_minuman[i];
            } else if (minuman == 3){
                nama_minuman[i] = "Es Buah";
                harga_minuman[i] = 5000;
                    cout << "- " << nama_minuman[i] << " -" << endl;
                    cout << " berapa " << nama_minuman[i] << " yang anda pesan : ";
                    cin >> jumlah_minuman[i];
            } else if (minuman == 4){
                nama_minuman[i] = "Jus Avocado";
                harga_minuman[i] = 8000;
                    cout << "- " << nama_minuman[i] << " -" << endl;
                    cout << " berapa " << nama_minuman[i] << " yang anda pesan : ";
                    cin >> jumlah_minuman[i];
            } else {
                cout << "hanya ada 4 pilihan menu minuman" << endl;
            }   

        i++;
        y++;
        
    cout << "\napakah anda ingin memesan minuman lain? (y/n) ";
    cin >> minumlagi;

        if (minumlagi == 'y'){
            cout << "pilih menu kembali" << endl;
        } else if(minumlagi == 'n') {
            cout << "pesanan anda sedang diproses . . .\n"<<endl;
            break;
        }
    }

    cout << "============================ STRUK PEMBELIAN ============================" << endl;
    cout << "NO" << setw(20) << "PESANAN" << setw(20) << "JUMLAH" << setw(25) << "TOTAL HARGA" << endl;
    for(i=0; i < x; i++) {
        total_biayamakan[i] = jumlah_makanan[i]*harga_makanan[i];
    cout << i + 1 << ". " << setw(21) << nama_makanan[i] << setw(16) << jumlah_makanan[i] << setw(25) << total_biayamakan[i] << endl;
        } 
    for (int i = 0; i < y; i++){
        total_biayaminum[i] = jumlah_minuman[i]*harga_minuman[i];
    cout << i+x+1 << ". " << setw(21) << nama_minuman[i] << setw(16) << jumlah_minuman[i] << setw(25) << total_biayaminum[i] << endl;
        }
    cout << "-------------------------------------------------------------------------" << endl;

    bayar_makanan = 0;
    for (i = 0; i < x; i++){
        bayar_makanan += total_biayamakan[i];
    }
    bayar_minuman = 0;
    for (i = 0; i < y; i++){
        bayar_minuman += total_biayaminum[i];
    }
    total_bayar = bayar_makanan + bayar_minuman;
    cout << "\t\t\t\t\t\t   total Rp. " << total_bayar << endl; 
    cout << "-------------------------------------------------------------------------" << endl;

    do {
    cout << "\t masukkan uang anda         :" << "\t   " << "Rp. ";
    cin >> bayar;
        if (bayar < total_bayar){
            cout << "\t\t\t  maaf, uang anda kurang" << endl;
        }
    } while (bayar < total_bayar);

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "\t kembalian anda             :" << "\t   Rp. " << kembalian(bayar, total_bayar) << endl;
    cout << "===============================TERIMAKASIH===============================" << endl;

    cout << "apakah anda ingin mengulang program?[y/n] : "; cin >> ulang_program;
        if (ulang_program == 'n'){
            cout << "program selesai" << endl;
        }
    } while (ulang_program == 'y');

    return 0;
}