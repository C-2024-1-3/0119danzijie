#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student              
{
public:                   
    void set_value();
    void display();
private:
    int num;
   string  name;
    string sex;
};