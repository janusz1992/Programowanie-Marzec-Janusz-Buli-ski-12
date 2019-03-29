#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

	string ConvertFromSymbolic(string);

		int main()
		{
			cout << ConvertFromSymbolic("4M") << endl;

			cout << ConvertFromSymbolic("5.434B") << endl;
			 
			cout << ConvertFromSymbolic("54T") << endl;

		}

	string ConvertFromSymbolic(string temp)
		{
			string result;

			int size = temp.length();

			int showDots = 0;

			int wherZeros = 0;

	for (int i = 0; i < size; i++)
		{
			if (temp[i] == 'M')
			{
				wherZeros = 6;
			}
			if (temp[i] == 'B')
			{
				wherZeros = 9;
			}
			if (temp[i] == 'T')
			{
				wherZeros = 12;
			}
		if (temp[i] == 'Q' && temp[i + 1] == 'a')
			{
			wherZeros = 15;
			}
		if (temp[i] == 'Q' && temp[i + 1] == 'i')
			{
			wherZeros = 18;
			}
		if (temp[i] == 'S' && temp[i + 1] == 'x')
			{
			wherZeros = 21;
			}
		if (temp[i] == 'S' && temp[i + 1] == 'i')
			{
			wherZeros = 24;
			}
		if (temp[i] == 'O' && temp[i + 1] == 'c')
			{
			wherZeros = 27;
			}
	}
		for (int i = 0; i < size; i++)
		{
			if (temp[i] == '.')
			{
			showDots = i;
			}
		}
			if (showDots == 0)
					{
					showDots = size - 2;
					}
			wherZeros = wherZeros - (size - (showDots + 2));
			for (int i = 0; i < size;i++)
				{
				if (i == size - 1 + wherZeros && i != size - 1)
					result += ".";
				if (temp[i] <= '9' && temp[i] >= 48)
					result += temp[i];
				}
			for (int j = 0; j < wherZeros; j++) 
				{
					result += "0";
				}
					return result;

}

