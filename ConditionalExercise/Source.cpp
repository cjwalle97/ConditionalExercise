#include <iostream>

//2.
int ReturnLarger(int a, int b)
{
	int Largest = 0;
	if (a > b)
	{
		Largest = a;
	}
	if (a < b)
	{
		Largest = b;
	}
	return Largest;
}

//3. 
int order(int a, int b, int c, int d, int e)
{
	int total = a + b + c + d + e;
	if (total > 0)
	{

	}
	if (total < 0)
	{

	}
	if (total == 0)
	{

	}
}

//6.
int Math(int a, int b, char sign)
{
	int c;
	switch (sign)
	{
	case '+':
		c = a + b;
		break;

	case '-':
		c = a - b;
		break;

	case '*':
		c = a * b;
		break;

	case '/':
		c = a / b;
		break;

	case '%':
		c = a % b;
		break;
	}
}

//7.
int FindMonth(int month)
{
	switch (month)
	{
	case 1:
		std::cout << "31" << std::endl;
		break;

	case 2:
		std::cout << "28" << std::endl;
		break;

	case 3:
		std::cout << "31" << std::endl;
		break;

	case 4:
		std::cout << "30" << std::endl;
		break;

	case 5:
		std::cout << "31" << std::endl;
		break;

	case 6:
		std::cout << "30" << std::endl;
		break;

	case 7:
		std::cout << "31" << std::endl;
		break;

	case 8:
		std::cout << "31" << std::endl;
		break;

	case 9:
		std::cout << "30" << std::endl;
		break;

	case 10:
		std::cout << "31" << std::endl;
		break;

	case 11:
		std::cout << "30" << std::endl;
		break;

	case 12:
		std::cout << "31" << std::endl;
		break;
	}
}
int main()
{
	//1.
	int y = 0;
	int x = 0;
	if (y == 0)
	{
		x = 100;
	}
	//4.
	int choice = 1;
	switch (choice)
	{
	case 1:
		std::cout << "1" << std::endl;
		break;

	case 2:
		std::cout << "2" << std::endl;
		break;

	case 3:
		std::cout << "3" << std::endl;
		break;

	case 4:
		std::cout << "4" << std::endl;
		break;
	}
	//5.
	y = (x == 0) ? 0 : 10 / x;
}
//8.
/*a. returns true
b. returns true
c. returns false
d. returns true
e. returns true
f. returns false
g. returns true
h. returns true
i. returns false
j. returns true */

//9.
/*a. returns true
b. returns true
c. returns false
d. returns true
e. returns true*/