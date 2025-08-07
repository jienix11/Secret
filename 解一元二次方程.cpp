#include<iostream>
#include<cmath>
using namespace std;
int main2() {
	double a, b, c,d, x1, x2;
	cout << "求解一元二次方程 ax*x+bx+c=0" << endl;
	cout << "请输入a,b,c的值:" << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << "方程有两个不相等的实根：" << endl;
		cout << "x1="<< x1 << endl;
		cout << "x2" << x2 << endl;
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
		cout << "方程有两个相等的实根：" << endl;
		cout << "x1=x2=" << x1 << endl;
	}
	else if (d < 0) {
		cout << "方程没有实数根" << endl;
	}
	return 0;
}