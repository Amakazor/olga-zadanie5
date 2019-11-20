#include <iostream>


/*ZADANIE 5*/
/*Temat: pêtle for, operator arytmetyczny % */

int main()
{
	bool example = true;
	if (!example)
	{
		bool switch_current_example = true;
		/*Przyk³ad 5.1*/
		/*Wypisanie kolejnych liczb z zakresu wprowadzonego z konsoli*/
		if (!switch_current_example)
		{
			int i1 = 0;
			int i2 = 0;

			std::cout << "Wprowadz pierwsza liczbe:" << '\n';
			std::cin >> i1;
			std::cout << "Wprowadz druga liczbe:" << '\n';
			std::cin >> i2;

			if (i1 != i2) //jeœli liczby ró¿ne
			{
				if (i1 < i2) //jeœli liczba pierwsza jest mniejsza
				{
					for (int i = i1; i <= i2; i++) //iteratorowi i przypisujemy na pocz¹tek wartoœæ i1. Pêtla wykonuje siê dopóki i jest mniejsze b¹dŸ równe i2. Co iteracjê zwiêkszamy i o 1.
					{
						std::cout << i << '\n';
					}
				}
				else
				{
					for (int i = i1; i >= i2; i--) //iteratorowi i przypisujemy na pocz¹tek wartoœæ i1. Pêtla wykonuje siê dopóki i jest wiêksze b¹dŸ równe i2. Co iteracjê zmniejszamy i o 1.
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
		/*KONIEC PRZYK£AD 5.1*/
		else
		/*Przyk³ad 5.2*/
		/*Wypisanie kolejnych liczb z zakresu 0 do liczba wprowadzona z konsoli podzielnych przez 15*/
		{
			int i1 = 0;

			std::cout << "Wprowadz liczbe:" << '\n';
			std::cin >> i1;

			for (int i = 0; i <= i1; i++) //iteratorowi i przypisujemy na pocz¹tek wartoœæ 0. Pêtla wykonuje siê dopóki i jest mniejsze b¹dŸ równe i1. Co iteracjê zwiêkszamy i o 1.
			{
				if (i%15 == 0) //jeœli reszta z dzielenia ca³kowitego i przez 15 wynosi 0
				{	
					std::cout << i << '\n';
				}
			}
		}
		/*KONIEC PRZYK£AD 5.2*/
	}
	else
	{
		bool switch_current_exercise = false;
		/*ZADANIE 5.1*/
		// Kolejny raz napisz kod na potêgowanie. Tym razam skorzystaj z pêtli for w celu obliczenia wyniku
		// 1. pobierz z konsoli podstawê oraz wyk³adnik.
		// 2. opieraj¹c siê o wartoœæ wyk³adnika odpowiedni¹ liczbê razy przemnó¿ podstawê przez siebie.
		// 3. wypisz wynik na konsolê.
		if (!switch_current_exercise)
		{
			int podstawa = 0;
			int wykladnik = 0;
			int suma = 1;

			std::cout << "Podaj prosze podstawe Twojej potegi: " << "\n\n";
			std::cin >> podstawa; 
			std::cout << "\n\n";
			std::cout << "Podaj prosze wykladnik Twojej potegi: " << "\n\n";
			std::cin >> wykladnik;
			std::cout << "\n\n";

			for (int i = 1; i <= wykladnik; i++)
			{
				suma *= podstawa;
				
			}

			std::cout << "Twoj wynik to: " << suma;

		}
		/*KONIEC ZADANIE 5.1*/
		else
		/*ZADANIE 5.2*/
		// Napisz program który dla wszystkich liczb naturalnych od 0 do podanej liczby naturalnej bêdzie:
		// A. Informowa³ gdy liczba jest podzielna przez 2, ale nie przez 6.
		// B. Informowa³ gdy liczba jest podzielna przez 3, ale nie przez 6.
		// C. Informowa³ gdy liczba jest podzielna przez 6.
		//
		// 1. pobierz z konsoli liczbê.
		// 2. przeiteruj od 0 do liczby w³¹cznie wypisuj¹c w trakcie informacje z podpunktów A. B. C.
		{
			int liczba_naturalna = 0;

			std::cout << "Podaj prosze Twoja liczbe naturalna: " << "\n\n";
			std::cin >> liczba_naturalna;
			std::cout << "\n\n";

			for (int i = 0; i <= liczba_naturalna; i++)
			{	
				if (i == 0)
				{
					std::cout << "Liczba " << i << " jest podzielna przez 2, 3 i 6" << "\n\n";
				}
				else if (i % 2 == 0)
				{
					if (i % 3 != 0)
					{
						std::cout << "Liczba " << i <<  " jest podzielna przez 2, lecz nie jest podzielna przez 3 oraz 6" << "\n\n";
						
					}
					else
					{
						std::cout << "Liczba " << i << " jest podzielna przez 2, 3 i 6." << "\n\n";
					}
				}
				else if (i % 3 == 0)
				{
					std::cout << "Liczba " << i << " jest podzielna przez 3, lecz nie jest podzielna przez 2 i 6" << "\n\n";
				}
				else
				{
					std::cout << "Liczba " << i << " nie jest podzielna ani przez 2 ani przez 3. Przez 6 tez nie" << "\n\n";
				}
			}
			

		}
		/*KONIEC ZADANIE 5.2*/
	}
}