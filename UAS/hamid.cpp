#include<iostream>
using namespace std;

int jumlah_penumpang,tanggal[100],i;

// fungsi ke 1 memasuk kan value/ nilai array

void input_array(){
    cout<<"program tanggal keberangkatan "<<endl;
    cout<<"Masukan jumlah penumpang : ";cin>>jumlah_penumpang;
    cout<<"Masukan tanggal keberangkatan "<<endl;

}

// fungsi ke 2 looping untuk memasukan tanggal tiap penumpang

void loop(){
     for(i = 0; i < jumlah_penumpang; i++){
        cout<<"penumpang ke "<<i+1<<" : ";
        cin>>tanggal[i];//tanggal dimasukan kedalam array
    }
}


// fungsi ke 3 untuk perkondisaian

void perkondisian(){

    //looping untuk mengecek semua isi array

     for(i = 0; i < jumlah_penumpang ; i++ ){

            //jika penumpang dapat tanggal 1 - 11 maka mendapatkan kelas 1
            if(tanggal[i] >= 1  && tanggal[i] <= 11 ){

                cout<<"penumpang ke "<<i+1;
                cout<<" dapat kereta kelas 1"<<endl;
            
            //jika penumpang dapat tanggal 12 - 21 maka mendapatkan kelas 2
            }else if(tanggal[i] >= 12 && tanggal[i] <=21){

                cout<<"penumpang ke "<<i+1;
                cout<<" dapat kereta kelas 2"<<endl;

            //jika penumpang dapat tanggal 22 - 31 maka mendapatkan kelas 3
            }else if(tanggal[i] >= 22 && tanggal[i] <= 31){

                cout<<"penumpang ke "<<i+1;
                cout<<" dapat kereta kelas 3"<<endl;

            //jika penumpang menginputkan angka selain 1-31 maka hasil tidak ada
            }else{
                cout<<"penumpang ke "<<i+1;
                cout<<" Tidak ada kereta "<<endl;

            }

        }
}


int main(){

    //memanggil semua fungsi ke program utama/main

    input_array();
    loop();
    perkondisian();
 
}