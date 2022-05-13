#include <iostream>
#include <cmath>
using namespace std;

double OpInt(double a, double b, double step)
{
    double x = 0.0;
    double sum = 0.0;
   // cout << a << "---" << b << "---" << step<<'\n';
    double i = a;
    double test = 0.0;
    for (double j = a; j <= b; j += step)
    {
        x += ((log(j + 1.0)) / (log10(sqrt(j) + 1.0)));   
    //    cout << x << '\n';
    }

    cout << x << '\n';
    sum = step * x;
   // cout <<"Sum = " << sum;
    return (double)sum;
}
//3.02037
//10.0823

int main()
{
    double a = 2.0;
    double b = 5.0;
    double step = 0.1;
    OpInt(a, b, step);
    OpInt(1.0, 1.0, 0.1);
    return 0;
}
