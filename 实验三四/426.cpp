//(2)��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ����165
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
        if (isdigit(ch))//����������ַ��Ƿ���ʮ���������ַ������Ƿ�Ϊ 0-9 �е�һ������
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
                cout << "�����ʮ�������ַ�����ʽ����" << endl;
                return -1; // ����������Ϸ��ַ������ش����ʶ
            }
        }
        shijinzhi += value * static_cast<int>(pow(16, len - 1 - i));
    }
    return shijinzhi;
}

int main()
{
    char jinzhi16[100];
    cout << "������ʮ�������ַ���: ";
    cin >> jinzhi16;
    int result = parseHex(jinzhi16);
    cout << "ת�����ʮ������Ϊ: " << result << endl;
    return 0;
}