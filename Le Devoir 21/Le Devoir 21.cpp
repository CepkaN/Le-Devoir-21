#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1.
	std::cout << "Введение в указатели.\n";
	int X, Y;
	std::cout << "Введите два числа : ";
	std::cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	int res = (*px + *py) / 2;
	std::cout << "Среднее арифметическое равно " << res << '\n';

	return 0;
}