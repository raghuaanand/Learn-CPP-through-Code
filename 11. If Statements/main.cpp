#include <bits/stdc++.h>
using namespace std;
int main()
{

    bool isMale = true;
    bool isTall = true;
    if (isMale && isTall)
    {
        cout << "Engineer is male and tall" << endl;
    }
    else if (isMale && !isTall)
    {
        cout << "Engineer is male but not tall" << endl;
    }
    else if (!isMale && isTall)
    {
        cout << "Engineer is female and tall" << endl;
    }
    else
    {
        cout << "Engineer is female" << endl;
    }

    return 0;
}