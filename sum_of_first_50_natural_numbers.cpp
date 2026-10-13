#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int sum = 0;
    int n = 50;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers (loop): "
         << sum << endl;

    int formulaSum = n * (n + 1) / 2;

    cout << "Sum of first 50 natural numbers (formula): "
         << formulaSum << endl;

    if (sum == formulaSum)
    {
        cout << "Verification successful!" << endl;
    }
    else
    {
        cout << "Verification failed!" << endl;
    }

    system("pause");
    return 0;
}
