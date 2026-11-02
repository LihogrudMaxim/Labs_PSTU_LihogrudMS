#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a = 1000.0f;
	float b = 0.0001f;
	float f1 = (pow(a - b, 2) - (pow(a, 2) - 2.0f * a * b)) / pow(b, 2);

	double a1 = 1000.0;
	double b1 = 0.0001;
	double d1 = (pow(a1 - b1, 2) - (pow(a1, 2) - 2.0 * a1 * b1)) / pow(b1, 2);

	cout << "float: " << f1 << endl;
	cout << "double: " << d1 << endl;

	int m = 5, n = 3;
	cout << "m-++n = " << (m - ++n) << endl;

	m = 5; n = 3;
	cout << "++m>--n = " << (++m > --n) << endl;

	m = 5; n = 3;
	cout << "--n<++m = " << (--n < ++m) << endl;
	return 0;
}

