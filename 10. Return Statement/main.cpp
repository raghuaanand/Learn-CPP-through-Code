#include <bits/stdc++.h>
using namespace std;

double cubeNumber(double num){
    double result = pow(num,3);
    return result;
}
int main() {
    
    double answer = cubeNumber(5.0);
    cout << answer << endl;
    return 0;
}