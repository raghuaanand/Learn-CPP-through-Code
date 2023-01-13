#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int smallNum;
    long bigNum;
    char ch;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &smallNum, &bigNum, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", smallNum, bigNum, ch, f, d);

    return 0;
}
