#include <iostream>
using namespace std;
int main()
{
    int x;

    cout << "What number you want to see the multiplication table, up to 10\n";
    cin >> x;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << x << "=" << i * x << endl;
    }

    return 0;
}