#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b)
{
    // Complete this function
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b); // abs is used for Absolute integer value
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a;
    cin >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
