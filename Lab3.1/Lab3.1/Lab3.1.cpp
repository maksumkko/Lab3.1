#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр
    double y = 0; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = ";
    cin >> x;

    A = (2 / x) + fabs(x);

    // спосіб 1: розгалуження в скороченій формі

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

    // спосіб 2: розгалуження в повній формі

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
