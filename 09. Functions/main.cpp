#include <bits/stdc++.h>
using namespace std;

// Declaring function

void message(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}

int main() {
    string name = "Raghu";
    message(name, 19); // calling function

    // calling function as many times as we want
    
    message("Papa", 43); 
    message("Maa", 42);
    return 0;
}