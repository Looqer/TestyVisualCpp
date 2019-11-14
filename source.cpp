#include <iostream>
#include <ctime>

int a, b;
std::string signs;
std::string tabledog[ ] = { "Hewi", "Sara", "Sonia" };
std::string tabledog_name1[] = { "He", "Sa", "So" };
std::string tabledog_name2[] = { "wi", "ra", "nia" };

void my_function()
{
	std::cout << "[1] - addition" << std::endl;
	std::cout << "[2] - substraction" << std::endl;
	std::cout << "[3] - determ. the transfer function" << std::endl;
	std::cout << "[4] - string test" << std::endl;
	std::cout << "[5] - Where is a puppy?" << std::endl;
	std::cout << "[0] - shutdown" << std::endl;
}

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

void puppies()
{
	std::cout << "Where is the dog?" << std::endl;
	std::cout << "Give a number! (1-3)" << std::endl;
	std::cin >> a;
	std::cout << "Dog adress is a: " << & tabledog [a] << std::endl;
	std::cout << "Now you have to get a new dog. It name's: " << tabledog_name1[(std::rand() % 3)] << tabledog_name2[(std::rand() % 3)] << std::endl;
}

int main()
{
	srand(time(NULL));
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
		case 5:
			puppies();
			break;
		default:
			break;
		} 
	} while (liczba != 0);

	return 0;
}