#include "student.h"
void Student::display()
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value()
{
    cout << "����ѧ��" << endl;
    cin >> this->num;
    cout << "��������" << endl;
    cin >> this->name;
    cout << "�����Ա�" << endl;
    cin >> this->sex;
}