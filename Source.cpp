#include <iostream>
#include <ctime>

int answer;
int user_answer;

void addition(int fn, int sn); 
void answer_check(int answer);

int main()
{
	
	srand(time(NULL));
	while (1)
	{
		int first_random = (rand() % 10) + 1; // Generating random number from 1 to 100.
		int second_random = (rand() % 10) + 1; // Generating random number from 1 to 100.

		int random_function = (rand() % 2);

		addition(first_random, second_random);
	}
	return 0;
}

void addition(int fn, int sn)
{
	std::cout <<fn << " + " << sn << std::endl;
	answer = fn + sn; // Generating ADDITION (+) answer.
	answer_check(answer);
}

void answer_check(int answer)
{
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
