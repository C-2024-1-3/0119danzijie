//5������һ������������Point����˽�б���x��y����һ�����(x, y)����ֵ�����д����ʵ�����¹��ܣ�
//���ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60, 80����
//���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60 + i, 80 + j)��
//���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤����������
#include<iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		this->x = 60;
		this->y = 80;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

private:
	int x;
	int y;
};
int main()
{
	Point point;
	point.display();
	int i, j;
	cout << "x�ı仯Ϊ��" << endl;
	cin >> i;
	cout << "y�ı仯Ϊ��" << endl;
	cin >> j;
	point.setPoint(i, j);
	point.display();
	system("pause");
	return 0;
}