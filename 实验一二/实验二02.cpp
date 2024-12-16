#include<iostream>
using namespace std;
int main()
{

	cout << "ÇëÊäÈëx" << endl;
	double x;
	cin >> x;
	double y;
	if (x > 0 && x < 1)
	{
		y = 3 - 2 * x;
			cout <<"y=" << y << endl;


	}
	 if (x >= 1 && x < 5)
	{

		y = 1 / x + 1;



		cout << "y=" << y << endl;

	}

	 if (x >= 5 && x < 10)
	{
		y = x * x;

		cout << "y=" << y << endl;

	}

	return 0;

}