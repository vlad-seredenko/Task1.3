#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double E;
    double x;
    int n = 0;
    double a = 1.;
    double  sum = 0;
    cout << "Введiть Е = ";
    cin >> E;
    cout << "Введiть х = ";
    cin >> x;
    while (fabs(a) < E)
    {
        sum += a;
        a *= -x / (n + 1.);
        n++;
    } 
 
    cout << "(за рядом) y = e^(x) = " << sum << endl;
    cout << "(через функцiю exp) y = e^(x) = " <<exp(-x)<< endl;
    return 0;
}
