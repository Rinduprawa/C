#include<iostream>
using namespace std;
main()
{ //2 dimensi, penjumlahan dua matriks

	int i, j, a, b, c, d;
	
	cout<<"MATRIKS M"<<endl;
	cout<<"JUMLAH DERET = ";
	cin>>a;
	cout<<"JUMLAH KOLOM = ";
	cin>>b;
	cout<<endl;
	int m[a][b];
	
	cout<<"MATRIKS N"<<endl;
	cout<<"JUMLAH DERET = ";
	cin>>c;
	cout<<"JUMLAH KOLOM = ";
	cin>>d;
	int n[c][d];
	
	cout<<endl<<"=========================================="<<endl<<endl;
	
	if (a==c && b==d) 
		if (a>0 && b>0) 
		{
			for (i=1; i<=a; i++) { 
				cout<<"MATRIKS M"<<endl;
				for (j=1; j<=b; j++) {
					cout<<"BARIS KE-"<<i<<" KOLOM KE-"<<j<<" = ";
					cin>>m[i][j]; } }
				
			for (i=1; i<=a; i++) {
				cout<<endl;
				for (j=1; j<=b; j++) 
					cout<<m[i][j]<<"    "; }
				 
	cout<<endl<<"=========================================="<<endl<<endl;
		
			for (i=1; i<=c; i++) { 
				cout<<"MATRIKS N"<<endl;
				for (j=1; j<=d; j++) {
					cout<<"BARIS KE-"<<i<<" KOLOM KE-"<<j<<" = ";
					cin>>n[i][j]; } }
			
			for (i=1; i<=c; i++) {
				cout<<endl;
				for (j=1; j<=d; j++) 
					cout<<n[i][j]<<"    "; } 
	cout<<endl<<"=========================================="<<endl<<endl;
				
			int o[a][b];
			for (i=1; i<=a; i++)
				for (j=1; j<=b; j++) 
					o[i][j] = m[i][j] + n[i][j];
		
			cout<<"HASIL PENJUMLAHAN MATRIKS M DAN N :"<<endl;
			cout<<"MATRIKS O"<<endl;
			for (i=1; i<=a; i++) {
				cout<<endl;
				for (j=1; j<=b; j++) 
					cout<<o[i][j]<<"    "; } 				
		}
		else
			cout<<"JUMLAH BARIS DAN/ATAU KOLOM HARUS LEBIH DARI 0!!";
			
	else
		cout<<"JUMLAH ORDO MATRIKS M DAN N HARUS SAMA!!";
}