#include <iostream>

using namespace std;

int main()
/*{
	int A;
   
	cout<<"INPUTKAN NILAI VARIABEL A = ";
	cin>>A;
	if (A==20)
		cout<<"NILAI A ADALAH 20";
}*/

/*{
	int A;
	cout<<"INPUTKAN NILAI VARIABEL A = ";
	cin>>A;
	if (A==20)
		cout<<"NILAI VARIABEL A ADALAH 20";
	else 
		cout<<"NILAI VARIABEL A BUKAN 20";
}*/

/*{
	int A, B;
   
	cout<<"INPUTKAN NILAI VARIABEL A = ";
	cin>>A;
	cout<<"INPUTKAN NILAI VARIABEL B = ";
	cin>>B;
	if (A>B)
	{
		cout<<"NILAI TERBESAR ADALAH = " <<A<<endl;
		cout<<"NILAI TERKECIL ADALAH = "<<B;
	}
	else if (B>A)
		{
            cout<<"NILAI TERBESAR ADALAH = " <<B<<endl;
            cout<<"NILAI TERKECIL ADALAH = "<<A;
        }
       else
            cout<<"NILAI VARIABEL A SAMA DENGAN B";
}*/

{
	int A, B, C;
   
	cout<<"INPUTKAN BILANGAN PERTAMA = ";
	cin>>A;
	cout<<"INPUTKAN BILANGAN KEDUA = ";
	cin>>B;
	cout<<"INPUTKAN BILANGAN KETIGA = ";
	cin>>C;
	if (A>B && A>C) {
		cout<<"NILAI TERBESAR ADALAH = " <<A<<endl;
		cout<<"NILAI TERKECIL ADALAH = "<<B;
	}
	else if (B>A)
		{
            cout<<"NILAI TERBESAR ADALAH = " <<B<<endl;
            cout<<"NILAI TERKECIL ADALAH = "<<A;
        }
       else
            cout<<"NILAI VARIABEL A SAMA DENGAN B";
}
