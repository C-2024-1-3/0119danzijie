//下面程序的主函数中能保证p[0]输出1，p[1]输出2吗？如何修改以保证之（提示：在函数f中使用new生成动态数组；在main中用delete释放）
#include<iostream>
using namespace std;
int* f()
{
	int*m= new int[4];
	for (int i = 0; i < 4; i++)
	{
		m[i] = i+1;
	}
	return m;
	
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}
