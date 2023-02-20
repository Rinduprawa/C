#include<iostream>
using namespace std;
main()
{ //1 dimensi, deret bilangan fibonaci
	int s[1000];
	int n, i;
	
	cout<<"INPUTKAN SEJUMLAH N = ";
	cin>>n;
	
	if (n==1)
		cout<<"1 ";
		
	else if (n==2)
		cout<<"1 1 ";
	
	else if (n>2) {
		s[1] = 1;
		s[2] = 1;
		cout<<"1 1 ";
		
		for (i=3; i<=n; i++) {
			s[i] = s[i-2] + s[i-1];
			cout<<s[i]<<" "; } }

}