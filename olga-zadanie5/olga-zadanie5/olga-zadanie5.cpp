#include <iostream>

/*ZADANIE 5*/
/*Temat: pêtle for, operator arytmetyczny % */

int main()
{
	bool example = true;
	if (example)
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
		if (!switch_current_exercise)
		{

		}
		else
		{

		}
	}
}




/*ZADANIE 4.1*/
// Przerób Twój kod z poprzedniego zadania. Wykorzystaj odpowiednie petle w celu sprawdzenia czy dane wprowadzone przez u¿ytkownika s¹ poprawne tak d³ugo, a¿ poda poprawne dane
// 1. Wykorzystaj pêtle w wyborze w menu oraz przy podawaniu drugiej liczby jeœli wybrane zostanie dzielenie
// 2. Poprawnoœæ danych w wyborze w menu sprawdŸ u¿ywaj¹c operatora ||
	
/*KONIEC ZADANIE 4.1*/
