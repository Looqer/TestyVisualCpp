#include <iostream>
#include <string>


void moja_funkcja()
{
	std::cout << "[1] - dodawanie" << std::endl;
	std::cout << "[2] - odejmowanie" << std::endl;
	std::cout << "[3] - wyznaczanie transmitancji" << std::endl;
	std::cout << "[4] - testowanie ci¹gów znaków" << std::endl;
	std::cout << "[0] - wyjscie z programu" << std::endl;
}

int a, b;
std::string ciagzn;

void dodawanie()
{
	std::cout << "Podaj sk³adnik" << std::endl;
	std::cin >> a;
	std::cout << "Podaj sk³adnik" << std::endl;
	std::cin >> b;
	std::cout << "Suma jest równa" << a+b << std::endl;
}

void odejmowanie()
{
	std::cout << "Podaj odjemn¹" << std::endl;
	std::cin >> a;
	std::cout << "Podaj odjemnik" << std::endl;
	std::cin >> b;
	std::cout << "Ró¿nica jest równa" << a - b << std::endl;
}

void wyznaczanie()
{
	std::cout << "Jeszcze nie oprogramowano" << std::endl;
}

void ciagiznakow()
{
	std::cout << "Podaj ci¹g znaków" << std::endl;
	std::cin >> ciagzn;
	std::cout << "Twoje znaki to: " << ciagzn << std::endl;
}

int main()
{
	std::cout << "W programie sa dostepne nastepujace opcje:" << std::endl;
	moja_funkcja();
	std::cout << "Zycze przyjemnego korzystania z programu" << std::endl << std::endl;
	int liczba;
	do
	{
		moja_funkcja();
		std::cin >> liczba;
		switch (liczba)
		{
		case 1:
			dodawanie();
			break;
		case 2:
			odejmowanie();
			break;
		case 3:
			wyznaczanie();
			break;
		case 4:
			ciagiznakow();
			break;
		default:
			break;
		} //switch
	} while (liczba != 0);

	return 0;
}