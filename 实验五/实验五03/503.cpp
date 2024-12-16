//3、需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽)、height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入3个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出3个长方柱的体积。
//请编程序，上机调试并运行。
//
#include<iostream>
using namespace std;
class cuboid
{
private:
	double len;
	double high;
	double wide;
public:
	void setlen()
	{
		cout << "请输入长" << endl;
		cin >> this->len;
	}
	void setwide()
	{
		cout << "请输入宽" << endl;
		cin >> this->wide;
	}
	void sethigh()
	{
		cout << "请输入高" << endl;
		cin >> this->high;
	}
	void getvolume()
	{
		cout << "长方体的体积为：" << len * wide * high << endl;
	}


};
int main()
{
	cuboid c1, c2, c3;
	cout << "第一个长方体" << endl;
	c1.setlen();
	c1.setwide();
	c1.sethigh();
	cout << "第二个长方体" << endl;
	c2.setlen();
	c2.setwide();
	c2.sethigh();
	cout << "第三个长方体" << endl;
	c3.setlen();
	c3.setwide();
	c3.sethigh();
	c1.getvolume();
	c2.getvolume();
	c3.getvolume();
	system("pause");
	return 0;
}