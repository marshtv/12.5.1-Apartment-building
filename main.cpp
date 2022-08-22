#include <iostream>
#include <string>

int main() {
	std::string surnames[10];
	std::cout << "Input surnames by apartment:" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cin >> surnames[i];
	}

	int apartNum;
	std::cout << "Input three numbers of apartment (1 - 10):" << std::endl;
	for (int j = 0; j < 3; j++) {
		std::cin >> apartNum;
		if (apartNum < 1 || apartNum > 10) {
			std::cout << "Incorrect number!!" << std::endl;
			return 0;
		} else {
			std::cout << surnames[apartNum - 1] << std::endl;
		}
	}
}
