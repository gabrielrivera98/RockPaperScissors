#include <iostream>
#include <stdlib.h>



int userDecision()
{
	int userDecision;
	std::cout << "Please enter 0 for Rock, 1 for Paper, or 2 for Scissors: ";
	std::cin >> userDecision;
	return userDecision;

}

void displayDecision(int userDecision)
{
	if (userDecision == 0)
		std::cout << "ROCK\n";
	else if (userDecision == 1)
		std::cout << "PAPER\n";
	else if (userDecision == 2)
		std::cout << "SCISSORS\n";
}

void displayPCDecision()
{
	int numRand = rand() % 3;

	if (numRand == 0)
		std::cout << "ROCK\n";
	else if (numRand == 1)
		std::cout << "PAPER\n";
	else if (numRand == 2)
		std::cout << "SCISSORS\n";
}

int logic(int pcDecision, int userDecision)
{
	if (userDecision == pcDecision)
		return 0;
	else if (userDecision == 0 && pcDecision == 1)
		return 2;
	else if (userDecision == 0 && pcDecision == 2)
		return 1;
	else if (userDecision == 1 && pcDecision == 2)
		return 2;
	else if (userDecision == 1 && pcDecision == 0)
		return 1;
	else if (userDecision == 2 && pcDecision == 0)
		return 2;
	else if (userDecision == 2 && pcDecision == 1)
		return 1;
}
int main()
{ // 0 tie 1 userwin 2 pc win
	int userHealth{ 3 };
	int pcHealth{ 3 };
	while (userHealth > 0 || pcHealth > 0)
	{
		int numRand = rand() % 3;
		int userChoice{ userDecision() };
		displayDecision(userChoice);
		displayDecision(numRand);
		int finalDecision{ logic(numRand, userChoice) };
		if (finalDecision == 0)
		{
			std::cout << "Its a tie!" << std::endl;
		}
		else if (finalDecision == 1)
		{
			std::cout << "You won!" << std::endl;
			--pcHealth;
		}
		else
		{
			std::cout << "Computer won!" << std::endl;
			--userHealth;
		}
		if (userHealth == 0)
		{
			std::cout << "You lost game!";
			break;
		}
		else if (pcHealth == 0)
		{
			std::cout << "You win the game!";
			break;
		}





	}
	

}