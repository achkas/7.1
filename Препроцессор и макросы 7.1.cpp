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
	
#ifdef MODE

	std::cout << "Работаю в боевом режиме" << std::endl;

#if MODE !=1

	std::cout << "Неизвестный режим. Завершение работы" << std::endl;

#elif MODE 
	std::cout << "Введите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	std::cout << "Результат сложения: " << add(x, y) << std::endl;
#endif
	
#else
	std::cout << "Работаю в режиме тренировки"  << std::endl;

#endif // MODE
	return 0;
}