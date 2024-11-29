#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double area = sqrt(s * (s - side1) + s * (s - side2) + s * (s - side3));
	return area;
}
int main()
{
	cout << "请分别输入三角形三边" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	int result = is_valid(a, b, c);
	if(result==1)
	{
		cout << "三角形面积为：" << area(a, b, c) << endl;
	}
	else
	{
		cout << "所输入的三边不能构成三角形" << endl;
	}
	system("pause");
	return 0;
}