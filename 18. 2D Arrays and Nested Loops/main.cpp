#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberGrid[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            cout << numberGrid[row][column] << " " << endl;
        }
        cout << endl; 
    }

    return 0;
}