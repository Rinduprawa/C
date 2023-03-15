#include <iostream>

using namespace std;

int main()
/*{
	int bil1, bil2, bil3, terbesar, terkecil;
	
	cout<<"MASUKKAN BILANGAN PERTAMA = ";
	cin>>bil1;
	cout<<"MASUKKAN BILANGAN KEDUA = ";
	cin>>bil2;
	cout<<"MASUKKAN BILANGAN KETIGA = ";
	cin>>bil3;
	
	if (bil1 >= bil2 && bil1 >= bil3)
	{
		terbesar = bil1;
		if (bil2 >= bil3)
		terkecil = bil3;
		else
		terkecil = bil2;
	}
	else if (bil2 >= bil1 && bil2 >= bil3)
	{
		terbesar = bil2;
		if (bil1 >= bil3)
		terkecil = bil3;
		else
		terkecil = bil1;
	}
	else if (bil3 >= bil1 && bil3 >= bil2)
	{
		terbesar = bil3;
		if (bil1 >= bil2)
		terkecil = bil2;
		else
		terkecil = bil1;
	}
	cout<<"BILANGAN TERBESAR ADALAH = "<<terbesar<<endl;
	cout<<"BILANGAN TERKECIL ADALAH = "<<terkecil;
}*/


{
	int bil1, bil2, bil3, terbesar, terkecil;
	
	cout<<"MASUKKAN BILANGAN PERTAMA = ";
	cin>>bil1;
	cout<<"MASUKKAN BILANGAN KEDUA = ";
	cin>>bil2;
	cout<<"MASUKKAN BILANGAN KETIGA = ";
	cin>>bil3;
	
	if (bil1 > bil2 && bil1 > bil3)
	{
		terbesar = bil1;
		if (bil2 > bil3)
		terkecil = bil3;
		else
		terkecil = bil2;

		cout<<"BILANGAN TERBESAR ADALAH = "<<terbesar<<endl;
		cout<<"BILANGAN TERKECIL ADALAH = "<<terkecil;
	}
	else if (bil2 > bil1 && bil2 > bil3)
	{
		terbesar = bil2;
		if (bil1 > bil3)
		terkecil = bil3;
		else
		terkecil = bil1;
		
		cout<<"BILANGAN TERBESAR ADALAH = "<<terbesar<<endl;
		cout<<"BILANGAN TERKECIL ADALAH = "<<terkecil;
	}
	else if (bil3 > bil1 && bil3 > bil2)
	{
		terbesar = bil3;
		if (bil1 > bil2)
		terkecil = bil2;
		else
		terkecil = bil1;
		
		cout<<"BILANGAN TERBESAR ADALAH = "<<terbesar<<endl;
		cout<<"BILANGAN TERKECIL ADALAH = "<<terkecil;
	}
	else
		cout<<"SEMUA BILANGAN SAMA BESAR";
		
}

