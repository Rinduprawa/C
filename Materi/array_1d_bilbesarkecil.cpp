#include<iostream>
using namespace std;
main()
{ //1 dimensi, bilangan terbesar terkecil
	int bil[1000];
	int i, j, k, n, besar, kecil;
	
	cout<<"INPUTKAN SEJUMLAH N = ";
	cin>>n;
	
	for (i=1; i<=n; i++) {
		cout<<"INPUTKAN BILANGAN KE-"<<i<<" = ";
		cin>>bil[i]; }
		
	besar=bil[1];
	for (j=2; j<=n; j++) {
		if (besar < bil[j])
			besar=bil[j]; }
	
	kecil=bil[1];
	for (k=2; k<=n; k++)
		if (kecil > bil[k])
			kecil=bil[k];
	
	cout<<endl<<endl;
	cout<<"BILANGAN TERBESAR ADALAH "<<besar<<endl;
	cout<<"BILANGAN TERKECIL ADALAH "<<kecil<<endl;
}