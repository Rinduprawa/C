#include <iostream>
using namespace std;

void katalog(){
    cout<<"==============================================================================="<<endl;
    cout<<"                          KATALOG PRODUK TOKO KACAMATA                         "<<endl;
    cout<<"                                  OPTIK SEHAT                                  "<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<"| No. |             Nama Produk             |      Merk     |      Harga      |"<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<"|  1. | Frame Kacamata                      | Oakley        |  Rp.  800.000,- |"<<endl;
    cout<<"|  2. | Frame Kacamata                      | Calvin Klein  |  Rp.1.350.000,- |"<<endl;
    cout<<"|  3. | Frame Kacamata                      | Guess         |  Rp.  920.000,- |"<<endl;
    cout<<"|  4. | Frame Kacamata                      | Rayban        |  Rp.1.120.000,- |"<<endl;
    cout<<"|  5. | Frame Kacamata                      | Police        |  Rp.  760.000,- |"<<endl;
    cout<<"|  6. | Frame Kacamata                      | Versace       |  Rp.1.750.000,- |"<<endl;
    cout<<"|  7. | Lensa (-0.25 s.d. -1.00)            | Rodenstock    |  Rp.  450.000,- |"<<endl;
    cout<<"|  8. | Lensa (-1.25 s.d. -2.50)            | Rodenstock    |  Rp.  600.000,- |"<<endl;
    cout<<"|  9. | Lensa (-2.75 s.d. -4.00)            | Rodenstock    |  Rp.  800.000,- |"<<endl;
    cout<<"| 10. | Lensa (-0.25 s.d. -1.00)            | Calvin Klein  |  Rp.  400.000,- |"<<endl;
    cout<<"| 11. | Lensa (-1.25 s.d. -2.50)            | Calvin Klein  |  Rp.  500.000,- |"<<endl;
    cout<<"| 12. | Lensa (-2.75 s.d. -4.00)            | Calvin Klein  |  Rp.  620.000,- |"<<endl;
    cout<<"| 13. | Soft Lens Bening (-0.25 s.d. -2.50) | Bausch & Lomb |  Rp.  550.000,- |"<<endl;
    cout<<"| 14. | Soft Lens Warna (-0.25 s.d. -2.50)  | Bausch & Lomb |  Rp.  425.000,- |"<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<"|    KODE    |           MERK          |    KODE    |           MERK          |"<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<"|     1.     |   Oakley                |     5.     |   Police                |"<<endl;
    cout<<"|     2.     |   Calvin Klein          |     6.     |   Versace               |"<<endl;
    cout<<"|     3.     |   Guess                 |     7.     |   Rodenstock            |"<<endl;
    cout<<"|     4.     |   Rayban                |     8.     |   Bausch & Lomb         |"<<endl;
    cout<<"==============================================================================="<<endl;
}

void menu(string merk[8], int kode){
    cout<<"==============================================================================="<<endl;
    cout<<"Input Kode [1-8]: ";
    cin>>kode;
        if (kode<1 || kode>8){
            do{
                cout<<"Inputan Salah!, Input Kode [1-8] : ";
                cin>>kode;
            }while(kode<1 || kode>8);
        }

        cout<<endl<<"Merk : "<<merk[kode-1];

        if(kode==1){
            cout<<endl<<"1. Frame Kacamata [Rp.  800.000,-]";
        }else if(kode==2){
            cout<<endl<<"1. Frame Kacamata           [Rp.1.350.000,-]";
            cout<<endl<<"2. Lensa (-0.25 s.d. -1.00) [Rp.  400.000,-]";
            cout<<endl<<"3. Lensa (-1.25 s.d. -2.50) [Rp.  500.000,-]";
            cout<<endl<<"4. Lensa (-2.75 s.d. -4.00) [Rp.  620.000,-]";
        }else if(kode==3){
            cout<<endl<<"1. Frame Kacamata [Rp.  920.000,-]";
        }else if(kode==4){
            cout<<endl<<"1. Frame Kacamata [Rp.1.120.000,-]";    
        }else if(kode==5){
            cout<<endl<<"1. Frame Kacamata [Rp.  760.000,-]";
        }else if(kode==6){
            cout<<endl<<"1. Frame Kacamata [Rp.1.750.000,-]";
        }else if(kode==7){
            cout<<endl<<"1. Lensa (-0.25 s.d. -1.00) [Rp.  450.000,-]";
            cout<<endl<<"2. Lensa (-1.25 s.d. -2.50) [Rp.  600.000,-]";
            cout<<endl<<"3. Lensa (-2.75 s.d. -4.00) [Rp.  800.000,-]";   
        }else if(kode==8){
            cout<<endl<<"1. Soft Lens Bening (-0.25 s.d. -2.50) [Rp.  550.000,-]";
            cout<<endl<<"2. Soft Lens Warna (-0.25 s.d. -2.50)  [Rp.  425.000,-]";
        }
}

main() {
    string merk[8] = {"Oakley", "Calvin Klein", "Guess", "Rayban", "Police", "Versace", "Rodenstock", "Bausch & Lomb"};
    char ulang;
    int kode;

    do{
       katalog();
        do{
            menu(merk, kode);
            cout<<endl<<"==============================================================================="<<endl;
            cout<<endl<<"Ulang dengan Katalog [y]";
            cout<<endl<<"Ulang tanpa  Katalog [t]";
            cout<<endl<<"Akhiri Program       [n]";
            cout<<endl<<"Ulang Program?   [y/t/n] : ";
            cin>>ulang;
        }while(ulang=='t' || ulang=='T');
    }while(ulang=='y' || ulang=='Y');
}