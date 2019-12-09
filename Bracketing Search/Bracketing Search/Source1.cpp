#include <iostream>
#include <time.h>
using namespace std;


int main() {
	int cGuess = 0;
	int hL = 0;
	int oldGuess[20] = {};

	srand(time(0));

	cGuess = rand % 100 + 1;

	cout << "Please come up with a number \n" << "Make sure to remember it \n" << "Computer will then guess the number \n";
	
	system("PAUSE");

	do {
		cout << cGuess << "\n" << "If higher press 1 \n" << "If lower press 0 \n" << "If correct press 3 \n";
		cin >> hL;

		if (cGuess == oldGuess) {
			
			cGuess = rand % 100 + 1;
			
		}
		else {
			switch (hL) {
			case 0:
				cGuess = cGuess - 10;
				break;
			case 1:
				cGuess = cGuess + 10;
				break;
		}
		
		}
	} while (hL != 3);


	cout << "Congrats!! \n";

	system("PAUSE");

}