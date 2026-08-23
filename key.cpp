#include <iostream>
using namespace std;

int main()
{
    string letters[7][4] = {
        {"A", "B", "C", "D"}, //(00)(01)(02)(03)
        {"E", "F", "G", "H"}, //(10)(11)(12)(13)
        {"I", "J", "K", "L"}, //(20)(21)(22)(23)
        {"M", "N", "O", "P"}, //(30)(31)(32)(33)
        {"Q", "R", "S", "T"}, //(40)(41)(42)(43)
        {"U", "V", "W", "X"}, //(50)(51)(52)(53)
        {"Y", "Z", " ", "."}, //(60)(61)(62)(63)
    };

    cout << letters[3][0];
    cout << letters[0][0];
    cout << letters[4][1];
    cout << letters[2][2];
    cout << endl;

    int firstx, secondx, thirdx, forthx, firsty, secondy, thirdy, forthy;

    cin >> firstx;
    cin >> firsty;
    cin >> secondx;
    cin >> secondy;
    cin >> thirdx;
    cin >> thirdy;
    cin >> forthx;
    cin >> forthy;

    cout << letters[firstx][firsty];
    cout << letters[secondx][secondy];
    cout << letters[thirdx][thirdy];
    cout << letters[forthx][forthy];
    return 0;
}