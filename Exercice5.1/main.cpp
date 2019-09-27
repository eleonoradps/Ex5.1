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


enum class GameState {

	INIT,
	PLAY,
	END,
	EXIT

};

int GenerateMysteryNumber(int& mystery) {
	mystery = rand() % 101;
	return mystery;
}

int main() {

	
	GameState gameState = GameState::INIT;
	unsigned int mysteryNumber;
	int nbrTurns = 0;
	
	srand(time(NULL));

	while (gameState != GameState::EXIT);
	{
		
		std::cout << "Enter a number between 0 and 100";
		std::cin >> mysteryNumber;
		
		GenerateMysteryNumber;

		switch (gameState) 
		{
		case GameState::INIT:

			
			gameState = GameState::PLAY;
			break;

		case GameState::PLAY:
			/*
				
			*/
			break;

		case GameState::END:
			/*
				
			*/
			break;

		case GameState::EXIT:
			break;
		}
	}

	
	system("pause");
	return EXIT_SUCCESS;
}