//4������һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���
//������һ������max����ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�
#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int score;
};
void max(Student*p)
{
	int nmax = -1;
	int smax = 0;
	for (int i = 0; i < 5; i++)
	{
		if (p[i].score > smax)
		{
			smax = p[i].score;
			nmax = i;
		}
	}
	cout << "������ߵ�ѧ����ѧ��Ϊ" << p[nmax].num << endl;
}
int main()
{
	Student array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i + 1 << "��ѧ��" << endl;
		cout << "������ѧ�ţ�" << endl;
		cin >> array[i].num;
		cout << "�����������" << endl;
		cin >> array[i].score;
	}
	Student* p = array;
	max(p);

	system("pause");
	return 0;
}