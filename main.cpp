#include<iostream>
#include<string>
using namespace std;
#include"cpyConstr.h"



void abc(cpyConstr c)
{
	c.arr[0] = 10;
	
}

int main() {
	cout << "Hi smart \n";
	//Complex c1(3, 5), c3(6, 7);
	//Complex res;
	////res = Complex::add(c1, c3);
	//cout << Complex::GetCounter();
	////res.Display();
	cpyConstr c1;
	c1.set_price(2);
	//cout << c1.get_counter() << endl; //print 1
	c1.display();

	// each object has it's own copy of his data .
	c1.arr[0] = 4;
	abc(c1);
	cout << c1.arr[0] << endl;

	return 0;
}