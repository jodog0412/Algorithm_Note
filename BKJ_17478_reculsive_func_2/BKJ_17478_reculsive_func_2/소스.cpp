#include <iostream>
#include <string>
using namespace std;

int n;
string bar = "----";
string start = "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.";
string question = "\"����Լ��� ������?\"";
string ans_rp1 = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.";
string ans_rp2 = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.";
string ans_rp3 = "���� ���� ��κ� �ǾҴٰ� �ϳ�.�׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"";
string ans_end = "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"";

string bar_print(int num) {
	string bar_sum;
	for (int j = 0; j < num; j++)
		bar_sum += bar;
	return bar_sum;
}
void printing(int num) {
	for (int i = 0; i <= n; i++) {
		if (i < n) {
			cout << bar_print(i) << question << "\n";
			cout << bar_print(i) << ans_rp1 << "\n";
			cout << bar_print(i) << ans_rp2 << "\n";
			cout << bar_print(i) << ans_rp3 << "\n";
		}
		else {
			cout << bar_print(i) << question << "\n";
			cout << bar_print(i) << ans_end << "\n";
		}
	}
}

int main() {
	cin >> n;
	cout << start;
	printing(n);
}