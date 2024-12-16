#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入两个数a,b和运算符" << endl;
	char fu;
	cin >> a >> b >> fu;
	switch (fu)
	{
	case'+':cout << a + b << endl; break;

	case'-':cout << a - b << endl; break;

	case'*':cout << a * b << endl; break;
	case'/':
	{
		if (b != 0)
		{
			cout << a / b << endl;
		}
		else
		{
			cout << "除数不能为0" << endl;
		}

	}
	break;
	default:cout << "运算符输入错误" << endl; break;




	}
}