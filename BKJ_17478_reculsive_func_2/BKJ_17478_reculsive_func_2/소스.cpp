#include <iostream>
#include <string>
using namespace std;

int n;
string bar = "----";
string start = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.";
string question = "\"재귀함수가 뭔가요?\"";
string ans_rp1 = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
string ans_rp2 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
string ans_rp3 = "그의 답은 대부분 옳았다고 하네.그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
string ans_end = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";

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