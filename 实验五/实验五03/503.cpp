//3����Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
//(2)���㳤�����������
//(3)���3���������������
//�������ϻ����Բ����С�
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
		cout << "�����볤" << endl;
		cin >> this->len;
	}
	void setwide()
	{
		cout << "�������" << endl;
		cin >> this->wide;
	}
	void sethigh()
	{
		cout << "�������" << endl;
		cin >> this->high;
	}
	void getvolume()
	{
		cout << "����������Ϊ��" << len * wide * high << endl;
	}


};
int main()
{
	cuboid c1, c2, c3;
	cout << "��һ��������" << endl;
	c1.setlen();
	c1.setwide();
	c1.sethigh();
	cout << "�ڶ���������" << endl;
	c2.setlen();
	c2.setwide();
	c2.sethigh();
	cout << "������������" << endl;
	c3.setlen();
	c3.setwide();
	c3.sethigh();
	c1.getvolume();
	c2.getvolume();
	c3.getvolume();
	system("pause");
	return 0;
}