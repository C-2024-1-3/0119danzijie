//(3) �������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬
// ��̬���Թ۲�ָ�뼰ָ��ָ������ݣ����һ��������������С��������
//����������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����


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
	cout << "������Ԫ�ظ���:" << endl;
	cin >> n;
	int* p = new int[n];
	cout << "���������Ԫ��:" << endl;
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
