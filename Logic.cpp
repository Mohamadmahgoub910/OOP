#include "Logic.h"
#include<iostream>
#include<string>

using namespace std;

// set arr with value inside 
void Logic::set_arr(int value)
{
	arr[index++] = value;
}




int Logic::get_arr(int _index)
{
	return arr[_index];
}
//set arr with *ptr from outside 
void Logic::set_arrPtr(int *_arr)
{
	this->arrP = new int[3];
	for (int i = 0; i < 3; i++) {
		arrP[i] = _arr[i];
	}

}
int * Logic::get_arrP()
{
	return arrP;
}
//Deep Copy 

void Logic::operator=(Logic L)
{

	for (int i = 0; i < 3; i++) {
		arr[i] = L.arr[i];
	}
	this->ptr = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr[i] = L.ptr[i];
	}
}

void Logic::equal(Logic L)
{
	for (int i = 0; i < 3; i++) {
		arr[i] = L.arr[i];
	}
	arrP = new int[3];
	for (int i = 0; i < 3; i++) {
		arrP[i] = L.arrP[i];
	}
}

bool Logic::operator>(Logic L)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i] > L.arr[j]) {
				return arr[i];
			}
			else
			{
				return L.arr[i];
			}
		}
	}
}

/*
void Logic::set_index(int _index=0)
{
	index = _index;
}
*/
Logic::Logic()
{
	this->ptr = new int[3];
}






Logic::~Logic()
{
}
