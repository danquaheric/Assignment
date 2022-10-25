#include<iostream>
using namespace std;

void circularlyshift(int *x, int *y, int *z);

int main()
{
    int x, y, z;

    cout << "Please Enter value of x, y and z respectively: ";
    cin >> x >> y >> z;

    cout << "The Value before Circularly shifting: " << endl;
    cout << "x, y and z respectively are: " << x << ", " << y << ", " << z << endl;

    circularlyshift(&x, &y, &z);

    cout << "The Value after Circularly shifting : " << endl;
    cout << "x, y and z respectively are: " << x << ", " << y << ", " << z << endl;

    return 0;
}

void circularlyshift(int *x, int *y, int *z)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = *z;
    *z = temp;
}
