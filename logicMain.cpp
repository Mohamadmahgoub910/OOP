#include<iostream>
#include<string>
#include"Logic.h"
using namespace std;
int main(){
	/*
	 ==> project :-
	1- make a new array private
	 2- insert values from in and outside the program
	 3-make a pointer from and inside  the project
	 4- make a pointer of array point to address of values and get it
	 5- have 2 object of array  make operator > bool type to check who arr in the object is bigger
	*/
	int arr[3] = { 1, 2, 3 };
	//(method 1 define array from inside)
	Logic L1, L2;
	L1.set_arr(1);
	L1.set_arr(2);
	L1.set_arr(3);

	L2=L1;

	cout << L2.get_arr(0) << "," << L2.get_arr(1) << "," << L2.get_arr(2) << endl;

	
	//(method 2 define array from outside) contains relation
	int v = 3;
	int *a = &v;
	Logic L11, L22;
	L11.set_arrPtr(a);
	L11.set_arrPtr(a);
	L11.set_arrPtr(a);

	L22.equal(L11);

	cout << L22.get_arrP() << "," << L22.get_arrP() << "," << L22.get_arrP() << endl;

	// check which array is bigger .
	Logic L3, L4;
	L3.set_arr(4);
	L3.set_arr(3);
	L3.set_arr(5);

	L4.set_arr(1);
	L4.set_arr(2);
	L4.set_arr(3);

	if (L3 > L4) {
		cout << "L3 is bigger \n";
	}
	else
		cout << "L4 is bigger \n";


	//system("pause");
    return 0;
}

/*
class ArrayClass{
public:
ArrayClass(int* array, int size){
a = new int[size];
for (int i(0); i < size; i++) {
this->a[i] = array[i];
}
this->size = size;
}
virtual ~ArrayClass(){
delete[] a;
}
private:
int* a;
int size;
};

int main(int argc, char** argv){
int array[3] = { 1, 2, 3 };
ArrayClass a2(array, 3);
return 0;
}


*/