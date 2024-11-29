#include<iostream>
using namespace std;
int main()
{
	double arry[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arry[i];
	}
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if(arry[j]>arry[j+1])
			{
				int temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arry[i] << "\t";
	}

}