#include <iostream>
#include <ctime>

int answer;
int user_answer;

int main()
{
	
	srand(time(NULL));
	while (1)
	{
		int first_random = (rand() % 10) + 1; // Generating random number from 1 to 100.
		int second_random = (rand() % 10) + 1; // Generating random number from 1 to 100.

		int random_function = (rand() % 2);

		std::cout << first_random << " + " << second_random << std::endl;
		answer = first_random + second_random; // Generating ADDITION (+) answer.

		std::cout << "Input your answer: ";
		std::cin >> user_answer;
		std::cin.clear();

		if (user_answer == answer)
		{
			std::cout << "Correct Answer\n" << std::endl;
		}
		else
		{
			std::cout << "Incorrect Answer\n" << std::endl;
		}
	}
	return 0;
}
