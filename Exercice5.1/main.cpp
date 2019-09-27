#include <iostream>
#include <time.h>


// exercice 5.1



/* INIT
Cette partie doit donner une valeur à mysteryNumber comprise entre 0 et 100
			
PLAY
Cette partie doit:
	- essayer de deviner le nombre mystère à l'aide d'un function
	- Si le nombre mystere est trouvé il faut passer à l'état END
			
END			
Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
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