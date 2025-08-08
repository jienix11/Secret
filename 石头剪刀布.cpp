#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	char choice;
	int count = 0;

	do {
		int computer;
		int user;

		cout << "欢迎来到剪刀石头布游戏！" << endl;
		cout << "请选择: 石头（0）剪刀（1）布（2）" << endl;
		cin >> user;
		while (user < 0 || user >2) {
			cout << "输入无效，请重新输 石头（0）剪刀（1）布（2）" << endl;
			cin.ignore(100, '\n');
			cin >> user;
		}

		computer = rand() % 3;
		cout << "电脑选择了：" << computer << endl;
		switch (computer) {
		case 0:
			cout << "电脑选择了石头" << endl; break;
		case 1:
			cout << "电脑选择了剪刀" << endl; break;
		case 2:
			cout << "电脑选择了布" << endl; break;
		}
		if (user == computer) {
			cout << "平局！" << endl;
		}
		else if ((user == 0 && computer == 1) || (user == 1 && computer == 2) || (user == 2 && computer == 0)) {
			cout << "恭喜，你赢了！" << endl;
			count++;
		}
		else if ((computer == 0 && user == 1) || (computer == 1 && user == 2) || (computer == 2 && user == 0)) {
			cout << "你输了" << endl;
		}

		cout << "你还想再玩一次吗？（y/n)" << endl;
		cin >> choice;
		while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
			cout << "请输入y/n:";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> choice;
		}

	}while (choice == 'y' || choice == 'Y');

	cout << "游戏结束，谢谢参与QwQ" << endl;
	cout << "你一共赢了:" << count << "次" << endl;

	return 0;
}
