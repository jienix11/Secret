#include<iostream>
using namespace std;

double readNumber();
double readNumber() {
	double num;
	while (!(cin >> num)) {
		cout << "错误！请输入一个有效数字" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "请重新输入：";
	}
	cin.ignore(1000, '\n');
	return num;
}

int main() {
	double num1, num2;
	char op;
	char choice;

	do {
		cout << "简易计算器" << endl;
		cout << "请输入第一个数字" << endl;
		num1 = readNumber();

		cout << "请输入运算符 （+，-，*，/)" << endl;
		cin >> op;
		if (op != '+' && op != '-' && op != '*' && op != '/') {
			cout << "无效运算符" << endl;
			cout << "是否继续？（y/n):" << endl;
			cin >> choice;
			while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
				cout << "请输入y/n:";
				cin.clear();
				cin.ignore(100, '\n');
				cin >> choice;
			}
			continue;
		}

		cout << "请输入第二个数字" << endl;
		num2 = readNumber();

		switch (op) {
		case '+':
			cout << "计算结果:" << num1 << "+" << num2 << "=" << num1 + num2 << endl;
			break;
		case '-':
			cout << "计算结果：" << num1 << "-" << num2 << "-" << num1 - num2 << endl;
			break;
		case '*':
			cout << "计算结果：" << num1 << "*" << num2 << "*" << num1 * num2 << endl;
			break;
		case'/':
			if (num2 != 0) {
				cout << "计算结果：" << num1 << "/" << num2 << "=" << num1 / num2 << endl;
			}
			else {
				cout << "错误！除数不能为0" << endl;
				cout << "是否继续？（y/n)";
				cin >> choice;
				while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
					cout << "请输入y/n:";
					cin.clear();
					cin.ignore(100, '\n');
					cin >> choice;
				}
				continue;
			}
			break;
		}

		cout << "是否继续？（y/n)";
		cin >> choice;
		while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
			cout << "请输入y/n:";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> choice;
		}

	} while (choice == 'y' || choice == 'Y');

	cout << "程序结束，谢谢使用" << endl;
	return 0;
}