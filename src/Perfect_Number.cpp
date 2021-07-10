#include "Perfect.hpp"
void Perfect(){
	int n, i;
	int k = 0;
	cout <<"Enter a number: ";
	cin >>n;
	for(i = 1;i < n; i++)
	{
		if(n%i == 0)
		{
			k = k + i;
		}
	}
	if(k==n)
	{
		cout << n << " Is a perfect number";
	}
	else
	{
		cout << n << "Is not a perfect number";
	}
}
