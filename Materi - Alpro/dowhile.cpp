#include<iostream>
using namespace std;
int main()
{
	int n, x, ketemu;
	
	cout<<"MENCETAK BILANGAN GENAP SEBANYAK ";
	cin>>n;
	cout<<"MULAI DARI ";
	cin>>x;
	
	if (n>0) {
		ketemu = 0;
		do {
			if (x%2==0) {
				cout<<x<<" ";
				ketemu++; }
			x++; }
		while (ketemu<n); } 
}