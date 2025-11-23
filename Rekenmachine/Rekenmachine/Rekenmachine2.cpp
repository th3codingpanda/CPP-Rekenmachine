#include "Rekenmachine2.h"
#include <iostream>
#include <String>
#include <algorithm>
#include <cctype>
std::string GetLine;
float Numbers[2] = { 0,0 };
Rekenmachine2::Rekenmachine2() {
	while (true)
	{
		std::cout << "Do you want to: Add(1) Minus(2) Times(3) Devided(4) Modulo(5)" << std::endl;
		int res1 = AskNumberInt();
		switch (res1)
		{
		case 1: 
		Numbers[0] = AskNumberFloat();
		Numbers[1] = AskNumberFloat();
		Add(Numbers[0], Numbers[1]);
		case 2:
			Numbers[0] = AskNumberFloat();
			Numbers[1] = AskNumberFloat();
			Minus(Numbers[0], Numbers[1]);
		case 3:
			Numbers[0] = AskNumberFloat();
			Numbers[1] = AskNumberFloat();
			Times(Numbers[0], Numbers[1]);
		case 4:
			Numbers[0] = AskNumberFloat();
			Numbers[1] = AskNumberFloat();
			Devided(Numbers[0], Numbers[1]);
		case 5:
			Numbers[0] = AskNumberInt();
			Numbers[1] = AskNumberInt();
			Modulo(Numbers[0], Numbers[1]);
		return;
		default:
			std::cout << "Please enter a correct number" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin, GetLine);
			system("cls");
			break;
		}
	}

}
Rekenmachine2::~Rekenmachine2() {

}
int Rekenmachine2::AskNumberInt() {
	while (true)
	{
		std::cout << "Enter A Number" << std::endl;
		std::getline(std::cin, GetLine);
		system("cls");
	try
	{
		if (std::all_of(GetLine.begin(), GetLine.end(), ::isdigit)) {
			return std::stoi(GetLine);
		}
		else
		{
			std::cout << "Please enter a correct whole number" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin,GetLine);
			system("cls");
		}
	}
	catch (const std::exception&)
	{
		std::cout << "Please enter a correct whole number" << std::endl << "Press enter to continue" << std::endl;
		std::getline(std::cin, GetLine);
		system("cls");
	}
	}
}
float Rekenmachine2::AskNumberFloat() {
	size_t pos = 0;
	float CheckIfFloat;
	while (true)
	{
		std::cout << "Enter A Number" << std::endl;
		std::getline(std::cin, GetLine);
		system("cls");
		try
		{
			CheckIfFloat = std::stof(GetLine, &pos);
			if (pos == GetLine.size()) {
				return CheckIfFloat;
			}
			else
			{
				std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
				std::getline(std::cin, GetLine);
				system("cls");
			}
		}
		catch (std::exception&)
		{
			std::cout << "Entered wrong Input" << std::endl << "Press enter to continue" << std::endl;
			std::getline(std::cin, GetLine);
			system("cls");
		}
	}
}
void Rekenmachine2::Add(float a, float b) {
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}
void Rekenmachine2::Minus(float a, float b) {
	std::cout << a << " - " << b << " = " << a - b << std::endl;
}
void Rekenmachine2::Times(float a, float b) {
	std::cout << a << " * " << b << " = " << a * b << std::endl;
}
void Rekenmachine2::Devided(float a, float b) {
	if (a != 0 && b != 0)
	{
		std::cout << a << " / " << b << " = " << a / b << std::endl;
	}
}
void Rekenmachine2::Modulo(int a, int b) {
	std::cout << a << " % " << b << " = " << a % b << std::endl;
}

