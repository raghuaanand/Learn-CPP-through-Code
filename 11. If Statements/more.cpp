#include <bits/stdc++.h>
using namespace std;
int getMax(int num1, int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num1) {
        result = num2;
    }
    else{
        result = num3;
    }
    return result;
}
int main() {
    
    int answer = getMax(45,43, 46);
    cout << answer << " is the biggest among all" << endl;
    return 0;
}