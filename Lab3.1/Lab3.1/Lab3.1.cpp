#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // ������� ��������
    double y = 0; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������

    cout << "x = ";
    cin >> x;

    A = (2 / x) + fabs(x);

    // ����� 1: ������������ � ��������� ����

    if (x < 0)
    {
        B = 1 + 4 * x * x;
    }
    else if (0 <= x && x <= 2)
    {
        B = pow(exp(x) + fabs(x), 2);
    }
    else if (x > 2)
    {
        B = 5 * sin(x * x + 1);
    }

    y = A + B;

    cout << "y = " << y << endl;

    // ����� 2: ������������ � ����� ����

    if (x < 0)
        B = 1 + 4 * x * x;
    else if (0 <= x && x <= 2)
        B = pow(exp(x) + fabs(x), 2);
    else if (x > 2)
        B = 5 * sin(x * x + 1); 
    
    y = A + B; 

    cout << "y = " << y << endl; 
 

    return 0;
}
