#include <iostream>

using namespace std;

int main()
{
	int diskon = 0, total_pembelian;
	
	cout<<"MASUKKAN TOTAL PEMBELIAN = ";
	cin>>total_pembelian;
	
	if (total_pembelian >= 1000 && total_pembelian <= 3000)
	diskon = total_pembelian * 0.03;
	
	else if (total_pembelian > 3000)
	diskon = total_pembelian * 0.1;
	
	cout<<"TOTAL DISKON ADALAH = "<<diskon;
	
}
