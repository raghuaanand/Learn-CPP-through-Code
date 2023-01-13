#include <bits/stdc++.h>
using namespace std;

struct  // declaring the struucture
{
    int myNum;           // member
    string myString;    // member
} myStructure;   // structure variables // multiple structure variables cab be added here. Like myStructure1, myStructure2 and myStructure3 and so no....

int main()
{
    

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
}
