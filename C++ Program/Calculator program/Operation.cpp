#include <iostream>
#include <iostream>
#include <conio.h>
int main()
{
	int a, b;
start:
	std::cout << "\nEnter first value:";
	std::cin >> a;
	std::cout << "Enter second value:";
	std::cin >> b;
	std::cout << "\nAddition(+)  Subtraction(-)  Multiplication(*)  Division(/)";
	std::cout << "\nEnter any operation for these entered values : ";
	char operate;
	std::cin >> operate;
	if (operate == '+' || operate == '-' || operate == '*' || operate == '/')
	{

		switch (operate)
		{
		case '+':
			std::cout << "\nThe Addition of these values is : " << a + b;
			break;
		case '-':
			std::cout << "\nWhat do you want?\n1.Subtraction first value from second.\n2.Subtraction second value from first value.\nEnter value in 1 and 2 : ";
			int choice;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
				std::cout << "\nThe Subtraction of first value from second value is " << b - a;
				break;
			case 2:
				std::cout << "\nThe Subtraction of second value from first value is " << a - b;
				break;
			}
			break;

		case '*':
			std::cout << "\nThe Multiplication of these values is " << a * b;
			break;
		case '/':
			std::cout << "\nWhat do you want?\n1.Divide first value by second value.\n2.Divide second value by first value.\nEnter your choice in 1 and 2 : ";
			std::cin >> choice;
			switch (choice)
			{
			case 1:
				if (b < a)
				{
					std::cout << "\nYour Values are invalid for this type of operation\n";
					goto start;
				}
				else if (a == 0 || b == 0)
				{
					std::cout << "\nYour Values are invalid for this type of operation\n";
					goto start;
				}

				else
				{
					std::cout << "\nThe division of first value by second value is " << (float)a / (float)b;
				}
				break;
			case 2:
				if (a < b)
				{
					std::cout << "\nYour Values are invalid for this type of operation\n";
					goto start;
				}
				else if (a == 0 || b == 0)
				{
					std::cout << "\nYour Values are invalid for this type of operation\n";
					goto start;
				}
				else
				{
					std::cout << "\nThe division of second value by first value is " << (float)b / (float)a;
				}
				break;
			}
			break;
		}
	}
	else
	{
		std::cout << "The operator is invalid!!";
	}
	getch();
}
