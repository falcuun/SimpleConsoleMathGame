#include <iostream>
#include <ctime>

void addition(int fn, int sn);
void multiplication(int fn, int sn);
void division(int fn, int sn);

void answer_check(int answer);

void (*funcs[2]) (int fn, int sn);

int answer;
int user_answer;

int main()
{
	funcs[0] = addition;
	funcs[1] = multiplication;

	srand(time(NULL));
	while (1)
	{
		int first_random = (rand() % 10) + 1; // Generating random number from 1 to 100.
		int second_random = (rand() % 10) + 1; // Generating random number from 1 to 100.

		int random_function = (rand() % 2);
		funcs[random_function](first_random, second_random);
	}
	return 0;
}

void addition(int fn, int sn)
{

	std::cout << "\033[1;34m" << fn << " + " << sn << "\033[0m" << std::endl;
	answer = fn + sn; // Generating ADDITION (+) answer.
	answer_check(answer);
}

void multiplication(int fn, int sn)
{
	std::cout << "\033[1;33m" << fn << " x " << sn << "\033[0m" << std::endl;
	answer = fn * sn; // Generating MULTIPLICATION (*) answer.
	answer_check(answer);
}

void answer_check(int answer)
{
	std::cout << "Input your answer: ";
	std::cin >> user_answer;
	std::cin.clear();

	if (user_answer == answer)
	{
		std::cout <<"\033[1;42mCorrect Answer\033[0m\n" << std::endl;
	}
	else
	{
		std::cout << "\033[1;41mIncorrect Answer\033[0m\n" << std::endl;
	}
}