#include <iostream>

void my_function()
{
	std::cout << "[1] - addition" << std::endl;
	std::cout << "[2] - substraction" << std::endl;
	std::cout << "[3] - determ. the transfer function" << std::endl;
	std::cout << "[4] - string test" << std::endl;
	std::cout << "[0] - shutdown" << std::endl;
}

int a, b;
std::string signs;

void addition()
{
	std::cout << "First addend " << std::endl;
	std::cin >> a;
	std::cout << "Second addend " << std::endl;
	std::cin >> b;
	std::cout << "Sum is equal: " << a+b << std::endl;
}

void substraction()
{
	std::cout << "Minuend " << std::endl;
	std::cin >> a;
	std::cout << "Subtrahend " << std::endl;
	std::cin >> b;
	std::cout << "Difference is equal: " << a - b << std::endl;
}

void transferfun()
{
	std::cout << "Not done yet." << std::endl;
}

void strings()
{
	std::cout << "Podaj ci¹g znaków" << std::endl;
	std::cin >> signs;
	std::cout << "Twoje znaki to: " << signs << std::endl;
}

int main()
{
	std::cout << "Functions avaliable in this program: " << std::endl;
	my_function();
	std::cout << "I hope you enjoy using the program." << std::endl << std::endl;
	int liczba;
	do
	{
		my_function();
		std::cin >> liczba;
		switch (liczba)
		{
		case 1:
			addition();
			break;
		case 2:
			substraction();
			break;
		case 3:
			transferfun();
			break;
		case 4:
			strings();
			break;
		default:
			break;
		} 
	} while (liczba != 0);

	return 0;
}