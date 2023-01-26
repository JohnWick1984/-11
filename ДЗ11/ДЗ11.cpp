// ДЗ11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int idGoods = 0;
	int countGoods1 = 10, countGoods2 = 15, countGoods3 = 456, countGoods4 = 1000, countClient = 0, countGoodsAll = 0, moreGoods = 0;
	double toyCar = 350.00, dool = 243.00, mimiMishka = 450.00, dozdik = 15.00, sumPosition = 0, sumAll = 0, countContainGoods = 0, containSum = 0;


	cout << "********Новогодняя распродажа******" << "\n";

	cout << "Желаемое количество обслуживаемых клиентов подряд \n";
	cin >> countClient;

	while (countClient != 0)
	{
		cout << "Введите количество позиций покупателя : \n";

		cin >> countGoodsAll;
		if (countGoodsAll > 4)
		{
			while (countGoodsAll != 0)
			{
				cout << R"( Выберете товар из списка :
     1- Игрушечная машина - Цена - 350.00 р,
     2- Кукла  - Цена - 240.00 р,
     3- Игрушка МимиМишка - Цена - 450.00 р,
     4- Дождик "Новогодний" - Цена - 15.00 р.    
			)" << "\n";
				cin >> idGoods;
			}
			cout << "Есть ли еще товары у покупателя?" << "\n";
			cin >> moreGoods;

			switch (idGoods)
			{
			case '1':
				cout << "Выберете количество товара - игрушечная машинка: \n";
				cin >> countContainGoods;
				containSum = toyCar * countContainGoods;
				countGoods1 = countGoods1 - countContainGoods;
				break;
			case '2':
				cout << "Выберете количество товара - Кукла: \n";
				cin >> countContainGoods;
				containSum = dool * countContainGoods;
				countGoods2 = countGoods2 - countContainGoods;
				break;
			case '3':
				cout << "Выберете количество товара - игрушка МимиМишка: \n";
				cin >> countContainGoods;
				containSum = mimiMishka * countContainGoods;
				countGoods3 = countGoods3 - countContainGoods;
				break;
			case '4':
				cout << "Выберете количество товара - Дождик: \n";
				cin >> countContainGoods;
				containSum = dozdik * countContainGoods;
				countGoods4 = countGoods4 - countContainGoods;
				break;
			default:
				break;
			}

		}
	}