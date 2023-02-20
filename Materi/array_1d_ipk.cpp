#include<iostream>
using namespace std;
main()

{ //1 dimensi, rerata ipk mahasiswa
    float mahasiswa[5],jumlah;
    int i,j,k;

    for( i = 0; i < 3; i++){
        cout<<endl<<"=========================================="<<endl;
        cout<<"FAKULTAS KE-"<<i+1<<endl;
        for(j = 0; j < 3; j++) {
            cout<<endl<<"JURUSAN KE-"<<j+1<<endl;
            for(k = 0; k < 5; k++){
                cout<<"IPK MAHASISWA KE-"<<k+1<<" = ";
                cin>>mahasiswa[k];
                jumlah = jumlah + mahasiswa[k]; } } } 
                
	cout<<endl<<"=========================================="<<endl;
    cout<<"RATA-RATA IPK SELURUH MAHASISWA =  "<<jumlah/45;
}