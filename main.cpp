#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main_menu() {
	cout << "�ȳ��ϼ���\n";
	cout << "1 : ���� ����� ����\n";
	cout << "2 : �α� ����\n";
	cout << "3 : �̷� ������ �����?\n";
	cout << "4 : �����ϱ�\n";
	cout << "\n";

	int ret;
	cin >> ret;

	return ret;
}

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

void pour_juice(string str) {
	string temp;
	bool check_type = 1;	// 1�̸� �����, 0�̸� ml�� ����
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			if (check_type == 1) {
				// ����� �����ϱ�
			}
			else {
				// �� ml��ŭ �ξ�
				int ml = 0;
				
				int unit = temp.length();
				for (int i = 0; i < temp.length(); i++) {
					ml += (pow(10, unit - 1) * temp[i]);
					unit--;
				}
			}
			check_type = !check_type;	// type ��ȯ
		}
		else {
			temp += str[i];
		}
	}
}

int main() {

	int menu = main_menu();

	vector<string> mix;	// ���⿡ ���� �����صѰ���

	vector<pair<int, int>> v;	// <������ index, �ֹ� Ƚ��>
	for (int i = 0; i < 10; i++) {
		v.push_back(make_pair(i, i % 5));
	}

	for (int i = 0; i < 10; i++) {
		string tmp;
		if (i <= 5)
			tmp = "�ȳ��ϼ���";
		else
			tmp = "�߰��碌";

		mix.push_back(tmp);
	}

	/*

	for (int i = 0; i < mix.size(); i++)
		cout << mix[i] << endl;

	*/

	cout << endl;

	if (menu == 2) {
		sort(v.begin(), v.end(), cmp);

		cout << "�̷� ������ �־��\n\n";

		for (int i = 0; i < v.size(); i++)
			cout << i << "  ||  " << mix[v[i].first] << "\n";

		cout << "���ϴ� ������ �������ּ���\n";

		int choice;
		cin >> choice;

		cout << "\n" << mix[choice] << " ������ �����Ͽ����ϴ�.\n";
		cout << "���� �����մϴ�...\n";

		//���⼭���� ���� �ױ� ������
	}



	return 0;
}