#include <iostream>
using namespace std;

string nama, alamat, gender, keluhan, obat;
int nik, bb,tb, tensi, biaya_dokter, biaya_periksa, biaya_obat, potongan, total;
char bpjs;

void input_data(){
    cout<<"Input data-data berikut!"<<endl;
    cout<<"Nama : ";
    cin>>nama;
    cout<<"Alamat : ";
    cin>>alamat;
    cout<<"Jenis Kelamin : ";
    cin>>gender;
    cout<<"NIK : ";
    cin>>nik;
    cout<<"Berat Badan [kg]: ";
    cin>>bb;
    cout<<"Tinggi Badan [cm]: ";
    cin>>tb;
    cout<<"Tensi Darah : ";
    cin>>tensi;    
    cout<<"Keluhan Penyakit : ";
    cin>>keluhan;
    cout<<"Obat yang diberikan : ";
    cin>>obat;
}

void input_biaya(){
    cout<<"Biaya Dokter : Rp";
    cin>>biaya_dokter;
    cout<<"Biaya Pemeriksaan : Rp";
    cin>>biaya_periksa;
    cout<<"Biaya Obat : Rp";
    cin>>biaya_obat;
}

void hitung_biaya(){
    cout<<"Apakah Memiliki BPJS? [y/t]: ";
    cin>>bpjs;

    if(bpjs=='y'){
        potongan = biaya_obat * 0.25;
    }else{
        potongan = 0;
    }

    total = biaya_dokter + biaya_periksa + biaya_obat - potongan;
}

main(){
    input_data();
    input_biaya();
    hitung_biaya();

    cout<<endl;
    cout<<"================================================================"<<endl;
    cout<<"                           REKAM MEDIS                          "<<endl;
    cout<<"================================================================"<<endl;
    cout<<"NAMA                 : "<<nama<<endl;
    cout<<"ALAMAT               : "<<alamat<<endl;
    cout<<"JENIS KELAMIN        : "<<gender<<endl;
    cout<<"NIK                  : "<<nik<<endl;
    cout<<"BEBAT BADAN          : "<<bb<<" kg"<<endl;
    cout<<"TINGGU BADAN         : "<<tb<<" cm"<<endl;
    cout<<"TENSI DARAH          : "<<tensi<<" mmHg"<<endl;
    cout<<"KELUHAN PENYAKIT     : "<<keluhan<<endl;
    cout<<"OBAT YANG DIBERIKAN  : "<<obat<<endl;
    cout<<"================================================================"<<endl;
    cout<<"                              BIAYA                             "<<endl;
    cout<<"================================================================"<<endl;
    cout<<"BIAYA DOKTER         : Rp"<<biaya_dokter<<",-"<<endl;
    cout<<"BIAYA PEMERIKSAAN    : Rp"<<biaya_periksa<<",-"<<endl;
    cout<<"BIAYA OBAT           : Rp"<<biaya_obat<<",-"<<endl<<endl;
    cout<<"POTONGAN BIAYA OBAT  : Rp"<<potongan<<",-"<<endl;
    cout<<"TOTAL BIAYA          : Rp"<<total<<",-"<<endl;
    cout<<"================================================================"<<endl;

}