#include "app.h"
#include <iostream>

using namespace vsite::oop::v4;

int main()
{
	int animalId = 0;
	leg_counter count_legs;

	while (true)
	{
		std::cout << "Odaberite životinju između 1-3 ili 0 za izlaz: ";
		std::cin >> animalId;

		if (animalId < 1 || animalId > 3)
		{
			break;
		}

		std::cout << "Odabrali ste: " << count_legs.add_animal(animal_factory(animalId).get()) << std::endl;
	}
	std::cout << "Suma nogu svih životinja: " << count_legs.legs() << std::endl;
}