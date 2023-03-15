#include<iostream>
using namespace std;

main(){
	int m[100][100];
	int z, y, i, j;
	
	cout<<"Inputkan jumlah deret dan kolom untuk matriks M"<<endl;
	cout<<"Jumlah deret = ";
	cin>>z;
	cout<<"Jumlah kolom = ";
	cin>>y;
	cout<<endl;
	
	if (z>0 && y>0){
		for (i=1; i<=z; i++){ 
			for (j=1; j<=y; j++){
				cout<<"Baris ke-"<<i<<" Kolom ke-"<<j<<" = ";
				cin>>m[i][j]; 
			}
		}
		
		for (i=1; i<=z; i++){
			cout<<endl;
			for (j=1; j<=y; j++){
				cout<<m[i][j]<<"    "; 
			} 
		}
	}
}
