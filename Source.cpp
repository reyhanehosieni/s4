
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int tedad,n,sum=0,min=20,max=0;
	float avg;
	cout << "tedad dneshjooian ra vared konid";
	cin >> tedad;

	for (int i =0 ; i <= tedad; i++)
	{
		cout << "nomre drs vared konid";
		cin >> n;

		sum = sum + n;
		if (n<= min)
		{
			n = min;

		}
		if (n >= max)
		{
			n = max;
		}
		sum = sum + n;
		avg = sum / n;
	}
	cout << avg << min << max;
	system("pause");
}