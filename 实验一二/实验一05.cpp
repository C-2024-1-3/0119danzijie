#include<iostream>
using namespace std;
int main()
{
	double F;
	cout << "请输入华氏温度：" << endl;
	cin >> F;
	double C = (F - 32) / 1.8;
	cout << "摄氏温度为：" << C <<"度"<< endl;
	
	return 0;




}