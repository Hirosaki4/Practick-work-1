#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	//Завдання 1
	/*int Integer = 64;
	float Float = 3.14;
	double Double = 2.71828;
	char Char = 'A';
	bool Bool = false;

	cout << Integer << endl;
	cout << Float << endl;
	cout << Double << endl;
	cout << Char << endl;
	cout << Bool << endl;*/

	//Завдання 2
	/*int SignedInt = 2147483647;
	SignedInt += 1; 

	unsigned int UnsignedInt = 4294967295; 
	UnsignedInt += 1; 

	cout << "Переповнення для signed int: " << SignedInt << endl;
	cout << "Переповнення для unsigned int: " << UnsignedInt << endl;*/

	//Завдання 3
	
	//for 
	/*for (int i = 1; i <= 10; ++i) {
		cout << i << " ";
	}
	cout << endl;*/
	//while
	/*	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		++i;
	}
	cout << "Сума чисел від 1 до 100: " << sum << endl;*/
	//do-while
	/*int num = 2;
	do {
		cout << num << " ";
		num += 2;
	} while (num <= 20);
	cout << endl;
	return 0;*/
	//Задвання 4
	/*int number;
	cout << "Введіть число: ";
	cin >> number;

	if (number % 2 == 0) {
		cout << "Число " << number << " парнe." << endl;
	}
	else {
		cout << "Число " << number << "непарне." << endl;
	}*/


	//Завдання 5
	/*int firstNumber = 10;
	int secondNumber = firstNumber + 3; 
	int thirdNumber = firstNumber + secondNumber; 

	cout << "Перша змінна: " << firstNumber << endl;
	cout << "Друга змінна: " << secondNumber << endl;
	cout << "Третя змінна: " << thirdNumber << endl;*/

	//Завдання 6
	/*int plates; 
	int glasses; 
	int knives; 

	cout << "Введіть кількість тарілок: ";
	cin >> plates; 

	cout << "Введіть кількість стаканів: ";
	cin >> glasses; 

	cout << "Введіть кількість ножів: ";
	cin >> knives; 

	int totalItems = plates + glasses + knives; 

	cout << "Загальна кількість предметів для сервірування столу: " << totalItems << endl;*/

	//Завдання 7
	/*int waterQuantity = 10; 
	double waterPriceUAH = 15.0; 

	int coffeeQuantity = 5; 
	double coffeePriceUAH = 60.0; 

	double totalWaterCostUAH = waterQuantity * waterPriceUAH;
	double totalCoffeeCostUAH = coffeeQuantity * coffeePriceUAH;

	double totalCostUAH = totalWaterCostUAH + totalCoffeeCostUAH;

	cout << "Вартість води: " << totalWaterCostUAH << " грн" << endl;
	cout << "Вартість кави: " << totalCoffeeCostUAH << " грн" << endl;
	cout << "Загальна вартість товарів: " << totalCostUAH << " грн" << endl;*/
}
