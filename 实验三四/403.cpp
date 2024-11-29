#include<iostream>
using namespace std;
int main()
{
	bool arry[100];
	for (int i = 0; i < 100; i++)
	{
		arry[i] = true;
	}
	for (int i = 2; i <= 100; i++)
	{
		for (i; i <= 100; i += (i + 1))
		{
			arry[i - 1] = !arry[i - 1];
		}

	}
	for (int i = 0; i < 100; i++)
	{
		if (arry[i] == 1)
		{

			cout << i+1 << " ";

		}
	}
	system("pause");
	return 0;
}