#include <iostream>
#include <iomanip>
#include <bitset>

constexpr uint8_t ASCII_COLS_NUM{16};

void printHeader()
{
	std::cout << "   ";
	for (int col = 0; col < 8; ++col)
	{
		std::cout << std::setw(5) << std::bitset<3>(col);
	}
	std::cout << std::endl;
}

void printASCIIT()
{
	for (int row = 0; row < 16; ++row)
	{
		std::cout << std::setw(3) << std::bitset<4>(row) << " ";

		for (int col = 0; col < 8; ++col)
		{
			int asciiValue = ASCII_COLS_NUM * col + row;
			char symbol = (asciiValue >= 32 && asciiValue <= 126) ? static_cast<char>(asciiValue) : '.';
			std::cout << std::setw(5) << symbol;
		}
		std::cout << std::endl;
	}
}

int main()
{
	printHeader();
	printASCIIT();
	return 0;
}
