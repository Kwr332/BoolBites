#include <cstdint>
#include <iostream>

void ok(uint16_t* arr);
int main()
{
	uint16_t array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			array[i] = 0;
		}
		else
		{
			array[i] = 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i];
	}
	std::cout << std::endl;
	ok(array);
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i];
	}
	std::cout << std::endl;
	return 0;
}
void ok(uint16_t* arr)
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] ^= i;
	}
}
