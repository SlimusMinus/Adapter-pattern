#include <iostream>
using namespace std;

class Dollar
{
public:
	float convert();
};

class Product
{
public:
	virtual float convert_rub(int quantity, float price) = 0;
};

class Adapter : public Product
{
private:
	Dollar* dol;
public:
	Adapter(Dollar* dollar) { dol = dollar; }
	float convert_rub(int quantity, float price) override;

};


