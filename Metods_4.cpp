#include "Header_4.h"

void Function:: Set_temp(double a2, double b2) {
	a_class = a2;
	b_class = b2;
}
double Function::Y_operation_return() {
	if (a_class <= b_class) {
		y_class = ((a_class - b_class) / (a_class + b_class)) * ((a_class + b_class) / (pow(a_class, 2) + a_class * b_class + pow(b_class, 2)));
		return y_class;
	}
	if (a_class > b_class) {
		y_class = a_class + log10(pow(b_class, 2));
		return y_class;
	}
}

double Function::T_operation_return() {
	if (y_class == b_class) {
		t_class = (2 * y_class + sqrt(pow(y_class, 2) - a_class)) / (2 * b_class - sqrt(pow(a_class, 2) - y_class));
		return y_class;
	}
	if (y_class < b_class) {
		t_class = pow(sin(y_class), 2) + (1 / tan(a_class - b_class));
		return y_class;
	}
	if (y_class > b_class) {
		t_class = pow(y_class * sin(a_class), 1 / 3) + (1 / sqrt(y_class * cos(b_class)));
		return y_class;
	}
}

void Function::Print_class() {
	cout << "a = " << a_class << endl;
	cout << "b = " << b_class << endl;
	cout << "y = " << y_class << endl;
	cout << "t = " << t_class << endl;
}

	