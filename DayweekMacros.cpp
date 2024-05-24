// После заданий из 20 модуля не отпускает чувство
// что где-то есть подвох.

#include "DayweekMacros.h"
#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

int main()
{
	int number;
	std::cout << "Enter number of weekday: ";
	std::cin >> number;
	
	switch(number)
	{
	case 1:
		std::cout << "MONDAY" << '\n';
		break;
	case 2:
		std::cout << "TUESDAY" << '\n';
		break;
	case 3:
		std::cout << "WEDNESDAY" << '\n';
		break;
	case 4:
		std::cout << "THURSDAY" << '\n';
		break;
	case 5:
		std::cout << "FRIDAY" << '\n';
		break;
	case 6:
		std::cout << "SATURDAY" << '\n';
		break;
	case 7:
		std::cout << "SUNDAY" << '\n';
		break;
	default:
		std::cout << "Incorrect enter!" << '\n';
	}
	return 0;
}
