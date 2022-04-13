#include "Header_4.h"

int main() {
	double a = 4.6, b = 1.5;
	double y_temp, t_temp;
	Function temp;
	temp.Set_temp(a, b);
	temp.Y_operation_return();
	temp.T_operation_return();
	temp.Print_class();
	return 0;
}