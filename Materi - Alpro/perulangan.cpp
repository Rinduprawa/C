#include <iostream>

using namespace std;

main()
/*{ //For
	char Ali = 'A';
	int i;
	
	for (i=1; i<=3; i++)
		cout<<Ali<<" ";
}*/

/*{ //For
	char Ali = 'A';
	int i, n;
	
	cout<<"INPUTKAN N = ";
	cin>>n;
	
	if (n>0)
		for (i=1; i<=n; i++)
			cout<<Ali<<" ";
}*/

/*{ //For
	int i;
	
	for (i=1; i<=100; i++)
		cout<<i<<" ";
}*/

/*{ //While
	int bil=1;
	int ketemu=0;
	
	while (ketemu<30) {
		if ((bil%3==0) && (bil%4==0)) {
			cout<<bil<<" ";
			ketemu++; }
		bil++; }
		
}*/

/*{ //For
	int bil, i;
	int catat=0;
	
	cout<<"INPUT SUATU BILANGAN = ";
	cin>>bil;
	
	for (i=1; i<=bil; i++)
		if (bil%i ==0)
			catat++;
	
	if (catat==2)
		cout<<"BILANGAN PRIMA";
	else
		cout<<"BUKAN BILANGAN PRIMA";
}*/

{
	int i, x, n;
	int catat=0;
	int ketemu=0;
	
	cout<<"Nilai awal = ";
	cin>>x;
	cout<<"Sebanyak = ";
	cin>>n;
	
	while (ketemu < n) 
	{
		for (i=1; i<=x; i++)
			if (x%i ==0)
				catat++; 
	
		if (catat==2) 
		{
			cout<<x<<" ";
			ketemu++;
		}
			 
		x++; 
	}
}