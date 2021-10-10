
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
int number = 0;
cout << "Введите число от 1 до 9999: ";
cin >> number;
cout << endl;

if (number < 1 || number > 9999)
{
	cout << "Число не входит в диапазон от 1 до 9999!" << endl;
}
else
{
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
	}

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
			cout << "десять рублей.";
		}
		else if (number % 10 == 1)
		{
			cout << "одиннадцать рублей.";
		}
		else if (number % 10 == 2)
		{
			cout << "двенадцать рублей.";
		}
		else if (number % 10 == 3)
		{
			cout << "тринадцать рублей.";
		}
		else if (number % 10 == 4)
		{
			cout << "четырнадцать рублей.";
		}
		else if (number % 10 == 4)
		{
			cout << "пятнадцать рублей.";
		}
		else if (number % 10 == 4)
		{
			cout << "шестнадцать рублей.";
		}
		else if (number % 10 == 5)
		{
			cout << "семнадцать рублей.";
		}
		else if (number % 10 == 6)
		{
			cout << "восемнадцать рублей.";
		}
		else if (number % 10 == 7)
		{
			cout << "девятнадцать рублей.";
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
			cout << "рублей.";
		}
		else if (number % 10 == 1)
		{
			cout << "один рубль.";
		}
		else if (number % 10 == 2)
		{
			cout << "два рубля.";
		}
		else if (number % 10 == 3)
		{
			cout << "три рубля.";
		}
		else if (number % 10 == 4)
		{
			cout << "четыре рубля.";
		}
		else if (number % 10 == 5)
		{
			cout << "пять рублей.";
		}
		else if (number % 10 == 6)
		{
			cout << "шесть рублей.";
		}
		else if (number % 10 == 7)
		{
			cout << "семь рублей.";
		}
		else if (number % 10 == 8)
		{
			cout << "восемь рублей.";
		}
		else if (number % 10 == 9)
		{
			cout << "девять рублей.";
		}
	}
	cout << endl;
}

cout << endl;
system("pause");
return 0;
}