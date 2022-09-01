# include <iostream>
using namespace std;

int n;
int factorial(int num) {
	int i = num;
	int answ;
	if (i <= 1) return 1;
	else {
		answ = factorial(i - 1) * i;
		i--;
	}
	return answ;
}
int main() {
	cin >> n;
	cout << factorial(n);
}