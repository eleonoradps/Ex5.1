#include <iostream>
#include <time.h>


// exercice 5.1



int main() {
	

	int GenerateMysteryNumber; // Nombre aléatoire de l'ordi
	int mysteryNumber; 
	int nbrTurns = 0;
	
	srand(time(NULL));
	GenerateMysteryNumber = rand() % 101;

	std::cout << "Game : guess the number \n";


	do
	{
		std::cout << "Enter a number between 0 and 100 \n";
		std::cin >> mysteryNumber;
		nbrTurns++;

			if (mysteryNumber < GenerateMysteryNumber)
			{
				std::cout << "Higher \n";
			}
			else if (mysteryNumber > GenerateMysteryNumber) 
			{
				std::cout << "Lower \n";
			}
			else 
			{
				std::cout << "This is the correct number \n";
			}

	} while (mysteryNumber != GenerateMysteryNumber);
	
	system("pause");
	return EXIT_SUCCESS;
}