#include <iostream>
using namespace std;

int lebar();
int hitung();
void cetak(int luas); //int luas berupa argumen dan tipe data

int p, l, luas; //deklarasi variabel global

main()
{
	cout<<"INPUTKAN PANJANG = ";
	cin>>p;
	
	lebar();
	hitung();
	cetak(luas); //gaperlu dikasi tipe data
}

int lebar() //dikasi int karena termasuk fungsi return
{
	cout<<"INPUTKAN LUAS = ";
	cin>>l;
	return l;
}

int hitung()
{
	return luas = p*l;
}	

void cetak(int luas) //perlu dikasi void karna cetak termasuk fungsi non return
{
	cout<<"LUAS PERSEGI PANJANG = "<<luas;
}
