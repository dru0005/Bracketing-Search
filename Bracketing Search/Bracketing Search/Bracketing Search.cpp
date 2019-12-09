// Bracketing Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    int iSecret = 0;
    int iGuess = 0;
    int guessAmount = 0;
   
    srand(time(0));

    /* generate secret number between 1 and 100: */
    iSecret = rand() % 100 + 1;

    do {
        cout << "Guess the number (1 to 100):";
        
        guessAmount++;
        
        cin >> iGuess;
        
            if (iSecret < iGuess) puts("The secret number is lower");
            else if (iSecret > iGuess) puts("The secret number is higher");
    
    } while (iSecret != iGuess);

    cout << "Congratulations. \n You guessed  " << guessAmount << " times until you were correct \n";

    system("PAUSE");
}

