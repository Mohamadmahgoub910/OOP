#include<iostream>
#include<string>
using namespace std;
class shape {
private:
	double dim;
public :
		 void set_dim(double _dim) {
			dim = _dim;
	}
		 double get_dim() {
			 return dim;
		 }
		 virtual double calc_area() {
			 return dim;
		 }

	
};
class circle :public shape {

public:
	/*circle(double _dim) {
		set_dim(_dim);
	}*/
	
	double calc_area() {
		
		return get_dim()*get_dim()*3.14;
	}
	
	
};
class rectangle :public shape {
private:
	double dim2;
public:
	/*rectangle(double _dim1, double _dim2) {
		set_dim(_dim1);
		dim2 = _dim2;
	}*/
	void set_dim2(double _dim2) {
		dim2 = _dim2;
	}
	double get_dim2() {
		return dim2;
	}
	double calc_area() {
		return get_dim()*get_dim2() ;
	}
	
	
	
};
class square :public shape {

public:
	/*square(double _dim) {
		set_dim (_dim);
	}*/
	 double calc_area() {
		return get_dim()*get_dim();
	}
	
	
	
};




class Picture {
private:
	shape *sh[3];

public:
	Picture(shape *_sh[]) {
		sh[0] = _sh[0];
		sh[1] = _sh[1];
		sh[2] = sh[2];

	}
	void set_shap(shape *_sh[]) {

		for (int i = 0; i < 4; i++) {
			sh[i] = _sh[i];
		}
	}
	double get_area() {
		double area = 0;
		for (int i = 0; i < 4; i++) {
			area += sh[i]-> calc_area();
		}
		return area;
	}
	
	

};
int main() {

	circle c;
	rectangle r;
	square s;
	shape *sh[3];
	sh[0] = &c;
	sh[1] = &r;
	sh[2] = &s;

	Picture p(sh);
	cout << "areas are \n";
	cout << p.get_area() << endl;



	return 0;
}