#include "student.h"
void Student::display()
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value()
{
    cout << "输入学号" << endl;
    cin >> this->num;
    cout << "输入姓名" << endl;
    cin >> this->name;
    cout << "输入性别" << endl;
    cin >> this->sex;
}