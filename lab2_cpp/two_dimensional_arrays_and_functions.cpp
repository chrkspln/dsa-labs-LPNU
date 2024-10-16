#include <iostream>
#include <cstdlib>
#include <ctime>

void initializeArray(int rows, int cols, int array[][10])
{
	srand(time(nullptr));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = rand() % 2;
		}
	}
}

void printArray(int rows, int cols, int array[][10])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << '\n';
	}
}

int countNeighbors(int rows, int cols, int array[][10], int targetRow, int targetCol)
{
	int count = 0;

	for (int i = targetRow - 1; i <= targetRow + 1; i++)
	{
		for (int j = targetCol - 1; j <= targetCol + 1; j++)
		{
			if (i >= 0 && i < rows && j >= 0 && j < cols)
			{
				if (i == targetRow && j == targetCol) continue;
				if (array[i][j] == 1) count++;
			}
		}
	}

	return count;
}

int main()
{
	constexpr uint8_t rows{15}, cols{10};
	int array[rows][cols];

	initializeArray(rows, cols, array);

	std::cout << "Generated array:" << '\n';
	printArray(rows, cols, array);

	int neighbors = countNeighbors(rows, cols, array, 2, 2);
	std::cout << "Number of neighbors equal to 1 around element (2,2): " << neighbors << '\n';

	return 0;
}
