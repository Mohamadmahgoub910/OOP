#include<iostream>
#include<string>
using namespace std;
// ASSOSIATION
class square{
private:
	double del3;
public:
	void set_del3(double _del3) {
		del3 = _del3;
	}
	double get_del3() {
		return del3;
	}
	double calc_area() {
		return del3*del3;
	}
	square(double _del3) {
		del3 = _del3;
	}
	square() {

	}
	
};

//AGGREGATION 
class rectangle {
private:
	double length, width;
public:
	rectangle(double _len , double _wid) {
		length = _len;
		width = _wid;
	}
	double calc_area() {
		return length*width;
	}
	~rectangle() {
	
	}
};
//COMPOSITION 
class circle {

private:
	double radius;
	double *arr;
public:
	circle(double *_arr) {
		arr = new double[2];
		for (int i = 0; i < 2; i++)
		{
			arr[i] = _arr[i];
		}
	}
	circle(double _radius) {
		radius = _radius;
	}
	void set_arr(double *_arr) {
		arr = _arr;
	}
	double calc_circle() {
		return radius*radius*3.14;
	}
	~circle() {
		delete arr;
	}
};
class Picture {
private:
	//square 
	square s;
	//rectangle
	rectangle *r;
	//circle 
	circle *c;
	double *arr;
public:
	int a;
	/*SQUARE*/
	void set_square(square _s ) {
		s = _s;
	}
	double calc_square(square s) {
		return s.calc_area();
	}
	/*RECTANGLE*/
	string name;
	void set_rect(rectangle *_r) {
		r = _r;
	}
	double calc_rect_area(rectangle r) {
		return r.calc_area();
	}
	//CIRCLE
	void set_circle(circle *_c) {
		c = _c;
	}
	double calc_circle(circle c) {
		return c.calc_circle();
	}
	Picture() {
		a = 0;
	}
	//Rectangle
	int a1;
	string name2;
	Picture(string _name , rectangle *_r) {
		name = _name;
		r = _r;
	}
	//Circle 
	Picture(circle *_c , string _name, int _a1) {
		//deeeeeeep copy
		arr = new double[3];
		for (int i = 0; i < 3; i++) {
			c[i] = _c[i];
		}
		name = _name;
		a1 = _a1;

	}
	double sum() {
			double res;
			res = s.calc_area() + r->calc_area();
			for (int i = 0; i < 3; i++) {
				res += c[i].calc_circle();
			}
			return res;
		}
	~Picture() {
		cout << "*r deleted \n";
		r = NULL;
	}

};
int main() {
	//assosiation relation
	
	square s(2);
	cout << s.get_del3() << endl;
	Picture P;
	cout << "=== \n";
	cout<<P.calc_square(s)<<endl;

	cout << "**************** \n";
	//aggregation realation has
	rectangle r(3,3);
	cout << "The area of rectangle is \n";
	cout << P.calc_rect_area(r) << endl;
	Picture P2("Mahgoub",&r);
	cout << P2.name << endl;

	cout << "**************** \n";
	//Composition realation 

	cout << "The area of circle is \n";
	cout << "**************** \n";

	
	// summition of all areaas are 
	//cout<<P.sum();
	return 0;
}