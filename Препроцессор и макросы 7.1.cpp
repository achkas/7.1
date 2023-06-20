// Препроцессор и макросы 7.1

#include <iostream>
#include <windows.h>
#define MODE 1
//#define add(x,y) ((x)+(y))

int add(int x, int y) {
	return x + y;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	int y;

#if !defined MODE
#error You need to define MODE!
#endif

#if MODE ==1
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	std::cout << "Результат сложения: " << add(x, y) << std::endl;	

#elif MODE==0 
		std::cout << "Работаю в режиме тренировки"  << std::endl;

#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#endif
	return 0;
}