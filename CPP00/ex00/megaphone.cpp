//
// Created by Tile Tyuuki on 10.06.2022.
//

#include <iostream>

void PrintUpper(char **arr)
{
	for (int i = 0; arr[i]; i++)
	{
		for (int j = 0; arr[i][j]; j++)
			std::cout << (char)toupper(arr[i][j]);
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
		PrintUpper(&argv[1]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}