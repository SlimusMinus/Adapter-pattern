#include "Convert.h"

float Dollar::convert()
{
	float one_dollar = 75.44;
	return one_dollar;
}

float Adapter::convert_rub(int quantity, float price)
{
	return (dol->convert() * quantity * price);
}
