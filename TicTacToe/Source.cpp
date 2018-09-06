#include <iostream>

//Board
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

int main()
{
	int player = 1, i, choice;

	//Players entering numbers
	char mark;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		std::cout << "\n\n           Player " << player << ", enter a number:  ";
		std::cin >> choice;
		std::cout << "\n\n\n\n" << std::endl;

		mark = (player == 1) ? 'X' : 'O';

		//Board choices (1-9)
		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		//If invalid choice
		else
		{
			std::cout << "\nInvalid move " << std::endl;

			player--;
			std::cin.ignore();
			std::cin.get();
		}
		i = checkwin();

		player++;
	} 
	while (i == -1);
	board();
	//Displays which player wins
	if (i == 1)
	{
		std::cout << "\n                \aPLAYER " << --player << " WINS! " << std::endl;
	}
	//Displays if there is a draaw
	else
	{
		std::cout << "\n    \aGame draw!" << std::endl;
	}

	std::cin.ignore();
	std::cin.get();
	return 0;
}

/*
	Function to return game status:
	1 = Game over w/ result
	-1 = Game in progress
	O = Game over w/ 0 result
*/
int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

//Draws board with player marks
void board()
{
	std::cout << "            ======================\n";
	std::cout << "            |                    |\n";
	std::cout << "            |    TIC-TAC-TOE     |\n";
	std::cout << "            |                    |\n";
	std::cout << "            ======================" << std::endl;
	std::cout << "\n            ======================" << std::endl;
	std::cout << "            |  Player 1 --> (X)  |\n            |  Player 2 --> (O)  |" << std::endl;
	std::cout << "            ======================" << std::endl;
	std::cout << std::endl;

	std::cout << "        _______________________________" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |    " << square[1] << "    |    " << square[2] << "    |    " << square[3] << "    |" << std::endl;

	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |_________|_________|_________|" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;

	std::cout << "        |    " << square[4] << "    |    " << square[5] << "    |    " << square[6] << "    |" << std::endl;

	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |_________|_________|_________|" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |         |         |         |" << std::endl;

	std::cout << "        |    " << square[7] << "    |    " << square[8] << "    |    " << square[9] << "    |"<< std::endl;

	std::cout << "        |         |         |         |" << std::endl;
	std::cout << "        |_________|_________|_________|" << std::endl;
}