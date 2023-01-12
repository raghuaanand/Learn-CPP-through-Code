#include <bits/stdc++.h>
using namespace std;

// Book Datatype, this is just a blueprint.
// Class is a template or specification
class Book {
    // attributes of book datatypes
    public:
    string title;
    string author;
    int pages;
};

int main() {

    // object is the instance, in this case it is the actual book.

    Book book1;
    book1.title = "Rich dad Poor dad";
    book1.author = "Unknown";
    book1.pages = 285;

    Book book2;
    book2.title = "Atomic habits";
    book2.author = "James Clear";
    book2.pages = 774;

    cout << book1.title << endl;
    cout << book2.author << endl;
    return 0;
}