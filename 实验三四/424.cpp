//�����������������ܱ�֤p[0]���1��p[1]���2������޸��Ա�֤֮����ʾ���ں���f��ʹ��new���ɶ�̬���飻��main����delete�ͷţ�
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
