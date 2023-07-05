#include <iostream>

using namespace std;
// you may type whatever you want
int main()
{
    cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     if (a > b)
        cout << "MAX = " << a << '\n';
     else
        cout << "MAX = " << b << '\n';
     if (a < b)
        cout << "MIN: " << a << '\n';
     else
        cout << "MIN: " << b << '\n';
    return 0;
}
