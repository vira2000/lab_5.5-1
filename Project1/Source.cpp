#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int n)
{
    int res = 1;

    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

void printPaskalTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "      " << factorial(i) / (factorial(j) * factorial(i - j));
        }
        cout << endl;
    }
}

int main()
{
    int size;

    cout << "Size > ";
    cin >> size;

    printPaskalTriangle(size);

    return 0;
}