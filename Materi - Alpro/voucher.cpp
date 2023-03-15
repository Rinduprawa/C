#include <iostream>

using namespace std;

main()
{
	int totalbeli;
	
	cout<<"MASUKKAN TOTAL PEMBELIAN = Rp";
	cin>>totalbeli;
	
	if (totalbeli < 300000)
		cout<<"TIDAK MENDAPATKAN VOUCHER BELANJA";
	else if (totalbeli >=300000 && totalbeli <=500000)
		cout<<"VOUCHER BELANJA RP50.000,-";
	else if (totalbeli >500000 && totalbeli <=1000000)
		cout<<"VOUCHER BELANJA RP150.000,-";
	else if (totalbeli >1000000 && totalbeli <=2500000)
		cout<<"VOUCHER BELANJA RP250.000,-";
	else
		cout<<"VOUCHER BUY 1 GET 1 PRODUK DI BAWAH RP350.000,-";
}
