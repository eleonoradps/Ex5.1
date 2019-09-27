#include <iostream>
#include <time.h>


// exercice 5.1



/* INIT
Cette partie doit donner une valeur � mysteryNumber comprise entre 0 et 100
			
PLAY
Cette partie doit:
	- essayer de deviner le nombre myst�re � l'aide d'un function
	- Si le nombre mystere est trouv� il faut passer � l'�tat END
			
END			
Cette partie doit afficher le nombre de coups qui ont �t� n�cessaire pour trouver le nombre myst�re et indiquer quel est ce nombre myst�re
*/




int main() {
	

	int GenerateMysteryNumber; // Nombre al�atoire de l'ordi
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