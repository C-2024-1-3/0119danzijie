#include<iostream>
using namespace std;
int main()
{
	cout << "请分别输入三角形的三条边" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	cout << "三角形的周长为" << a + b + c << endl;
	if (a == b || a == c || b == c)
	{



		cout << "为等边三角形" << endl;
	}


	return 0;

	
}