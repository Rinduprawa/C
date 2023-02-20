#include <iostream>
using namespace std;

void proses(){
	int a, b;
	string bil[10] = {"NOL", "SATU", "DUA", "TIGA", "EMPAT", "LIMA", "ENAM", "TUJUH", "DELAPAN", "SEMBILAN"};

	
	cout<<"INPUT BILANGAN PERTAMA [0-9]= ";
	cin>>a;
	if (a<0 || a>9) {
		do {
			cout<<"INPUT BILANGAN PERTAMA [0-9]= ";
			cin>>a;
		}while (a<0 || a>9);
	}

	cout<<"INPUT BILANGAN KEDUA [0-9]= ";
	cin>>b;
	if (b<0 || b>9) {
		do {
			cout<<"INPUT BILANGAN KEDUA [0-9]= ";
			cin>>b;
		}while (b<0 || b>9);
	}

	if (a==0 && b==0){
		cout<<"NOL";
	}else if (a==0 && b>0){
		cout<<bil[b];
	}else if (a==1 && b==0){
		cout<<"SEPULUH";
	}else if (a==1 && b==1){
		cout<<"SEBELAS";
	}else if (a==1 && b>1){
		cout<<bil[b]<<" BELAS";
	}else if (a>=2 && b==0){
		cout<<bil[a]<<" PULUH";
	}else if (a>=2 && b>0){
		cout<<bil[a]<<" PULUH "<<bil[b]; 
	}
}

main(){
	char ulang;

	do {
		proses();
		cout<<endl;
		cout<<"ULANG? [y/n] = ";
		cin>>ulang;
		cout<<endl;
	}while (ulang=='y');
}