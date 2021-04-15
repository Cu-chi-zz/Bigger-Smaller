#include <iostream>
#include <ctime>

int main() {
	std::srand(time(nullptr));

	int number = std::rand() % 100;
	bool maxTry = false;
	int maxTryNum = 0;
	char userReponse = 'n';
	int userNumber = 0;
	std::cout << "Would you like to have a defined number of tries ? (y/n) : ";
	std::cin >> userReponse;
	std::cin.ignore();

	if (userReponse == 'y') {
		std::cout << "How many maximum tries do you want? : ";
		std::cin >> maxTryNum;
		std::cin.ignore();
		maxTry = true;
	}

	if (maxTry) {
		for (int i = 1; i <= maxTryNum; i++) {
			std::cout << "Enter your number (0-100) : ";
			std::cin >> userNumber;
			std::cin.ignore();

			if (userNumber == number) {
				std::cout << "Congratulations, the mystery number was " << number << std::endl;
				break;
			}
			else if (i == maxTryNum) {
				std::cout << "The mystery number was " << number << ", but you couldn't find it ..." << std::endl;
				break;
			}

			if (userNumber < number) {
				std::cout << "Mhh... bigger.." << std::endl;
			}
			else if (userNumber > number) {
				std::cout << "Mhh... smaller.." << std::endl;
			}
		}
	}
	else {
		while (userNumber != number) {
			std::cout << "Enter your number (0-100) : ";
			std::cin >> userNumber;
			std::cin.ignore();

			if (userNumber == number) {
				std::cout << "Congratulations, the mystery number was " << number << std::endl;
				break;
			}

			if (userNumber < number) {
				std::cout << "Mhh... bigger.." << std::endl;
			}
			else if (userNumber > number) {
				std::cout << "Mhh... smaller.." << std::endl;
			}
		}
	}

	std::cout << "\nPress any key to exit." << std::endl;
	std::cin.ignore();
	return 0;
}