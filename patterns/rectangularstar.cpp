#include <iostream>
using namespace std;

void rectangularStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows and columns you want to print";
    cin >> n;
    rectangularStar(n);
    return 0;
}