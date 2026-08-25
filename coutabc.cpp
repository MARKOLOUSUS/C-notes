#include <iostream>
using namespace std;

int main()
{ //               1, 2, 3  < btw the 222 are size not index, the 0 and 1 are the index
    string letters[2][2][2] = {

        {
            // 0 (1st)
            {"A", "B"} // 0 (0,1)   (2nd) (3rd)
            ,
            {"C", "D"} // 1 (0,1)   (2nd) (3rd)
        }

        ,
        {
            // 1 (1st)
            {"E", "F"} // 0 (0,1)   (2nd) (3rd)
            ,
            {"G", "H"} // 1 (0,1)   (2nd) (3rd)
        }

    };

    for (int i = 0; i < 2; i++) // 0 (ABCD) or 1 (EFGH)
    {
        for (int j = 0; j < 2; j++) // 0 (AB)/(EF) or 1 (CD)/(GH)
        {
            for (int k = 0; k < 2; k++) // 0 (A, C, E or G) or 1 (B, D, F, or H)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
    return 0;
}
