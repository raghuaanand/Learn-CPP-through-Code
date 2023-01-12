#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myAge = 19;
    int* pAge = &myAge;  // address of the variable is strored inside the variable pAge.
    double gpa = 7.9;
    double *pGpa = &gpa;
    string name = "Raghu";
    string *pName = &name;

    // cout << &myAge; // memory address of myAge variable

    cout << pAge << endl;
    cout << *pName ;  // dereferencing a pointer

    return 0;
}