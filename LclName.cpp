#include <iostream>

int add_values(int a, int b)
{
	int value;
	value = a + b;
	return(value);
}

int main(void)
{
	int value       = 1001;
	int other_value = 2002;
	std::cout << value << " + " << other_value << " = " 
		<< add_values(value, other_value) << std::endl;
}