#include <iostream>

using namespace std;

int main()
	//Стандартные вещи для с++
{
	setlocale(LC_ALL, "Russian");
	int number = 0;

	while (true)//Проверочка для программы
	{
		cout << "Введите число от 1 до 9999: ";
		cin >> number;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;
			cout << "Неправильно.\n" << "Давай по новой." << endl;
			cout << endl;
		}

		else if (number > 9999 || number < 1)
		{
			cout << endl;
			cout << "НЕПРАВИЛЬНАААА.\n" << "ДАВАЙ по новой." << endl;
			cout << endl;
		}

		else
		{
			break;
		}
	}
	//Ну а тут начинается веселье
	if ((number / 1000) % 10 == 1)
	{
		cout << "одна тысяча ";
	}
	else if ((number / 1000) % 10 == 2)
	{
		cout << "две тысячи ";
	}
	else if ((number / 1000) % 10 == 3)
	{
		cout << "три тысячи ";
	}
	else if ((number / 1000) % 10 == 4)
	{
		cout << "четыре тысячи ";
	}
	else if ((number / 1000) % 10 == 5)
	{
		cout << "пять тысяч ";
	}
	else if ((number / 1000) % 10 == 6)
	{
		cout << "шесть тысяч ";
	}
	else if ((number / 1000) % 10 == 7)
	{
		cout << "семь тысяч ";
	}
	else if ((number / 1000) % 10 == 8)
	{
		cout << "восемь тысяч ";
	}
	else if ((number / 1000) % 10 == 9)
	{
		cout << "девять тысяч ";
	}//Делим, присваиваем делим.

	if ((number / 100) % 10 == 1)
	{
		cout << "сто ";
	}
	else if ((number / 100) % 10 == 2)
	{
		cout << "двести ";
	}
	else if ((number / 100) % 10 == 3)
	{
		cout << "триста ";
	}
	else if ((number / 100) % 10 == 4)
	{
		cout << "четыреста ";
	}
	else if ((number / 100) % 10 == 5)
	{
		cout << "пятьсот ";
	}
	else if ((number / 100) % 10 == 6)
	{
		cout << "шестьсот ";
	}
	else if ((number / 100) % 10 == 7)
	{
		cout << "семьсот ";
	}
	else if ((number / 100) % 10 == 8)
	{
		cout << "восемьсот ";
	}
	else if ((number / 100) % 10 == 9)
	{
		cout << "девятьсот ";
	}

	if ((number / 10) % 10 == 1)
	{
		if (number % 10 == 0)
		{
			cout << "десять рублей.\n";
		}
		else if (number % 10 == 1)
		{
			cout << "одиннадцать рублей.\n";
		}
		else if (number % 10 == 2)
		{
			cout << "двенадцать рублей.\n";
		}
		else if (number % 10 == 3)
		{
			cout << "тринадцать рублей.\n";
		}
		else if (number % 10 == 4)
		{
			cout << "четырнадцать рублей.\n";
		}
		else if (number % 10 == 5)
		{
			cout << "пятнадцать рублей.\n";
		}
		else if (number % 10 == 6)
		{
			cout << "шестнадцать рублей.\n";
		}
		else if (number % 10 == 7)
		{
			cout << "семнадцать рублей.\n";
		}
		else if (number % 10 == 8)
		{
			cout << "восемнадцать рублей.\n";//ЕЩЕ больше делим присваиваем делим.
		}
		else if (number % 10 == 9)
		{
			cout << "девятнадцать рублей.\n";
		}
	}

	else
	{	
		if ((number / 10) % 10 == 2)
		{
			cout << "двадцать ";
		}
		else if ((number / 10) % 10 == 3)
		{
			cout << "тридцать ";
		}
		else if ((number / 10) % 10 == 4)
		{
			cout << "сорок ";
		}
		else if ((number / 10) % 10 == 5)
		{
			cout << "пятьдесят ";
		}
		else if ((number / 10) % 10 == 6)
		{
			cout << "шестьдесят ";
		}
		else if ((number / 10) % 10 == 7)
		{
			cout << "семьдесят ";
		}
		else if ((number / 10) % 10 == 8)
		{
			cout << "восемьдесят ";
		}
		else if ((number / 10) % 10 == 9)
		{
		cout << "девяносто ";
		}

		if (number % 10 == 0)
		{
			cout << "рублей.\n";
		}
		else if (number % 10 == 1)
		{
			cout << "один рубль.\n";
		}
		else if (number % 10 == 2)
		{
			cout << "два рубля.\n";
		}
		else if (number % 10 == 3)
		{
			cout << "три рубля.\n";
		}
		else if (number % 10 == 4)
		{
			cout << "четыре рубля.\n";
		}
		else if (number % 10 == 5)
		{
			cout << "пять рублей.\n";
		}
		else if (number % 10 == 6)
		{
			cout << "шесть рублей.\n";
		}
		else if (number % 10 == 7)
		{
			cout << "семь рублей.\n";
		}
		else if (number % 10 == 8)
		{
			cout << "восемь рублей.\n";
		}
		else if (number % 10 == 9)
		{
			cout << "девять рублей.\n";
		}
	}
	
	cout << endl;
	system("pause");
	return 0;//Ну и стандартная  плюшка с++
}
