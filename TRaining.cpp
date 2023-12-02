#include<iostream>
int main() {
	short numBefore, numAfter,numClose;
	std::cout << "Input number up to 27656" << std::endl;
	std::cin >> numClose;
	numBefore = 1;
	numAfter = 1;
	std::cout << 1  <<" " << 1 << " ";
	while (numBefore < numClose || numAfter < numClose) {
		numBefore += numAfter;
		if (numBefore>numClose) {
			break;
		}
		std::cout <<numBefore << " ";
		numAfter += numBefore ;
		if (numAfter > numClose) {
			break;
		}
		std::cout << numAfter << " ";
	}
	return 0;
}