#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "������������a,b�������" << endl;
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
			cout << "��������Ϊ0" << endl;
		}

	}
	break;
	default:cout << "������������" << endl; break;




	}
}