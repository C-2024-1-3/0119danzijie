#include<iostream>
using namespace std;
int main()
{

	double a;
	cin >> a;
	double x[100000];
	x[0] = a;
	
	
	for (int i = 1;; i++)
	{
		x[i] = (x[i - 1] + a / x[i - 1]) / 2;
			if(abs(x[i]-x[i-1])<1e-5)
			{
				cout << x[i] << endl;
				break;

			}

	}





}