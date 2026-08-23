#include <iostream>
using namespace std;

int main()
{
    int y, x;

    cout << "what is the x?" << endl;
    cin >> x;
    cout << "what is the y?" << endl;
    cin >> y;

    cout << "Multiplication table\n";

    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << i * j << "  ";
        }
        cout << endl;
    }
}
