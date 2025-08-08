#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	char choice;

	do {
		int target = rand() % 100 + 1;
		int guess;
		int count = 0;

		cout << "欢迎来到猜字游戏！" << endl;
		cout << "我生成了一个1到100之间的数字，来猜猜看吧" << endl;

		while (true) {
			cout << "你认为随机生成的数字是：";
			cin >> guess;
			count++;

			if (guess > target) {
				cout << "你猜的数字大了！" << endl;
			}
			else if (guess < target) {
				cout << "你猜的数字小了！" << endl;
			}
			else {
				cout << "恭喜你，猜对了！总共用了" << count << "次" << endl;
				break;
			}
		}
		cout << "还想再玩一次吗？（y/n):";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	cout << "游戏结束，感谢你的参与！" << endl;
	return 0;
}