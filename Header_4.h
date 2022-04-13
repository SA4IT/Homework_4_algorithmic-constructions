#ifndef FYT
#define FYT
#include<iostream>
using namespace std;
class Function {
private:
	double a_class, b_class, y_class, t_class;
public:
	void Set_temp(double a2, double b2);
	double Y_operation_return();
	double T_operation_return();
	void Print_class();
};
#endif
