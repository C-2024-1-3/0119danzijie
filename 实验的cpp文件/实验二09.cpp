#include<iostream>
using namespace std;
int main()
{
	int i = 1, everday = 1, sum = 0;
	for ( i = 1;; i++)
	{
		everday *= 2;
		sum += everday;
		if (sum > 100)
		{


			break;
		}
		


	}
	i -= 1;
	sum -= everday;
	double averagepay = sum * 0.8 / i;
	cout << "平均每天花费为" << averagepay << endl;
	

}