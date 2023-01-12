#include <bits/stdc++.h>
using namespace std;
class Movie{
    //  only code that is inside the class can access the data under private.
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        // used to cotrol what all ratings can be assigned
        // Setters

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }

        //  used to print the rating.
        // Getters
        
        string getRating(){
            return rating;
        }
};
int main() {
    Movie Avengers("The Avengers", "Joss Whedon", "PG-13");
    Avengers.setRating("Dog");

    cout << Avengers.getRating();
    return 0;
}