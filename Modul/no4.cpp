#include<iostream>
using namespace std;

main(){
    int jenis;
    string bensin[2] = {"pertalite", "pertamax"};
    char ulang;
    do{ 
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"No.          Tanggal            Jenis Bensin         Harga   "<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<" 1   Senin, 30 Januari 2023      Pertalite       Rp. 25.000,-"<<endl;
        cout<<" 2   Senin, 30 Januari 2023      Pertalite       Rp. 15.000,-"<<endl;
        cout<<" 3   Selasa, 31 Januari 2023     Pertalite       Rp. 50.000,-"<<endl;
        cout<<" 4   Selasa, 31 Januari 2023     Pertamax        Rp. 35.000,-"<<endl;
        cout<<" 5   Selasa, 31 Januari 2023     Pertalite       Rp. 12.000,-"<<endl;
        cout<<" 6   Rabu, 1 Februari 2023       Pertalite       Rp. 20.000,-"<<endl;
        cout<<" 7   Rabu, 1 Februari 2023       Pertamax        Rp. 50.000,-"<<endl;
        cout<<" 8   Rabu, 1 Februari 2023       Pertamax        Rp. 30.000,-"<<endl;
        cout<<" 9   Kamis, 2 Februari 2023      Pertamax        Rp. 55.000,-"<<endl;
        cout<<"10   Kamis, 2 Februari 2023      Pertamax        Rp. 25.000,-"<<endl;
        cout<<"11   Kamis, 2 Februari 2023      Pertamax        Rp. 15.000,-"<<endl;
        cout<<"12   Kamis, 2 Februari 2023      Pertalite       Rp. 20.000,-"<<endl;
        cout<<"13   Jumat, 3 Februari 2023      Pertamax        Rp. 15.000,-"<<endl;
        cout<<"14   Jumat, 3 Februari 2023      Pertamax        Rp. 60.000,-"<<endl;
        cout<<"-------------------------------------------------------------"<<endl;
        cout<<"pertalite (1) || pertamax (2)"<<endl;
        cout<<"input jenis bensin      (1/2) : ";
        cin>>jenis;

        cout<<endl<<"data pembelian "<<bensin[jenis-1]<<" :"<<endl;
        if (jenis==1)
        {
            cout<<"Senin, 30 Januari 2023          (Rp. 25.000,-)"<<endl;    
            cout<<"Senin, 30 Januari 2023          (Rp. 15.000,-)"<<endl;
            cout<<"Selasa, 31 Januari 2023         (Rp. 50.000,-)"<<endl;
            cout<<"Selasa, 31 Januari 2023         (Rp. 12.000,-)"<<endl;
            cout<<"Rabu, 1 Februari 2023           (Rp. 20.000,-)"<<endl;
            cout<<"Kamis, 2 Februari 2023          (Rp. 20.000,-)"<<endl;
            cout<<"total uang yang diterima adalah  Rp.142.000,- "<<endl;
        }
        else if(jenis==2)
        {
            cout<<"Selasa, 31 Januari 2023         (Rp. 35.000,-)"<<endl;
            cout<<"Rabu, 1 Februari 2023           (Rp. 50.000,-)"<<endl;
            cout<<"Rabu, 1 Februari 2023           (Rp. 30.000,-)"<<endl;
            cout<<"Kamis, 2 Februari 2023          (Rp. 55.000,-)"<<endl;
            cout<<"Kamis, 2 Februari 2023          (Rp. 25.000,-)"<<endl;
            cout<<"Kamis, 2 Februari 2023          (Rp. 15.000,-)"<<endl;
            cout<<"Jumat, 3 Februari 2023          (Rp. 15.000,-)"<<endl;
            cout<<"Jumat, 3 Februari 2023          (Rp. 60.000,-)"<<endl;
            cout<<"total uang yang diterima adalah  Rp.285.000,- "<<endl;
        }
        cout<<endl<<"ulang? (y/n) : ";
        cin>>ulang;
    }while(ulang=='y');
}