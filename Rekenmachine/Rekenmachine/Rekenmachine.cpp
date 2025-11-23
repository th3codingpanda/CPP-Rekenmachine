#include "Rekenmachine.h"
#include <iostream>
#include <String>
#include <algorithm>
#include <cctype>
std::string ReadLine;
static float Numbers[2] = { 0,0 };
static bool Number1Obtained = false;
static bool Number2Obtained = false;
Rekenmachine::Rekenmachine() {

	bool NumberSelected = false;
	while (!NumberSelected)
	{
	std::cout << "Do you want to: Add(1) Minus(2) Times(3) Devided(4) Modulo(5)" << std::endl;
	std::getline(std::cin,ReadLine);
	try {
		if (std::all_of(ReadLine.begin(), ReadLine.end(), ::isdigit)) {
			int res1 = stoi(ReadLine);
			std::cout << res1 << std::endl;
			switch (res1)
			{
			default: std::cout << "Please enter a correct number" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, ReadLine);
				system("cls");
				break;
			case 1:
				system("cls");
				std::cout << "Selected Plus(1)" << std::endl;
				AskNumberFloat();
				Add(Numbers[0], Numbers[1]);
				NumberSelected = true;
				break;
			case 2:
				system("cls");
				std::cout << "Selected Minus(2)" << std::endl;
				AskNumberFloat();
				Minus(Numbers[0], Numbers[1]);
				NumberSelected = true;
				break;
			case 3:
				system("cls");
				std::cout << "Selected Times(3)" << std::endl;
				AskNumberFloat();
				Times(Numbers[0], Numbers[1]);
				NumberSelected = true;
				break;
			case 4:
				system("cls");
				std::cout << "Selected Modulo(4)" << std::endl;
				AskNumberFloat();
				Devided(Numbers[0], Numbers[1]);
				NumberSelected = true;
				break;
			case 5:
				system("cls");
				std::cout << "Selected Modulo(5)" << std::endl;
				AskNumberInt();
				Modulo(Numbers[0], Numbers[1]);
				NumberSelected = true;
				break;
			}
		}
		else
		{
			std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin, ReadLine);
			system("cls");
		}
	}
	catch(std::exception){
		std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
		std::getline(std::cin,ReadLine);
		system("cls");
	}
	}
}

Rekenmachine::~Rekenmachine() {

}

void Rekenmachine::AskNumberInt() {

	while (!Number2Obtained)
	{
		while (!Number1Obtained)
		{
			std::cout << "Enter First Number" << std::endl;
			std::getline(std::cin, ReadLine);
			try {
				if (std::all_of(ReadLine.begin(), ReadLine.end(), ::isdigit)) {
					Numbers[0] = stoi(ReadLine);
					system("cls");
					Number1Obtained = true;
				}
				else
				{
					std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
					std::getline(std::cin, ReadLine);
					system("cls");
				}
			}
			catch (std::exception) {
				std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, ReadLine);
				system("cls");
			}
		}
		std::cout << "Enter Second Number" << std::endl;
		std::getline(std::cin, ReadLine);
		try {
			if (std::all_of(ReadLine.begin(), ReadLine.end(), ::isdigit)) {
				Numbers[1] = stoi(ReadLine);
				Number2Obtained = true;
				return;
			}
			else
			{
				std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, ReadLine);
				system("cls");
			}
		}
		catch (std::exception) {
			std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin, ReadLine);
			system("cls");
		}
	}	
}
void Rekenmachine::AskNumberFloat() {
	size_t pos = 0;
	while (!Number2Obtained)
	{
		while (!Number1Obtained)
		{
			std::cout << "Enter First Number" << std::endl;
			std::getline(std::cin, ReadLine);
			try
			{
			
				Numbers[0] = std::stof(ReadLine, &pos);
				if (pos == ReadLine.size()) {
					Number1Obtained = true;
				}
				else
				{
					std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
					std::getline(std::cin, ReadLine);
					system("cls");
				}
			}
			catch (std::exception&)
			{
				std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, ReadLine);
				system("cls");
			}
		}
		std::cout << "Enter Second Number" << std::endl;
		std::getline(std::cin, ReadLine);
		try
		{
			Numbers[1] = std::stof(ReadLine, &pos);
			if (pos == ReadLine.size()) {
				Number2Obtained = true;
			}
			else
			{
				std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, ReadLine);
				system("cls");
			}
		}
		catch (std::exception&)
		{
			std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin, ReadLine);
			system("cls");
		}
	}
	
}
void Rekenmachine::Add(float a, float b) {
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}
void Rekenmachine::Minus(float a, float b) {
	std::cout << a << " - " << b << " = " << a - b << std::endl;
}
void Rekenmachine::Times(float a, float b) {
	std::cout << a << " * " << b << " = " << a * b << std::endl;
}
void Rekenmachine::Devided(float a, float b) {
	if (a != 0 && b != 0)
	{
		std::cout << a << " / " << b << " = " << a / b << std::endl;
	}
}
void Rekenmachine::Modulo(int a, int b) {
	std::cout << a << " % " << b << " = " << a % b << std::endl;
}

