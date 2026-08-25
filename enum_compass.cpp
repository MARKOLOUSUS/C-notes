#include <iostream>
using namespace std;

enum Direction
{
    North = 0,
    East = 90,
    South = 180,
    West = 270
};

int main()
{

    int value;
    cin >> value;

    Direction direction = static_cast<Direction>(value);

    switch (direction)
    {
    case North:
        cout << "The direction is North and the degree is " << static_cast<int>(direction);
        break;

    case East:
        cout << "The direction is East and the degree is " << static_cast<int>(direction);
        break;

    case South:
        cout << "The direction is South and the degree is " << static_cast<int>(direction);
        break;

    case West:
        cout << "The direction is West and the degree is " << static_cast<int>(direction);
        break;
    }

    return 0;
}
