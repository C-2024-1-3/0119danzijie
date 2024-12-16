//4、建立一个对象数组，内放5个学生的（学号，成绩）
//，设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。
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
	cout << "分数最高的学生的学号为" << p[nmax].num << endl;
}
int main()
{
	Student array[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << i + 1 << "名学生" << endl;
		cout << "请输入学号：" << endl;
		cin >> array[i].num;
		cout << "请输入分数：" << endl;
		cin >> array[i].score;
	}
	Student* p = array;
	max(p);

	system("pause");
	return 0;
}