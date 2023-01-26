// вариант 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	char menu = 0;
	int amount = 0;
	double toyCar = 350.00, dool = 243.00, mimiMishka = 450.00, dozdik = 15.00, robot = 900.00, sum = 0, sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0,sum5 = 0;
	int amountToyCar = 10, amountDool = 15, amountMimiMishka = 456, amountDozdik = 1000, amountRobot = 456;

	cout << "********Новогодняя распродажа******" << "\n";

	

	for (int i = 0; i <=4; i++)
	{
		cout << R"( Выберете товар из списка :
     1 - Игрушечная машина -   Цена - 350.00 р,
     2 - Кукла  -              Цена - 240.00 р,
     3 - Игрушка МимиМишка -   Цена - 450.00 р,
     4 - Дождик "Новогодний" - Цена - 15.00 р,
     5 - Робот    -           Цена - 900.00 р,    
			)" << "\n";
		cin >> menu;
		switch (menu)
		{
		case '1':
			cout << "Выберете количество товара - Игрушечная машинка: \n";
			cin >> amount;
			sum1 = toyCar * amount;
			amountToyCar = amountToyCar - amount;
			break;
		case '2':
			cout << "Выберете количество товара - Кукла: \n";
			cin >> amount;
			sum2 = dool * amount;
			amountDool = amountDool - amount;
			break;
		case '3':
			cout << "Выберете количество товара - Игрушка МимиМишка: \n";
			cin >> amount;
			sum3 = amountMimiMishka * amount;
			amountMimiMishka = amountMimiMishka - amount;
			break;
		case '4':
			cout << "Выберете количество товара - Дождик Новогодний  : \n";
			cin >> amount;
			sum4 = amountDozdik * amount;
			amountDozdik = amountDozdik - amount;
			break;
		case '5':
			cout << "Выберете количество товара -  Робот : \n";
			cin >> amount;
			sum5 = amountRobot * amount;
			amountRobot = amountRobot - amount;
			break;
		default:
			cout << "Такой позиции нет в магазине!! \n";
			break;
			
		}
		sum = sum1 + sum2 + sum3+ sum4+ sum5 ;
	}

	
		
		cout << sum;



}

