#include<iostream>
using namespace std;
int main()
{


	int a, b,max=0;
	cout << "��������������" << endl;
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

	cout << "���Լ��Ϊ"<<max << endl;
	for (int j = 1;; j++)
	{
		if (j % a == 0 && j % b == 0)
		{

			cout << "��С������Ϊ" << j << endl;
			break;

		}


	}

}