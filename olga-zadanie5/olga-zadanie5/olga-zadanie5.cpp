#include <iostream>

/*ZADANIE 5*/
/*Temat: p�tle for, operator arytmetyczny % */

int main()
{
	bool example = true;
	if (example)
	{
		bool switch_current_example = true;
		/*Przyk�ad 5.1*/
		/*Wypisanie kolejnych liczb z zakresu wprowadzonego z konsoli*/
		if (!switch_current_example)
		{
			int i1 = 0;
			int i2 = 0;

			std::cout << "Wprowadz pierwsza liczbe:" << '\n';
			std::cin >> i1;
			std::cout << "Wprowadz druga liczbe:" << '\n';
			std::cin >> i2;

			if (i1 != i2) //je�li liczby r�ne
			{
				if (i1 < i2) //je�li liczba pierwsza jest mniejsza
				{
					for (int i = i1; i <= i2; i++) //iteratorowi i przypisujemy na pocz�tek warto�� i1. P�tla wykonuje si� dop�ki i jest mniejsze b�d� r�wne i2. Co iteracj� zwi�kszamy i o 1.
					{
						std::cout << i << '\n';
					}
				}
				else
				{
					for (int i = i1; i >= i2; i--) //iteratorowi i przypisujemy na pocz�tek warto�� i1. P�tla wykonuje si� dop�ki i jest wi�ksze b�d� r�wne i2. Co iteracj� zmniejszamy i o 1.
					{
						std::cout << i << '\n';
					}
				}
			}
			else
			{
				std::cout << "liczby sa takie same..." << '\n';
			}
		}
		/*KONIEC PRZYK�AD 5.1*/
		else
		/*Przyk�ad 5.2*/
		/*Wypisanie kolejnych liczb z zakresu 0 do liczba wprowadzona z konsoli podzielnych przez 15*/
		{
			int i1 = 0;

			std::cout << "Wprowadz liczbe:" << '\n';
			std::cin >> i1;

			for (int i = 0; i <= i1; i++) //iteratorowi i przypisujemy na pocz�tek warto�� 0. P�tla wykonuje si� dop�ki i jest mniejsze b�d� r�wne i1. Co iteracj� zwi�kszamy i o 1.
			{
				if (i%15 == 0) //je�li reszta z dzielenia ca�kowitego i przez 15 wynosi 0
				{	
					std::cout << i << '\n';
				}
			}
		}
		/*KONIEC PRZYK�AD 5.2*/
	}
	else
	{
		bool switch_current_exercise = false;
		/*ZADANIE 5.1*/
		// Kolejny raz napisz kod na pot�gowanie. Tym razam skorzystaj z p�tli for w celu obliczenia wyniku
		// 1. pobierz z konsoli podstaw� oraz wyk�adnik.
		// 2. opieraj�c si� o warto�� wyk�adnika odpowiedni� liczb� razy przemn� podstaw� przez siebie.
		// 3. wypisz wynik na konsol�.
		if (!switch_current_exercise)
		{

		}
		/*KONIEC ZADANIE 5.1*/
		else
		/*ZADANIE 5.2*/
		// Napisz program kt�ry dla wszystkich liczb naturalnych od 0 do podanej liczby naturalnej b�dzie:
		// A. Informowa� gdy liczba jest podzielna przez 2, ale nie przez 6.
		// B. Informowa� gdy liczba jest podzielna przez 3, ale nie przez 6.
		// C. Informowa� gdy liczba jest podzielna przez 6.
		//
		// 1. pobierz z konsoli liczb�.
		// 2. przeiteruj od 0 do liczby w��cznie wypisuj�c w trakcie informacje z podpunkt�w A. B. C.
		{

		}
		/*KONIEC ZADANIE 5.2*/
	}
}