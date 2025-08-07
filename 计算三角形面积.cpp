#include<iostream>
#include<cmath>
using namespace std;

int main3(){
	double a, b, c;
	cout << "请输入三角形的三条边a,b,c的长度:" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double s = (a + b + c) / 2;
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "三角形的面积为：" << area << endl;
	}else {
			cout << "无法构成三角形" << endl;
		}
	return 0;
	}
