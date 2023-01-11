#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "Invalid operator " << endl;
    }

    cout << result << endl;
    return 0;
}