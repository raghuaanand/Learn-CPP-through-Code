#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string major;
    double gpa;
    Student(string name, string major, double gpa){

    }

    // Objects function

    bool hasHonors(){
        if(gpa >=8.5){
            return true;
        }
        return false;
    }
};

int main() {
    Student student2("Raghu", "CSE", 8.11);
    Student student3("Yash", "CSE", 8.79);

    cout << student3.hasHonors(); //calling object function for student3 object.
    return 0;
}