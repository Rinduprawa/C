#include <iostream>
#include <string>
using namespace std;
main()
/*{ //cin
	char teks [50];
	
	cout<<"INPUTKAN KATA : ";
	cin>>teks;
	cout<<"KATA YANG DIINPUTKAN : "<<teks;
}*/

/*{ //cin.get
	char teks [50];
	
	cout<<"INPUTKAN KATA : ";
	cin.get (teks, 9);
	cout<<"KATA YANG DIINPUTKAN : "<<teks;
}*/

/*{ //cin.get sizeof
	char teks [50];
	
	cout<<"INPUTKAN KATA : ";
	cin.get (teks, sizeof(teks));
	cout<<"KATA YANG DIINPUTKAN : "<<teks;
}*/

/*{ //2 cin.get size of
	char nama [50], teks [50];
	
	cout<<"INPUTKAN NAMA : ";
	cin.get (nama, sizeof(nama));
	cout<<"INPUTKAN PESAN : ";
	cin.get (teks, sizeof (teks));
	cout<<"NAMA : "<<nama<<endl;
	cout<<"PESAN : "<<teks<<endl;
}*/

/*{ //cin.getline size of
	char nama [50], teks [50];
	
	cout<<"INPUTKAN NAMA : ";
	cin.getline (nama, sizeof(nama));
	cout<<"INPUTKAN PESAN : ";
	cin.getline (teks, sizeof (teks));
	cout<<endl<<"NAMA : "<<nama<<endl;
	cout<<"PESAN : "<<teks<<endl;
}*/

/*{
	char nama[50], npm[50], jurusan[50], ipk[50];
	
	cout<<"INPUT NAMA : ";
	cin.getline (nama, sizeof(nama));
	cout<<"INPUT NPM : ";
	cin.getline (npm, sizeof(npm));	
	cout<<"INPUT JURUSAN : ";
	cin.getline (jurusan, sizeof(jurusan));
	cout<<"INPUT IPK : ";
	cin.getline (ipk, sizeof(ipk));
	
	cout<<endl;
	cout<<"NAMA : "<<nama<<endl;
	cout<<"NPM : "<<npm<<endl;
	cout<<"JURUSAN : "<<jurusan<<endl;
	cout<<"IPK : "<<ipk<<endl;	
}*/

/*{ //STRING
	string nama, alamat;
		
	cout<<"INPUT NAMA : ";
	getline (cin, nama);
	cout<<"INPUT ALAMAT : ";
	getline (cin, alamat);
	cout<<"NAMA YANG DIINPUTKAN : "<<nama<<endl;
	cout<<"ALAMAT YANG DIINPUTKAN : "<<alamat;
} */

/*{
	string nama[3];
	int i;
	
	for (i=0; i<3; i++) {
		cout<<"INPUTKAN NAMA : ";
		getline(cin, nama[i]); }

	cout<<endl;
	for (i=0; i<3; i++) {
		cout<<"NAMA : "<<nama[i]<<endl;}
}*/

{
	char nama[25][3];
	int i;
	
	for (i=0; i<3; i++) {
		cout<<"INPUTKAN NAMA : ";
		gets(nama[i]); }

	cout<<endl;
	for (i=0; i<3; i++) {
		cout<<"NAMA : "<<nama[i]<<endl;}
}
	

