#include "Fecha.h"
#include <iostream>

void Fecha::Asignar() {

	std::cout << "Acontinuacion ingrese la fecha del dia de hoy. " << std::endl;
	std::cout << "Ingrese el dia: ";
	std::cin >> today;
	std::cout << "Ingrese el mes: ";
	std::cin >> month;
	std::cout << "Ingrese el año: ";
	std::cin >> year;

	system("pause");
	system("cls");

	std::cout << "Acontinuacion ingrese los dias a sumar. " << std::endl;
	std::cout << "Ingrese el o los dia(s): ";
	std::cin >> days;

	system("pause");
	system("cls");

	std::cout << "La fecha que usted coloco fue: " << today << "/" << month << "/" << year << std::endl;
	std::cout << std::endl;
	std::cout << "Usted sumara los siguientes dias: " << days << std::endl;

	total = today + days;

	system("pause");
	system("cls");

	if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0) {
		if (month == 1 || month == 2 || month == 3 || month == 4 || month == 5 || month == 6 || month == 7 ||
			month == 8 || month == 9 || month == 10 || month == 11 || month == 12) {
			if (total >= 1) {
				if (total > 31 && total <= 60) {
					std::cout << "Su nueva fecha es:" << total - 31 << "/" << month + 1 << "/" << year;
				}
				if (total > 60 && total <= 91) {
					std::cout << "Su nueva fecha es:" << total - 60 << "/" << month + 2 << "/" << year;
				}
				if (total > 91 && total <= 121) {
					std::cout << "Su nueva fecha es:" << total - 91 << "/" << month + 3 << "/" << year;
				}
				if (total > 366) {
					std::cout << "Su nueva fecha es:" << total - 366 << "/" << month << "/" << year + 1;
				}
			}
			else {
				std::cout << "Error de fecha. ";
			}
		}
	}

	else if (month == 1 || month == 2 || month == 3 || month == 4 || month == 5 || month == 6 || month == 7 ||
			month == 8 || month == 9 || month == 10 || month == 11 || month == 12) {

			if (total >= 1) {
				if (total > 31 && total <= 59) {
					std::cout << "Su nueva fecha es:" << total - 31 << "/" << month + 1 << "/" << year;
				}
				if (total > 59 && total <= 90) {
					std::cout << "Su nueva fecha es:" << total - 59 << "/" << month + 2 << "/" << year;
				}
				if (total > 90 && total <= 120) {
					std::cout << "Su nueva fecha es:" << total - 90 << "/" << month + 3 << "/" << year;
				}
				if (total > 365) {
					std::cout << "Su nueva fecha es:" << total - 365 << "/" << month << "/" << year + 1;
				}
			}
			else {
				std::cout << "Error de fecha. ";
			}
		 }
}