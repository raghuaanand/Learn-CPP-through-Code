#include <bits/stdc++.h>
using namespace std;
int main() {
    int seceretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(seceretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }else{
            outOfGuesses = true;
        }
        
    }

    if(outOfGuesses){
        cout << "You Loose!";
    }else{
        cout << "You win!";
    }
    return 0;
}