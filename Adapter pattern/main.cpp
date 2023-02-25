#include "Convert.h"


void main()
{
	Product* prod = new Adapter(new Dollar);
	int quantity;
	float price;
	short key, key_do;

	do
	{
		system("cls");
		cout << "Choose your product\n1 - milk, 2 - tomatos, 3 - shampoo" << endl;
		cin >> key;
		switch (key)
		{
		case 1:
		{

			do
			{
				system("cls");
				price = 1.25;
				cout << "Pice 1 litr milk = " << price << endl;
				cout << "Enter the number of liters of milk you want to buy" << endl;
				try
				{
					cin >> quantity;
					if (quantity < 0)
						throw exception("numer is error, press enter and try again");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity < 0);
			system("cls");
			cout << "Price " << quantity << " liters of milk = " << prod->convert_rub(quantity, price) << " RUB" << endl;

		} break;
		case 2:
		{
			do
			{
				system("cls");
				price = 2.73;
				cout << "Pice 1 kilogramm tomatos = " << price << endl;
				cout << "Enter the number kilogramm of tomatos you want to buy" << endl;
				try
				{
					cin >> quantity;
					if (quantity < 0)
						throw exception("numer is error, press enter and try again");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity < 0);
			system("cls");
			cout << "Price " << quantity << " kilogramm of tomatos = " << prod->convert_rub(quantity, price) << " RUB" << endl;

		} break;
		case 3:
		{
			do
			{
				system("cls");
				price = 4.36;
				cout << "Pice 1 tube shampoo = " << price << endl;
				cout << "Enter the number tubes of shampoo you want to buy" << endl;
				try
				{
					cin >> quantity;
					if (quantity < 0)
						throw exception("numer is error, press enter and try again");
				}
				catch (exception& str)
				{
					system("cls");
					cout << str.what() << endl;
					system("pause");
				}
			} while (quantity < 0);
			system("cls");
			cout << "Price " << quantity << " tubes of shampoo = " << prod->convert_rub(quantity, price) << " RUB" << endl;

		} break;
		default:
			cout << "This number is false" << endl;
			break;
		}
		cout << "If you wanna continue press 1, if no press other key: ";
		cin >> key_do;
	} while (key_do == 1);
}