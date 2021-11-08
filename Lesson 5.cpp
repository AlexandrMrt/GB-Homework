
#include <iostream>

//Task 1
void FillArr(const int SIZE, double ARR[])
{
	for (int i = 0; i < SIZE; i++)
	{
		ARR[i] = (rand() % 101) / 10.0;
	}
}

void PrintArr(const int SIZE, double ARR[])
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << ARR[i] << " ";
	}
	std::cout << std::endl;
}

//Task 2
void InvertArr(const int SIZE, int ARR[])
{
	std::cout << "before invert: ";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << ARR[i] << " ";
		ARR[i] = !ARR[i];
	}
	std::cout << std::endl;
	std::cout << "after invert:  ";
	for (int j = 0; j < SIZE; ++j)
	{
		std::cout << ARR[j] << " ";
	}
	std::cout << std::endl;
}


//Task 3
void Arr(const int SIZE, int ARR[])
{
	for (int i = 0, j = 1; i < SIZE; j += 3, ++i) 
	{
		std::cout << j << " ";
	}
	std::cout << std::endl;
}





int main()
{
	const int SIZE = 8;
	
	//Task 1
	{
		double ARR[SIZE];
		FillArr(SIZE, ARR);
		PrintArr(SIZE, ARR);
	}
	
	//Task 2
	{
		int ARR[SIZE];
		for (int i = 0; i < SIZE; i++)
		{
			ARR[i] = rand() % 2;
		}
		InvertArr(SIZE, ARR);
	}
	
	//Task 3
	int ARR[SIZE];
	Arr(SIZE, ARR);
}