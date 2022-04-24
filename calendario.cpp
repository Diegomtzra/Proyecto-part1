
#include <iostream>

int main()
{
	int today, month, year;

	std::cout << "Acontinuacion ingrese la fecha del dia de hoy. " << std::endl;
	std::cout << "Ingrese el dia: ";
	std::cin >> today;
	std::cout << "Ingrese el mes: ";
	std::cin >> month;
	std::cout << "Ingrese el año: ";
	std::cin >> year;

	if (today <= 31 && today >=01) {
		if (month <= 12 && month >= 01) {
			if (year >= 2000) {

			}
			else {
				std::cout << "Error en la fecha. ";
			}
		}
		else {
			std::cout << "Error en la fecha. ";
		}
	}
	else {
		std::cout << "Error en la fecha.";
	}

	return 0;
}
