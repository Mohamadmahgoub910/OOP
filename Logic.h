#pragma once
#include<iostream>
#include<string>
#include"Logic.h"
using namespace std;

class Logic
{
	//(1)-->  how to initlize an array in object.
private:
	
	int index =0;
	int arr[3];
	int *ptr;
	// to know arr from outside.
	int *arrP;
public:
	
	// set and get array
	void set_arr(int );
	int get_arr(int);

	//set arr with *ptr from outside
	void set_arrPtr(int *);
	int * get_arrP();

	//deep copy
	void operator=(Logic);	
	//void set_index(int );
	// deep copy on array from outside.
	 void  equal(Logic);
	//which object of arr is bigger ?
	bool operator>(Logic);


	Logic();
	~Logic();
};

