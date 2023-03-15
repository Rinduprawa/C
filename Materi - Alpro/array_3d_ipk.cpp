#include <iostream>
using namespace std;

main(){
	float ipk[3][3][5];
	float total;
	int i, j, k;

	for( i = 0; i < 3; i++){
		cout<<endl<<"=========================================="<<endl;
		cout<<"FAKULTAS KE-"<<i+1;
		cout<<endl<<"=========================================="<<endl;	
		
		for(j = 0; j < 3; j++){
			cout<<endl<<"JURUSAN KE-"<<j+1<<endl;
			for(k = 0; k < 5; k++){
				cout<<"IPK MAHASISWA KE-"<<k+1<<" = ";
				cin>>ipk[i][j][k];
				total += ipk[i][j][k]; 
			} 
		} 
	}		
	cout<<endl<<"=========================================="<<endl;
	cout<<"IPK RATA-RATA SELURUH MAHASISWA =  "<<total/45;
}
