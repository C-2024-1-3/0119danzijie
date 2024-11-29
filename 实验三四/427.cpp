//(3) 主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，
// 动态调试观察指针及指针指向的内容；设计一个函数对数组由小到大排序；
//主程序中用指针方式输出数组元素；最后释放数组内存（delete）。


#include<iostream>
using namespace std;
void bubble(int* p,int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j + i < n; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}


}
int main()
{
	int n; 
	cout << "请输入元素个数:" << endl;
	cin >> n;
	int* p = new int[n];
	cout << "请输入各个元素:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	bubble(p, n);
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << " ";
	}
	delete[]p;

}
