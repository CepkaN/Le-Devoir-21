#include<iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	std::cout << "�������� � ���������.\n";
	int X, Y;
	std::cout << "������� ��� ����� : ";
	std::cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	int res = (*px + *py) / 2;
	std::cout << "������� �������������� ����� " << res << '\n';

	return 0;
}