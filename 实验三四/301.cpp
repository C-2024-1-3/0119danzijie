#include<iostream>
using namespace std;
int func1(int num1, int num2)
{
	int max = 0;
	for (int i = 1; i <= (num1 <= num2 ? num1 : num2); i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			if (i > max)
			{
				max = i;
			}
		}

	}
	return max;
}

int func2(int num1, int num2)
{
	int min = 0;
	for (int i = 1;; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			min = i;
			break;
		}
	}
	return min;
}

int main()
{
	int a, b;
	cout << "������������Ȼ��" << endl;
	cin >> a >> b;
	int result1 = func1(a, b);
	int result2 = func2(a, b);
	cout << "���Լ��Ϊ:" << result1 << endl;
	cout << "��С������Ϊ��" << result2 << endl;
	system("pause");
	return 0;

}