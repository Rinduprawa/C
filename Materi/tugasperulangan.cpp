#include <iostream>

using namespace std;

int main()
{
	
	int i, x, y;
	
	cout<<"INPUTKAN NILAI X = ";
	cin>>x;
	cout<<"INPUTKAN NILAI Y = ";
	cin>>y;
	
	if (x > y)
		for (i=x; i>=y; i--)
			cout<<i<<" ";
		
	else
		for(i=x; i<=y; i++)
			cout<<i<<" ";
}
