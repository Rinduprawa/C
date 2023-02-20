#include <iostream>
using namespace std;

main(){
	int n, i;
	float hasil1, hasil2;
	int bil[3], op[2];
	char ulang;

	do{
		cout<<"INPUT N = ";
		cin>>n;

		for (i=1; i<4; i++){
			cout<<"INPUT BILANGAN KE-"<<i<<" [LEBIH DARI N] = ";
			cin>>bil[i];
			if (bil[i]<n){
				do {
					cout<<"INPUT BILANGAN KE-"<<i<<" [LEBIH DARI N] = ";
					cin>>bil[i];
				} while (bil[i]<n);
			} 
		}

		cout<<endl;
		cout<<"PILIHAN OPERATOR :"<<endl;
		cout<<"1. TAMBAH 	(+)"<<endl;
		cout<<"2. KURANG 	(-)"<<endl;
		cout<<"3. KALI		(x)"<<endl;
		cout<<"4. BAGI		(/)"<<endl;
		for (i=1; i<3; i++){
			cout<<"INPUT PILIHAN OPERATOR KE-"<<i<<" [1-4] = ";
			cin>>op[i];
			if (op[i]<1 || op[i]>4){
				do {
					cout<<"INPUT PILIHAN OPERATOR KE-"<<i<<" [1-4] = ";
					cin>>op[i];
				} while (op[i]<1 || op[i]>4);
			}
		}

		if (op[1] == 1){
			hasil1 = bil[1] + bil[2];
		}else if (op[1] == 2){
			hasil1 = bil[1] - bil[2];
		}else if (op[1] == 3){
			hasil1 = bil[1] * bil[2];
		}else if (op[1] == 4){
			hasil1 = bil[1] / bil[2];
		}

		if (op[2] == 1){
			hasil2 = hasil1 + bil[3];
		}else if (op[2] == 2){
			hasil2 = hasil1 - bil[3];
		}else if (op[2] == 3){
			hasil2 = hasil1 * bil[3];
		}else if (op[2] == 4){
			hasil2 = hasil1 / bil[3];
		}

		cout<<endl<<"HASIL PERHITUNGAN ADALAH = "<<hasil2;
		cout<<endl<<"ULANG? [y/n] = ";
		cin>>ulang;
		cout<<endl;

	}while (ulang=='y');
} 