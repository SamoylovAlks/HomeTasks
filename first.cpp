#include <iostream>
using namespace std;

int main()
{
    int i =1, sum = 0 , n;

    cout << "Enter the number  of limit: ";
    cin >> n;

    while ( i < n)
    {
        if ((i % 6 == 0) && (i % 7 == 0))
         {
            sum+=i;
         }

         ++i;
    }

    cout << "Answer is: " << sum;
    return 0;
}

