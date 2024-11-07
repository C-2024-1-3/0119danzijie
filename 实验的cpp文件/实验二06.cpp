#include<iostream>
using namespace std;
int main()
{


	int a, b,max=0;
	cout << "输入两个正整数" << endl;
	cin >> a >> b;
	for (int i = 1;i<=a&&i<=b; i++)

	{
		

		if (a % i == 0 && b % i == 0)
		{
			if(i>max)
			{
				max = i;
			}

		}
	}

	cout << "最大公约数为"<<max << endl;
	for (int j = 1;; j++)
	{
		if (j % a == 0 && j % b == 0)
		{

			cout << "最小公倍数为" << j << endl;
			break;

		}


	}

}