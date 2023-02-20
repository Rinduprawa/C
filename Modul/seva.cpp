#include <iostream>
using namespace std;
void cetak();
int main() 
{
    while(true)
    {
        int jenis,harga=130000,jam;
        string nama[4] = {"NonMember", "Bronze", "Silver", "Gold"};
        int potongan[4] = {0, 5000, 7000, 10000};
        cout << "==========================" << endl;
		cout << "Penyewaaan Lapangan Futsal" << endl;
		cout << "==========================" << endl;

        cetak();
        cin>>jenis;
        cout<<"Berapa jam : ";
        cin>>jam;

        if (jenis <3) {
            cout<<"Member "<<nama[jenis]<<" Biaya Rp130.000 per jam dengan potongan "<<potongan[jenis]<<" per jam"<<endl;
            cout<<"Total Biaya : "<<((harga - potongan[jenis]) * jam)<<endl;
        }

        else if (jenis==3) {
            cout<<"Member "<<nama[jenis]<<" Biaya Rp130.000 per jam dengan potongan "<<potongan[jenis]<<" per jam"<<endl;
            cout<<"Total Biaya : "<<((harga - potongan[jenis]) * jam)<<endl;
            cout<<"Bonus Free air mineral 1.5 Liter 2 botol"<<endl;
        }
        else {
            cout<<"Inputan anda salah!"<<endl;
        }	
		
        cout<<"\nApakah ingin ulang program [y/n]: ";
        string u;
        cin>>u;
        if(u=="n"){
            break;
        }
        
    }
}

void cetak()
{
	cout<<"Jenis Member:\n0. NonMember\n1.Bronze\n2.Silver\n3.Gold\nMasukkan jenis member : ";
}