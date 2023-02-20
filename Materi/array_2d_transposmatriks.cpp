#include <iostream>
using namespace std;
main()
{ //2 dimensi, transpos matriks
	int A[100][100];
	int x, y, i, j;
	
	cout<<"INPUTKAN JUMLAH DERET DAN KOLOM UNTUK MATRIKS A"<<endl<<endl;
	cout<<"JUMLAH DERET = ";
	cin>>x;
	cout<<"JUMLAH KOLOM = ";
	cin>>y;
	cout<<endl;
	
	if (x>0 && y>0) 
	{
		for (i=1; i<=x; i++) 
			for (j=1; j<=y; j++) {
				cout<<"DERET KE-"<<i<<" KOLOM KE-"<<j<<" = ";
				cin>>A[i][j]; }
		
		cout<<endl;
		cout<<"MATRIKS A :"<<endl;
		for (i=1; i<=x; i++) {
			cout<<endl;
			for (j=1; j<=y; j++) 
				cout<<A[i][j]<<"    "; } 
		
		cout<<endl<<endl;
		cout<<"TRANSPOS MATRIKS A :"<<endl;
		for (i=1; i<=y; i++) {
			cout<<endl;
			for (j=1; j<=x; j++) 
				cout<<A[j][i]<<"    "; } 
	}		
}