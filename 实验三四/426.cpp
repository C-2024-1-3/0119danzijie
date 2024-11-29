//(2)编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”); 返回165
#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
    int len = strlen(hexString);
    int shijinzhi = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        char ch = hexString[i];
        int value;
        if (isdigit(ch))//检查所传的字符是否是十进制数字字符，即是否为 0-9 中的一个数字
        {
            value = ch - '0';
        }
        else
        {
            
            switch (ch)
            {
            case 'A': value = 10; break;
            case 'B': value = 11; break;
            case 'C': value = 12; break;
            case 'D': value = 13; break;
            case 'E': value = 14; break;
            case 'F': value = 15; break;
            default:
                cout << "输入的十六进制字符串格式有误！" << endl;
                return -1; // 如果遇到不合法字符，返回错误标识
            }
        }
        shijinzhi += value * static_cast<int>(pow(16, len - 1 - i));
    }
    return shijinzhi;
}

int main()
{
    char jinzhi16[100];
    cout << "请输入十六进制字符串: ";
    cin >> jinzhi16;
    int result = parseHex(jinzhi16);
    cout << "转换后的十进制数为: " << result << endl;
    return 0;
}