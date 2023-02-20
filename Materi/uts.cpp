#include <iostream>
using namespace std;
main()
/*{ //no.1
	int jam, lembur, upah;
	string gol;
	
	cout<<"GOLONGAN [a-d] = ";
	cin>>gol;
	cout<<"JAM KERJA PER MINGGU = ";
	cin>>jam;
	
	if (jam>48)
		lembur = (jam-48) * 4000;
	else
		lembur = 0;
	
	if (gol=="a")
		upah = (jam * 5000) + lembur;
	else if (gol=="b")
		upah = (jam * 7000) + lembur;
	else if (gol=="c")
		upah = (jam * 9000) + lembur;
	else if (gol=="d")
		upah = (jam * 11000) + lembur;
	else
		cout<<"INPUTAN GOLONGAN SALAH!";
	
	cout<<"GAJI ANDA RP"<<upah;
}*/

{ //no.2
	int n, x, y, ketemu, catat, i;
	
	cout<<"MULAI DARI = ";
	cin>>x;
	cout<<"SAMPAI = ";
	cin>>y;
	cout<<"SEBANYAK = ";
	cin>>n;
	
	if (x > 0)
	{
		ketemu = 0;
		while (ketemu < n)
		{
			if (x < y)
			{
				catat = 0;
				for (i=1; i<=x; i++)
					if (x%i==0)
						catat++;
				
				if (catat!=2)
				{
					cout<<x<<" ";
					ketemu++;
				}
			}
		x++;
		}
	}
} 

