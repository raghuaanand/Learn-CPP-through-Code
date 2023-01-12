#include <bits/stdc++.h>
using namespace std;

// Book Datatype, this is just a blueprint.
// Class is a template or specification
class Book
{
    // attributes of book datatypes
public:
    string title;
    string author;
    int pages;

    // Constructors, it takes parameters
    Book(string aTitle, string aAuthor, int aPages ){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    
    //  we can create any number of constructors
    Book(){

    }
};

int main()
{

    // object is the instance, in this case it is the actual book.

    Book book1("Rich Dad Poor Dad", "Someone", 500);
    // book1.title = "Rich dad Poor dad";
    // book1.author = "Unknown";
    // book1.pages = 285;

    Book book2("Atomic Habits","James Clear", 774);
    // book2.title = "Atomic habits";
    // cout << book1.title << endl;
    // cout << book2.author << endl;

    cout << book1.author;
    return 0;
}