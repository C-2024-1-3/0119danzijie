#include<iostream>
using namespace std;
class Time             
{
private:             
	int hour;
	int minute;
	int sec;
public:
	void sethour(int hour)
	{
		this->hour = hour;
	}
	int gethour()
	{
		return this->hour;
	}
	void setminute(int minute)
	{
		this->minute = minute;
	}
	int getminute()
	{
		return this->minute;
	}
	void setsec(int sec)
	{
		this->sec = sec;
	}
	int getsec()
	{
		return this->sec;
	}


};
int main()
{
	Time t1;   
	int hour, minute, sec;
	cin >> hour;   
	cin >> minute;
	cin >> sec;
	t1.sethour(hour);
	t1.setminute(minute);
	t1.setsec(sec);
	cout << t1.gethour() << ":" << t1.getminute() << ":"  << t1.getsec() << endl;
	return 0;
}
