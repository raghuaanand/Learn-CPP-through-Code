#include <bits/stdc++.h>
using namespace std;

// Super class

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes special Dish" << endl;
        }
};

// Inheriting functions of the Chef class
// Base Class

class ItalianChef: public Chef{
    public:
    void makePasta(){
        cout << "The chef makes pasta" << endl;
    }

    // overriding the function

    void makeSpecialDish(){
        cout << "The chef makes chicken parm" << endl;
    }
};

int main() {
    
    Chef chef;
    chef.makeChicken();
    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    return 0;
}