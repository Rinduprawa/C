#include <iostream>

using namespace std;

int main()
/*{
	int Kode;
	
	cout<<"INPUTKAN KODE HARI = ";
	cin>>Kode;
	
	if (Kode == 1)
		cout<<"HARI SENIN";
	else if (Kode == 2)
		cout<<"HARI SELASA";
	if (Kode == 3)
		cout<<"HARI RABU";
	else if (Kode== 4)
		cout<<"HARI KAMIS";
	if (Kode == 5)
		cout<<"HARI JUMAT";
	else if (Kode == 6)
		cout<<"HARI SABTU";
	if (Kode == 7)
		cout<<"HARI MINGGU";
	else if (Kode > 7)
		cout<<"KODE TIDAK VALID";
}*/

/*{ 
	int Kode;
	
	cout<<"MASUKKAN KODE HARI [1-7] = ";
	cin>>Kode;
	switch(Kode)
	{ 
		case 1: cout<<"HARI SENIN"; break;
		case 2: cout<<"HARI SELASA"; break;
		case 3: cout<<"HARI RABU"; break;
		case 4: cout<<"HARI KAMIS"; break;
		case 5: cout<<"HARI JUMAT"; break;
		case 6: cout<<"HARI SABTU"; break;
		case 7: cout<<"HARI MINGGU"; break;
		default: cout<<"KODE HARI TIDAK VALID"; break;
	}
}*/

{
	int Kode;
	
	cout<<"MASUKKAN KODE HARI [1-7] = ";
	cin>>Kode;
	switch(Kode)
	{ 
		case 1: 
		case 2: 
		case 3: 
		case 4: 
		case 5: 
				cout<<"HARI KERJA"; break;
		case 6: 
		case 7: 
				cout<<"HARI LIBUR"; break;
		default: cout<<"KODE HARI TIDAK VALID"; break;
	}
}
