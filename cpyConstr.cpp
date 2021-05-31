#include "cpyConstr.h"

#include<iostream>
using namespace std;


void cpyConstr::set_counter(int _counter)
{
	counter = _counter;
}

int cpyConstr::get_counter()
{
	return counter;
}

void cpyConstr::set_price(double _price)
{
	price = _price;
}

double cpyConstr::get_price()
{
	return price;
}



cpyConstr::cpyConstr(cpyConstr & c)
{
	//deep cpy
	counter++;
	price = c.price;
	arr = new int[2];
	for (int i = 0; i<2; i++)
	{
		arr[i] = c.arr[i];
	}
}

void cpyConstr::display()
{
	cout << "price is " << price << endl;
	cout << "Counter of cars are " << counter << endl;
}



cpyConstr::cpyConstr(double _price)
{
	price = _price;
	counter++;
	arr = new int[2];
}

cpyConstr::cpyConstr()
{
	price = 0;
	counter++;
	arr = new int[2];
}


cpyConstr::~cpyConstr()
{
	delete arr;
	counter--;
}
int cpyConstr::counter=0;