

#include <iostream>
#include <cmath>
using namespace std;



class Math {
public:
	double sin_x, cos_x;
public:
	Math(double x) {
		sin_x = sin(x);
		cos_x = cos(x);
	}
	double get_cos() { return 1 / cos_x; };
	double get_cosec() { return 1 / sin_x; };
	double get_ctg() { return cos_x / sin_x; };
};

int main()
{
	setlocale(LC_ALL, "Russian");
	float g;
	cout << "Введите переменную: ";
	cin >> g;
	Math Start(g);
	double sec = Start.get_cos();
	double csec = Start.get_cosec();
	double ctg = Start.get_ctg();
	cout << "Секанс = " << sec << ", Косеканс = " << csec << ", Котангенс = " << ctg;
}