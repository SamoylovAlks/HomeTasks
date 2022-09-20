#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;

    while (a > 0 && b > 0)
    {
        if (a  > b)
          a %=b;
        else 
         b %= a;
    }

    return a + b;
}

int main()
{
    int a,b;

    cout << "Enter the numbers: ";
    cin >> a >> b;

    cout << "The gcd of numbers: " << gcd(a,b);

    return 0;
}

