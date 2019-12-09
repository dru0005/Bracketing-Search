#include <iostream>
#include <time.h>
using namespace std;


int main() {
	int cGuess = 0;
	int hL = 0;
	int oldGuess[99] = {};
	const int MAX = 99;
	int x = 0;

	srand(time(0));

	cGuess = rand() % 100 + 1;

	cout << "Please come up with a number \n" << "Make sure to remember it \n" << "Computer will then guess the number \n";

	system("PAUSE");

	do {
		cout << cGuess << "\n" << "If higher press 1 \n" << "If lower press 0 \n" << "If correct press 3 \n";
		cin >> hL;

		int y = 0;
		
		oldGuess[x] = cGuess;

		for (int i = 0; i < 99; i++) {

			if (cGuess == oldGuess[i]) {

				cGuess =  rand() % 100 + 1;
				break;
			}
				else {
					switch (hL) {
					case 0:
						cGuess = cGuess / 2;
						break;
					case 1:
						cGuess = cGuess +15;
						break;
							}
				
				
				}
		
		
			
			
								}
		
		
		x++;
	} while (hL != 3);

	cout << "Congrats!! \n";

	cout << "It took the computer " << x << " times to guess";
	system("PAUSE");

}