#include <iostream>
#include <cmath>
using namespace std;

double findcuberoot(int a)
{
    return cbrt(a);
}
double findcuberoot ( double b)
{
    return cbrt (b);
}
int main()
{
    int a;
    double b;
    cout << "Enter a:";
    cin >> a;
    cout << findcuberoot(a)<< endl;
    cout << "Enter b:";
    cin >> b;
    cout << findcuberoot (b) << endl;
    return 0;
}
