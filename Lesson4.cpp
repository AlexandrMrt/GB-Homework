
#include <iostream>

int main()
{
	// Task 1
	int a, b;
	std::cout << "Enter a and b: " << std::endl;
	std::cin >> a >> b;
	if (a + b >= 10 && a + b <= 20)
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	//Task 2
	std::cout << "Enter a and b: " << std::endl;
	std::cin >> a >> b;
	if (a == 10 || b == 10 || a + b == 10)
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	//Task 3
	int Range;
	std::cout << "Odd numbers: ";
	for (Range = 0; Range < 50; Range++)
	{
		if (Range % 2 == 0)
		{
			continue;
		}
		else
		{
			std::cout << Range << " ";
		}
	}
	
	//Task 4
	int i, n;
	bool Prime = true;
	std::cout << std::endl;
	std::cout << "Enter a positive integer: ";
	std::cin >> n;
	if (n == 0 || n == 1)
	{
			Prime = false;
	}
	else
	{
		for (i = 2; i <= n / 2; ++i)
		{
			if (n % i == 0)
			{
				Prime = false;
				break;
			}
		}
	}
	if (Prime)
		std::cout << n << " is a prime number" << std::endl;
	else
		std::cout << n << " is not a prime number" << std::endl;
	
	return 0;
}
