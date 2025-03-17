#include <iostream>
using namespace std;

void invertedstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int v = 0; v < 2 * (n - i) - 1; v++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 3;
    invertedstar(n);
    return 0;
}